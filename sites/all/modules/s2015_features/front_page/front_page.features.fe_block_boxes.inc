<?php
/**
 * @file
 * front_page.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function front_page_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'The "about SIGGRAPH 2015" block for the front page';
  $fe_block_boxes->format = 'event';
  $fe_block_boxes->machine_name = 'front_about';
  $fe_block_boxes->body = '<p class="front-paragraph front-about-paragraph">The annual SIGGRAPH conference is a five-day interdisciplinary educational experience in the latest computer graphics and interactive techniques including a three-day commercial exhibition that attracts hundreds of exhibitors from around the world.</p>

<p><a class="button" href="/attendees">Overview</a></p>
';

  $export['front_about'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'This is the "Call for Submissions" billboard for the front page.';
  $fe_block_boxes->format = 'raw_html';
  $fe_block_boxes->machine_name = 'front_call_for_submissions';
  $fe_block_boxes->body = '<a class="front-call-for-submissions-link" href="/attendees/keynote-session">
  <h2 class="front-call-for-submissions-title">Keynote Joichi “Joi” Ito</h2>
  <p class="front-call-for-submissions-body">Director of MIT Media Lab. Currently exploring how radical new approaches to science and technology can transform society in substantial and positive ways.</p>
</a>

';

  $export['front_call_for_submissions'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'The conference countdown block for the front page';
  $fe_block_boxes->format = 'raw_html';
  $fe_block_boxes->machine_name = 'front_countdown';
  $fe_block_boxes->body = '<p class="front-countdown-paragraph front-paragraph"><span class="countdown-pie" data-date="Sun Aug 09 2015 00:00:00 GMT-0400" data-days="365"><i class="countdown-pie-slice"></i><span class="front-countdown-count"></span> <span class="front-countdown-unit">Days</span></span> Until SIGGRAPH 2015</p>';

  $export['front_countdown'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'The location description block for the front page';
  $fe_block_boxes->format = 'event';
  $fe_block_boxes->machine_name = 'front_location';
  $fe_block_boxes->body = '<p class="front-paragraph front-location-paragraph">Downtown Los Angeles is enjoying a remarkable revitalization. Among&nbsp;the palm trees and sunshine are a number of residential and commerical endeavors, fantastic restaurants, and a new zest for life.</p>

<p><a class="button" href="/attendees/los-angeles">Things to do</a></p>
';

  $export['front_location'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block for hotel widget';
  $fe_block_boxes->format = 'raw_html';
  $fe_block_boxes->machine_name = 'hotel_widget';
  $fe_block_boxes->body = '<div class="hotel-widget-wrap">

<!-- BEGIN ONPEAK MAGNET EXTERNAL STYLE SHEET VERSION -->

<div class="onPeak_webContent">

    <!--MAGNET SECTION-->

    <div class="onPeak_magnetWrapper">

        <div class="onPeak_magnetInner">

            <h2 class="onPeak_magnetHDR"><a href="https://compass.onpeak.com/e/43SIG15" target="_blank">Book Your Hotel Here &raquo;</a></h2>

            <p>Be sure to <em>add your hotel rewards number</em> when booking to receive points for your loyalty program.</p>

        </div>

        <!-- ONPEAK MAGNET. PLACE WHERE YOU WANT ON THE PAGE. -->

        <div id="onpeak_hotels" style="margin:0 auto"></div>

        <!-- END OF ONPEAK MAGNET -->

    </div>

</div>

    <!-- START OF ONPEAK MAGNET JAVASCRIPT. MUST BE BELOW onpeak_hotels DIV -->

    <script id="onpeak_scripttag" type="text/javascript" src="https://hotel-widget-files.s3.amazonaws.com/ajax_widget_v1.js"></script>

    <script type="text/javascript">

    var onpeak_options = { \'meetingId\': \'4848\',\'meetingIdCode\':\'63264441\',\'attendanceId\':\'\',\'categoryId\':\'\',\'containerId\': \'onpeak_hotels\',\'action\':\'ajax_hotel_list\',\'colocation_id\': \'\',\'disable_linking\':\'false\',\'cssUrl\':\'http://onpeak.s3.amazonaws.com/siggraph/SIGGRAPH2015_MAG-CSS.css\'};

    var onpeak_styleOptions={\'hotelNameTrim\':\'75\'};

    onpeak_ajaxUpdater(onpeak_options, onpeak_styleOptions);

    /*var onpeak_styleOptions={\'hotelTip\':false};

    \'arrive\':\'01-29-2014\',\'depart\':\'02-01-2014\'*/

    </script>

    <!-- CATEGORY DROP DOWN OF ONPEAK MAGNET JAVASCRIPT. MUST BE BELOW onpeak_hotels DIV -->

	<!--<script id="onpeak_scripttag" type="text/javascript" src="https://hotel-widget-files.s3.amazonaws.com/ajax_widget_v1.js"></script>

    <script type="text/javascript">

    var thisCategory = \'#DEFAULT-CATEGORY-ID#\';

    function fireMagnet(category) {

    var onpeak_options = {\'meetingId\': \'4848\',\'meetingIdCode\':\'63264441\',\'attendanceId\':\'\',\'categoryId\':category,\'containerId\': \'onpeak_hotels\',\'action\':\'ajax_hotel_list\',\'colocation_id\': \'\',\'disable_linking\':\'false\',\'cssUrl\':\'http://onpeak.s3.amazonaws.com/siggraph/SIGGRAPH2015_MAG-CSS.css\'};

    var onpeak_styleOptions={\'hotelNameTrim\':\'75\'};

    onpeak_ajaxUpdater(onpeak_options, onpeak_styleOptions);

    }

    fireMagnet(thisCategory);

    /*var onpeak_styleOptions={\'hotelTip\':false};

    \'arrive\':\'01-29-2014\',\'depart\':\'02-01-2014\'*/

    </script>-->

    <!-- START OF CONDITIONAL STYLES FOR IE. UGH -->

    <!--[if lt IE 9]>

            <style type=\'text/css\'>

                .onpeak_ajaxRatingStarsContainer {display:inline-block;}

                .onpeak_ajaxHotelIcon {display:inline-block;}

                /* .onpeak_ajaxHotelName {padding-right: 80px;} USE IF REMOVING STARS OR ICONS*/

                /* .onpeak_ajaxHotelName {Padding-right: 10px;} USE IF REMOVING BOTH STARS AND ICONS */

                #onpeak_ajaxHotelListContainer {overflow-y: auto;}

            </style>

    <![endif]-->

<!--------------- REMOVE BELOW THIS LINE FOR CLIENT IMPLEMENTATION / KEEP FOR IFRAME --------------->

<!-- GOOGLE ANALYTICS CODE - INCLUDE ON ALL IFRAME IMPLEMENTATIONS -->

<script type="text/javascript">

var gaJsHost = (("https:" == document.location.protocol) ? "https://ssl." : "http://www.");

document.write(unescape("%3Cscript src=\'" + gaJsHost + "google-analytics.com/ga.js\' type=\'text/javascript\'%3E%3C/script%3E"));

</script>

<script type="text/javascript">

try{

var pageTracker = _gat._getTracker("UA-23695424-1");

pageTracker._trackPageview();

} catch(err) {}</script>

<!-- END GOOGLE ANALYTICS CODE -->

</div>
<p class="hotel-widget-link"><a class="button" href="attendees/hotels">More info</a></p>';

  $export['hotel_widget'] = $fe_block_boxes;

  return $export;
}
