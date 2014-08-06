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
  $fe_block_boxes->body = '<a class="front-call-for-submissions-link" href="/submitters">
  <h2 class="front-call-for-submissions-title">Call for Submissions</h2>
  <p class="front-call-for-submissions-body">Like the thread that connects the pieces of the quilt, SIGGRAPH provides the opportunity for discovery across its many areas. Submit your excellent work!</p>
</a>

';

  $export['front_call_for_submissions'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'The conference countdown block for the front page';
  $fe_block_boxes->format = 'raw_html';
  $fe_block_boxes->machine_name = 'front_countdown';
  $fe_block_boxes->body = '<p class="front-countdown-paragraph front-paragraph"><span class="countdown-pie" data-date="Sun Aug 09 2015 00:00:00 GMT-0400" data-days="400"><i class="countdown-pie-slice"></i><span class="front-countdown-count"></span> <span class="front-countdown-unit">Days</span></span> Until SIGGRAPH 2015</p>';

  $export['front_countdown'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'The location description block for the front page';
  $fe_block_boxes->format = 'event';
  $fe_block_boxes->machine_name = 'front_location';
  $fe_block_boxes->body = '<p class="front-paragraph front-location-paragraph">Downtown Los Angeles is experiencing a remarkable revitalization. Amongst the palm trees and sunshine are a number of residential and commerical endeavors, fantastic restaurants, and a new zeal for life.</p>

<p><a class="button" href="/attendees/los-angeles">Things to do</a></p>
';

  $export['front_location'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'The Twitter block for the front page';
  $fe_block_boxes->format = 'raw_html';
  $fe_block_boxes->machine_name = 'front_twitter';
  $fe_block_boxes->body = '<p class="front-twitter-paragraph"><a class="front-twitter-link" href="http://twitter.com/siggraph" target="_blank"><i class="fa fa-twitter"></i>SIGGRAPH on Twitter</a></p>
';

  $export['front_twitter'] = $fe_block_boxes;

  return $export;
}
