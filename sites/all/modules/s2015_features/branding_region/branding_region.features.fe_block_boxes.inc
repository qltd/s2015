<?php
/**
 * @file
 * branding_region.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function branding_region_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'The conference/exhibition dates block for the branding region';
  $fe_block_boxes->format = 'raw_html';
  $fe_block_boxes->machine_name = 'branding_conference_dates';
  $fe_block_boxes->body = '<span>Conference <time datetime="2015-08-09 00:00">9</time>-<time datetime="2015-08-13 00:00">13 August 2015</time><br>
Exhibition <time datetime="2015-08-11 00:00">11</time>-<time datetime="2015-08-13 00:00">13 August 2015</time></span>';

  $export['branding_conference_dates'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'The "Xroads of Discovery" block for the branding block.';
  $fe_block_boxes->format = 'raw_html';
  $fe_block_boxes->machine_name = 'branding_xroads_discovery';
  $fe_block_boxes->body = '<span><strong class="xroads-of-discovery-emphasized">Xroads</strong> of <strong class="xroads-of-discovery-emphasized">Discovery</strong></span>';

  $export['branding_xroads_discovery'] = $fe_block_boxes;

  return $export;
}
