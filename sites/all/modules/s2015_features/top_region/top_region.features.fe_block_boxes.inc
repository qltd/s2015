<?php
/**
 * @file
 * top_region.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function top_region_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Location of the conference -- for display in the top header bar';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'conference_location';
  $fe_block_boxes->body = '<span>Los Angeles Convention Center</span>';

  $export['conference_location'] = $fe_block_boxes;

  return $export;
}
