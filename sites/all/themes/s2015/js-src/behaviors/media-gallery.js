(function ($) {
  Drupal.behaviors.s2015MediaGallery = {
    attach: function () {
      var item = $('.media-gallery-list-item')
        , main = $('.media-gallery-main');

      if (!item.length || !main.length) return;

      item.click(function (e) {
        e.preventDefault();
        var mediaActive = $(this);

        item.removeClass('media-gallery-list-item-active');
        mediaActive.addClass('media-gallery-list-item-active');

        if (mediaActive.find('.gallery-image').length) {
          main.html(mediaActive.html());

        } else if (mediaActive.find('.button-play-video').length) {
          var galleryContainer = $(document.createElement('div'))
            , galleryMedia = $(document.createElement('div'))
            , embedUrl = mediaActive.find('.button-play-video').attr('data-embed-url')
            , iframe = $(document.createElement('iframe'));

          iframe.attr({
            allowfullscreen: '',
            frameborder: 0,
            height: 363,
            width: 570,
            src: embedUrl
          });
          galleryMedia.addClass('gallery-media');
          galleryMedia.append(iframe);
          galleryContainer.append(galleryMedia);

          main.html(galleryContainer.html());
        }
      });
    }
  };
})(jQuery);
