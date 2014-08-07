(function ($) {
  var delay = 5000 // how long each tweet should be visible
    , transition = 250; // how long it takes for a tweet to transition to hidden

  var rotate = function (items, count) {
    $(items[count]).addClass('active');
    window.setTimeout(function () {
      $(items[count]).addClass('fade-out');
      rotate(items, count + 1 !== items.length ? count + 1 : 0);
      window.setTimeout(function () {
        $(items[count]).removeClass('active');
        $(items[count]).removeClass('fade-out');
      }, transition);
    }, delay);
  };

  Drupal.behaviors.s2015FrontTwitter = {
    attach: function () {
      var container = $('.front-twitter');
      if (!container.length) return; // container not found
      var list = $('.twitter-tweets-list')
        , items = $('.twitter-tweets-list-item')
        , i = items.length;
      if (i <= 1) return; // one or fewer items - nothing to rotate
      list.addClass('twitter-tweets-rotating');
      rotate(items, 0);
    }
  };
})(jQuery);
