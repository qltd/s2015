(function ($) {
  Drupal.behaviors.s2015MediaGallery = {
    attach: function () {
      var item = $('.media-gallery-list-item')
        , gallery = $('.gallery-media');
      if (!item.length || !gallery.length) return;

      item.click(function (e) {
        e.preventDefault();
        var mediaActive = $(this);
        item.children().removeClass('active-media');
        mediaActive.children().addClass('active-media');
        if (mediaActive.find('.media-gallery-lg-image').length) {
          var content = mediaActive.html();
          gallery.html(content);
        } else if (mediaActive.find('.button-play-video').length) {
          var embedUrl = $('.button-play-video').attr('data-embed-url');
          gallery.html('<iframe width="570" height="363" src="' + embedUrl + '" frameborder="0" allowfullscreen></iframe>');
        }
      });
    }
  };
})(jQuery);
