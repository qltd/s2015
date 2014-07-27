(function ($) {
  Drupal.behaviors.s2015SiteSearch = {
    attach: function () {
      var form = $('.site-search .search-block-form')
        , submit = $('.site-search .form-submit');

      submit.click(function (event) {
        event.preventDefault();
        var text = $('.site-search .form-text');
        if (text.val()) $(form).submit();
      });
    }
  };
})(jQuery);
