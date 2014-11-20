(function ($) {
  Drupal.behaviors.s2015MediaGallery = {
    attach: function () {
      var item = $('.gallery-media-thumb');
      if (!item.length) return;

      item.click(function (e) {
          e.preventDefault();
          $('.gallery-media-thumb').removeClass('active-media');
          $(this).addClass('active-media');
          if ($('.media-gallery-lg-image').length) {
            var content = $(this).html();
            console.log(content);
            $('.gallery-media').html(content);
          } else if ($('.button-play-video').length) {
            var oldElem = $('.button-play-video');
            var newElemUrl = oldElem.getAttribute('data-embed-url');
            console.log(newElemUrl);
            //$('.gallery-media').html('<iframe width="570" height="363" src="'+embedUrl+'" frameborder="0" allowfullscreen></iframe>');

          }
      });
    }
  };
})(jQuery);
