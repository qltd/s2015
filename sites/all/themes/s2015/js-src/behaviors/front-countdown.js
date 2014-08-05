(function ($) {
  Drupal.behaviors.s2015FrontCountdown = {
    attach: function () {
      var container = $('.front-countdown');
      if (!container.length) return;
      var dayCount = $('.front-countdown-count')
        , pie = $('.countdown-pie')
        , pieSlice = $('.countdown-pie-slice');

      var dateEnd = new Date(pie.attr('data-date'))
        , dateStart = new Date()
        , daysTotal = parseInt(pie.attr('data-days'))
        , daysRemaining = Math.floor(( dateEnd - dateStart ) / ( 1000 * 60 * 60 * 24 ))
        , pieSliceDegrees = 360 - Math.floor(( daysRemaining / daysTotal ) * 360)
        , pieStyles = $(document.createElement('style'));

      dayCount.text(daysRemaining);
      if (pieSliceDegrees > 180) pieSlice.addClass('big-slice');
      pieStyles.text('.countdown-pie-slice:before {\
        -moz-transform: rotate(' + pieSliceDegrees + 'deg); /* Firefox */\
        -ms-transform: rotate(' + pieSliceDegrees + 'deg); /* IE */\
        -webkit-transform: rotate(' + pieSliceDegrees + 'deg); /* Safari and Chrome */\
        -o-transform: rotate(' + pieSliceDegrees + 'deg); /* Opera */\
        transform: rotate(' + pieSliceDegrees + 'deg);\
      }');
      $('head').append(pieStyles);
    }
  };
})(jQuery);
