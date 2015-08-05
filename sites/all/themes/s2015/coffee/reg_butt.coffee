#functionality for the registration button
#@rdar

jQuery(document).ready(->
    alert('peace frog')
    jQuery('.blue-reg-button').click(->
        _gaq = _gaq || []
        _gaq.push(['send', 'event', 'Site Exit', 'Registration', '2015 Conference'])
        window.open('https://register.rcsreg.com/r2/siggraph2015/','_blank')
    )
)
