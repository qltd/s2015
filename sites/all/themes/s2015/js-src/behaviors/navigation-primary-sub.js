(function ($) {
  Drupal.behaviors.s2015PrimarySubNavigation = {
    attach: function () {

      /**
       * For Attendees Sub-Navigation
       */
      var menu = $('.primary-sub-navigation-for-attendees');
      if (!menu.length) return;
      var col3 = $('.primary-navigation-attendees-col-3')
        , informationPlanning = $('.primary-navigation-information-planning')
        , programsEvents = $('.primary-navigation-programs-events');

      programsEvents.click(function () {
        if (programsEvents.hasClass('active-trail')) {
          programsEvents.removeClass('active-trail').parent().removeClass('active-trail');
          col3.removeClass('active-trail').parent().removeClass('active-trail');
        } else {
          programsEvents.addClass('active-trail').parent().addClass('active-trail');
          col3.addClass('active-trail').parent().addClass('active-trail');
        }
      });
      informationPlanning.click(function () {
        informationPlanning.toggleClass('active-trail');
      });

      // sync active state across related "For Attendees" columns
      if (programsEvents.hasClass('active-trail')) col3
        .addClass('active-trail')
        .parent()
        .addClass('active-trail');
      if (col3.hasClass('active-trail')) programsEvents
        .addClass('active-trail')
        .parent()
        .addClass('active-trail');
    }
  };
})(jQuery);
