<?php
/**
 * @file
 * landing_pages.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function landing_pages_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-21aaed4132c6deaf4b03dd6014950a1e'] = array(
    'cache' => -1,
    'css_class' => 'landing-billboards-small',
    'custom' => 0,
    'delta' => '21aaed4132c6deaf4b03dd6014950a1e',
    'module' => 'views',
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
