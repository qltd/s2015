// Generated by CoffeeScript 1.4.0
(function($) {
    Drupal.behaviors.blueButton = {
        attach: function(){
            console.log(jQuery);
            jQuery('.blue-reg-button').click(function() {
              var _gaq;
              _gaq = _gaq || [];
              _gaq.push(['send', 'event', 'Site Exit', 'Registration', '2015 Conference']);
              window.open('https://register.rcsreg.com/r2/siggraph2015/', '_blank');
            });
        }
    };
}).call(jQuery);
