<?php
/**
 * @file
 * interior_pages.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function interior_pages_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Exhibiting at SIGGRAPH 2015';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'exhibiting_at_siggraph';
  $fe_block_boxes->body = '<h4>Exhibit at<br />
SIGGRAPH 2015</h4>

<p>Take your place among the leading companies in the computer graphics industry.</p>

<p><a href="/contact-us?category=exhibits@siggraph.org">SIGGRAPH 2015 Exhibition Management</a><br />
Hall-Erickson, Inc.<br />
98 East Chicago Avenue<br />
Westmont, Illinois 60559 USA<br />
+1.630.434.7779<br />
+1.630.434.1216 fax</p>
';

  $export['exhibiting_at_siggraph'] = $fe_block_boxes;

  return $export;
}
