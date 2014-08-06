<?php
/**
 * @file
 * small_billboards.features.inc
 */

/**
 * Implements hook_views_api().
 */
function small_billboards_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function small_billboards_node_info() {
  $items = array(
    'small_billboard' => array(
      'name' => t('Small Billboard'),
      'base' => 'node_content',
      'description' => t('These are the small promotional billboards that appear on the homepage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
