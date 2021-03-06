#Originally this script only related to the birds of a feather page, now it is being extended to all the for attendees
#pages, but I don't feel like renaming the file. I am lazy. 
#@rdar
$ = jQuery
days = ['Sunday','Monday','Tuesday','Wednesday','Thursday','Friday','Saturday' ]
months = ['January','February','March','April','May','June','July','August','September','October','November','December']
$(document).ready(->
    #display large Day headers and side nav items for birds of a feather page
    currentDay = -1
    total_length_of_bof_array = $('.birds-of-a-feather .date-display-single').length
    $('.birds-of-a-feather .date-display-single').each (index, element) =>
        if (!(index % 2))
            date_content = $(element).html()
            updated_date_content = date_content.replace(/August/,'August,').replace(/PM/,'pm').replace(/AM/,'am').replace(/09/,'9')
            $(element).html(updated_date_content) #visual tweaks to displayed content
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
        else
            #just preform a visual tweak on the content
            date_content = $(element).html()
            updated_date_content = date_content.replace(/PM/,'pm').replace(/AM/,'am')
            $(element).html(updated_date_content)
        if index is total_length_of_bof_array - 1
            $(element).closest('.views-row').append('<p class="b-top-btn"><br><a href="#">Back to Top</a></p>')
    #do not expand programs and events nav on page load
    $('.primary-navigation-programs-events').removeClass('active-trail').parent().removeClass('active-trail')
    $('.primary-navigation-attendees-col-3').removeClass('active-trail').parent().removeClass('active-trail')
    #for sessions and events view
    $('.view-sessions-and-events .date-display-single').each (index, element) =>
        date_content = $(element).html()
        updated_date_content = date_content.replace(/PM/,'pm').replace(/AM/,'am').replace(/09/,'9').replace(/August/,'August')
        $(element).html(updated_date_content)
    $('.view-sessions-and-events .date-location, .sessions-events .date-location').each (index, element) =>
        date_content = $(element).html()
        updated_date_content = date_content.replace(/\s\|/g,',')
        $(element).html(updated_date_content)
    #replace all periods that are not in the body wrapper
    $('.view-sessions-and-events .view-content div p:not(".body-wrapper")').each (index, element) =>
        $(element).addClass('imported-content-p')
    $('.affiliation-wrapper p').each (index, element) =>
        content = $(element).html()
        updated_content = content.replace(/Moderators/,'<strong>Moderators</strong>').replace(/Moderator/,'<strong>Moderator</strong>').replace(/Panelists/,'<strong>Panelists</strong>')
        $(element).html(updated_content)
    #update breadcrumb content to remove special charaters
    breadcrumb_content = $('.breadcrumb').html()
    updated_breadcrumb_content = breadcrumb_content.replace(/&amp;#039;/,"'")
    $('.breadcrumb').html(updated_breadcrumb_content)
    #remove line breaks on studio projects page
    $('.studio-projects .event-text').each (index,element) =>
        event_text = $(element).html()
        updated_event_text = event_text.replace(/<\/h3><br>/,'</h3>')
        $(element).html(updated_event_text)
    #here we are breaking up the course schedule
    csc = $('#course_schedule_wrap').html()
    updated_csc = csc.replace(/<br>/,"").replace(/<\/h3><br>/,'</h3>')#replace the first line break and line break after h3 tag
    $('#course_schedule_wrap').html(updated_csc)
)

