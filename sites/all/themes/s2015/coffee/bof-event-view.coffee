$ = jQuery
days = ['Sunday','Monday','Tuesday','Wednesday','Thursday','Friday','Saturday' ]
months = ['January','February','March','April','May','June','July','August','September','October','November','December']
$(document).ready(->
    #display large Day headers and side nav items for birds of a feather page
    currentDay = -1
    total_length_of_bof_array = $('.birds-of-a-feather .date-display-single').length
    $('.birds-of-a-feather .date-display-single').each (index, element) =>
        if (!(index % 2))
            date = new Date($(element).attr('content'))
            day = date.getUTCDay()
            month = date.getUTCMonth()
            datePrint = days[day] + ', ' + date.getUTCDate() + ' ' + months[month]
            if (day != currentDay)
                $('#birds-of-a-feather-day-list').append('<li><a href="#' + days[day] + '">' + datePrint + '</a></li>')
                $(element).closest('.views-row').prepend('<h2 class="conference-date-header" id="' + days[day] + '">' + datePrint + '</h2>')
                if (currentDay > -1)
                    $(element).closest('.views-row').prev().append('<p class="b-top-btn"><br><a href="#">Back to Top</a></p>')
                currentDay = day
        if index is total_length_of_bof_array - 1
            $(element).closest('.views-row').append('<p class="b-top-btn"><br><a href="#">Back to Top</a></p>')
    #do not expand programs and events nav on page load
    $('.primary-navigation-programs-events').removeClass('active-trail').parent().removeClass('active-trail')
    $('.primary-navigation-attendees-col-3').removeClass('active-trail').parent().removeClass('active-trail')
)

