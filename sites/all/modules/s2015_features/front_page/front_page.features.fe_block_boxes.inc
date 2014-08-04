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
  $fe_block_boxes->body = '<p class="front-about-paragraph">The annual SIGGRAPH conference is a five-day interdisciplinary educational experience in the latest computer graphics and interactive techniques including a three-day commercial exhibition that attracts hundreds of exhibitors from around the world. <a class="button" href="/attendees">Overview</a></p>
';

  $export['front_about'] = $fe_block_boxes;

  return $export;
}
