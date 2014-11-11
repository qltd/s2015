(function ($) {
  Drupal.behaviors.s2015PrimaryNavigation = {
    attach: function () {
      var docRef = $(document)
        , style = $(document.createElement('style'));

      style.attr('type', 'text/css');
      $('head').append(style);

      var applyStyle = function (width) {
        style.text('.primary-navigation-expanded-top > .menu-link:after { width: ' + width + 'px }');
      };

      $(window).resize(function () {
        applyStyle(docRef.width());
      });

      applyStyle(docRef.width());
    }
  };
})(jQuery);
