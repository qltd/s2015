(function ($) {

  Drupal.behaviors.s2015SiteSearch = {
    attach: function () {
      var formText = $('.site-search .form-text')
        , submitButton = $('.site-search .form-submit');

      submitButton.click(function (event) {
        event.preventDefault();
      });
    }
  };
})(jQuery);
