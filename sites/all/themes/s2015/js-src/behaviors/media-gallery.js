(function ($) {
  Drupal.behaviors.s2015MediaGallery = {
    attach: function () {
      var item = $('.media-gallery-list-item');
      if (!item.length) return;

      item.click(function (e) {
          e.preventDefault();
          var url = $(this).children('.button-play-video').attr('href');
          var embedUrl = url.replace('watch?v=', 'embed/').replace('&start', '?start');
          //var playButton = $('.button-play-video');
          console.log(embedUrl);
      });
    }
  };
})(jQuery);
