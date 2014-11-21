(function ($) {
  Drupal.behaviors.s2015MediaGallery = {
    attach: function () {
      var item = $('.media-gallery-list-item')
        , gallery = $('.gallery-media')
        , thumb = $('.gallery-media-thumb');
      if (!item.length || !gallery.length) return;

      item.click(function (e) {
        e.preventDefault();
        console.log(this);
        var mediaActive = $(this);
        item.children(thumb).removeClass('active-media');
        mediaActive.children(thumb).addClass('active-media');
        if (mediaActive.children(thumb).length) {
          var content = mediaActive.html();
          //var caption = $(mediaActive).next('div').html();
          gallery.html(content);
          // console.log(caption);
          // if (caption.length) {
          //   gallery.append('<div class="gallery-caption">' + caption + '</div>"');
          // }
        } else if (mediaActive.find('.button-play-video').length) {
          var embedUrl = $('.button-play-video').attr('data-embed-url');
          gallery.html('<iframe width="570" height="363" src="' + embedUrl + '" frameborder="0" allowfullscreen></iframe>');
        }
      });
    }
  };
})(jQuery);
