(function ($) {
  Drupal.behaviors.s2015SiteSearch = {
    attach: function () {
      var block = $('.site-search')
        , form = $('.site-search .search-block-form')
        , submit = $('.site-search .form-submit')
        , text = $('.site-search .form-text');

      submit.click(function (event) {
        event.preventDefault();
        if (text.val()) return $(form).submit();
        block.addClass('expanded');
        text.focus();
      });

      text.blur(function () {
        if (!text.val()) return block.removeClass('expanded');
      });

    }
  };
})(jQuery);
