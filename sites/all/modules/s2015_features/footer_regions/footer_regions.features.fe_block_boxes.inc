<?php
/**
 * @file
 * footer_regions.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function footer_regions_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'The "Contact Us" block for the footer.';
  $fe_block_boxes->format = 'raw_html';
  $fe_block_boxes->machine_name = 'footer_contact_us';
  $fe_block_boxes->body = '<span><a class="footer-connecting-link contact-us-link" href="/contact-us">Contact Us</a></span>
';

  $export['footer_contact_us'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'The "Join Mailing List" block for the footer';
  $fe_block_boxes->format = 'raw_html';
  $fe_block_boxes->machine_name = 'footer_join_mailing_list';
  $fe_block_boxes->body = '<span><a class="footer-connecting-link join-mailing-list-link" href="/add-me-your-mailing-list">Join Mailing List</a></span>';

  $export['footer_join_mailing_list'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'The "Sponsored by ACMSIGGRAPH" block for the footer';
  $fe_block_boxes->format = 'raw_html';
  $fe_block_boxes->machine_name = 'footer_sponsored_by_acmsiggraph';
  $fe_block_boxes->body = '<span><a class="sponsored-by-acmsiggraph-link" href="http://www.siggraph.org/" target="_blank">Sponsored by ACM<strong class="sponsor-emphasized">SIGGRAPH</strong></a></span>';

  $export['footer_sponsored_by_acmsiggraph'] = $fe_block_boxes;

  return $export;
}
