// Generated by CoffeeScript 1.9.1
(function() {
  var $, days, months;

  $ = jQuery;

  days = ['Sunday', 'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday'];

  months = ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'October', 'November', 'December'];

  $(document).ready(function() {
    var breadcrumb_content, csc, currentDay, total_length_of_bof_array, updated_breadcrumb_content, updated_csc;
    currentDay = -1;
    total_length_of_bof_array = $('.birds-of-a-feather .date-display-single').length;
    $('.birds-of-a-feather .date-display-single').each((function(_this) {
      return function(index, element) {
        var date, datePrint, date_content, day, month, updated_date_content;
        if (!(index % 2)) {
          date_content = $(element).html();
          updated_date_content = date_content.replace(/August/, 'August,').replace(/PM/, 'pm').replace(/AM/, 'am').replace(/09/, '9');
          $(element).html(updated_date_content);
          date = new Date($(element).attr('content'));
          day = date.getUTCDay();
          month = date.getUTCMonth();
          datePrint = days[day] + ', ' + date.getUTCDate() + ' ' + months[month];
          if (day !== currentDay) {
            $('#birds-of-a-feather-day-list').append('<li><a href="#' + days[day] + '">' + datePrint + '</a></li>');
            $(element).closest('.views-row').prepend('<h2 class="conference-date-header" id="' + days[day] + '">' + datePrint + '</h2>');
            if (currentDay > -1) {
              $(element).closest('.views-row').prev().append('<p class="b-top-btn"><br><a href="#">Back to Top</a></p>');
            }
            currentDay = day;
          }
        } else {
          date_content = $(element).html();
          updated_date_content = date_content.replace(/PM/, 'pm').replace(/AM/, 'am');
          $(element).html(updated_date_content);
        }
        if (index === total_length_of_bof_array - 1) {
          return $(element).closest('.views-row').append('<p class="b-top-btn"><br><a href="#">Back to Top</a></p>');
        }
      };
    })(this));
    $('.primary-navigation-programs-events').removeClass('active-trail').parent().removeClass('active-trail');
    $('.primary-navigation-attendees-col-3').removeClass('active-trail').parent().removeClass('active-trail');
    $('.view-sessions-and-events .date-display-single').each((function(_this) {
      return function(index, element) {
        var date_content, updated_date_content;
        date_content = $(element).html();
        updated_date_content = date_content.replace(/PM/, 'pm').replace(/AM/, 'am').replace(/09/, '9').replace(/August/, 'August');
        return $(element).html(updated_date_content);
      };
    })(this));
    $('.view-sessions-and-events .date-location, .sessions-events .date-location').each((function(_this) {
      return function(index, element) {
        var date_content, updated_date_content;
        date_content = $(element).html();
        updated_date_content = date_content.replace(/\s\|/g, ',');
        return $(element).html(updated_date_content);
      };
    })(this));
    $('.view-sessions-and-events .view-content div p:not(".body-wrapper")').each((function(_this) {
      return function(index, element) {
        return $(element).addClass('imported-content-p');
      };
    })(this));
    $('.affiliation-wrapper p').each((function(_this) {
      return function(index, element) {
        var content, updated_content;
        content = $(element).html();
        updated_content = content.replace(/Moderators/, '<strong>Moderators</strong>').replace(/Moderator/, '<strong>Moderator</strong>').replace(/Panelists/, '<strong>Panelists</strong>');
        return $(element).html(updated_content);
      };
    })(this));
    breadcrumb_content = $('.breadcrumb').html();
    updated_breadcrumb_content = breadcrumb_content.replace(/&amp;#039;/, "'");
    $('.breadcrumb').html(updated_breadcrumb_content);
    $('.studio-projects .event-text').each((function(_this) {
      return function(index, element) {
        var event_text, updated_event_text;
        event_text = $(element).html();
        updated_event_text = event_text.replace(/<\/h3><br>/, '</h3>');
        return $(element).html(updated_event_text);
      };
    })(this));
    csc = $('#course_schedule_wrap').html();
    updated_csc = csc.replace(/<br>/, "").replace(/<\/h3><br>/, '</h3>');
    return $('#course_schedule_wrap').html(updated_csc);
  });

}).call(this);
