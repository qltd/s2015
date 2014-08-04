<?php
/**
 * @file
 * front_page.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function front_page_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-front_about'] = array(
    'cache' => -1,
    'css_class' => 'front-about',
    'custom' => 0,
    'machine_name' => 'front_about',
    'module' => 'block',
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
