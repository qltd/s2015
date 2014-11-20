(function ($) {
  Drupal.behaviors.s2015MediaGallery = {
    attach: function () {
      var thumbs = $('.gallery-media-thumb')
        , gallery = $('.gallery-media');
      if (!thumbs.length || !gallery.length) return;

      thumbs.click(function (e) {
        e.preventDefault();
        var mediaActive = $(this);
        thumbs.removeClass('active-media');
        mediaActive.addClass('active-media');
        if (mediaActive.children('.media-gallery-lg-image').length) {
          var content = mediaActive.html();
          gallery.html(content);
        } else if (mediaActive.children('.button-play-video').length) {
          var embedUrl = $('.button-play-video').attr('data-embed-url');
          gallery.html('<iframe width="570" height="363" src="' + embedUrl + '" frameborder="0" allowfullscreen></iframe>');
        }
      });
    }
  };
})(jQuery);
