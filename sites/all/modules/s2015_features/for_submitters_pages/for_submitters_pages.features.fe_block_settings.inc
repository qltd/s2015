<?php
/**
 * @file
 * for_submitters_pages.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function for_submitters_pages_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu_block-2'] = array(
    'cache' => -1,
    'css_class' => 'primary-sub-navigation primary-sub-navigation-for-submitters',
    'custom' => 0,
    'delta' => 2,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      's2015' => array(
        'region' => '',
        'status' => 0,
        'theme' => 's2015',
        'weight' => 0,
      ),
    ),
    'title' => 'In This Section:',
    'visibility' => 0,
  );

  return $export;
}
