(function ($) {
  Drupal.behaviors.s2015SiteSearch = {
    attach: function () {
      var block = $('.site-search')
        , form = $('.site-search .search-block-form')
        , submit = $('.site-search .form-submit')
        , text = $('.site-search .form-text');

      text.click(function () {
        block.addClass('expanded');
      });
      text.blur(function () {
        if (!text.val()) return block.removeClass('expanded');
      });

      submit.click(function (event) {
        event.preventDefault();
        if (text.val()) return $(form).submit();
        block.addClass('expanded');
        text.focus();
      });
    }
  };
})(jQuery);
