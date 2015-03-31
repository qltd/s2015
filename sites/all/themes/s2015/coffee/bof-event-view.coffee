$ = jQuery
days = ['Sunday','Monday','Tuesday','Wednesday','Thursday','Friday','Saturday' ]
months = ['January','February','March','April','May','June','July','August','September','October','November','December']
$(document).ready(->
    currentDay = -1
    $('.birds-of-a-feather .date-display-single').each (index, element) =>
        if (!(index % 2))
            date = new Date($(element).attr('content'))
            day = date.getUTCDay()
            console.log('hello world')
            month = date.getUTCMonth()
            datePrint = days[day] + ', ' + date.getUTCDate() + ' ' + months[month]
            if (day != currentDay)
                $('#birds-of-a-feather-day-list').append('<li><a href="#' + days[day] + '">' + datePrint + '</a></li>')
                $(element).closest('.views-row').prepend('<h2 class="conference-date-header" id="' + days[day] + '">' + datePrint + '</h2>')
                if (currentDay > -1)
                    $(element).closest('.views-row').prev().append('<p class="b-top-btn"><br><a href="#">Back to Top</a></p>')
                currentDay = day
)

