<?php
/**
 * @file
 * branding_region.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function branding_region_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-branding_conference_dates'] = array(
    'cache' => -1,
    'css_class' => 'branding-conference-dates',
    'custom' => 0,
    'machine_name' => 'branding_conference_dates',
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

  $export['block-branding_xroads_discovery'] = array(
    'cache' => -1,
    'css_class' => 'branding-xroads-of-discovery',
    'custom' => 0,
    'machine_name' => 'branding_xroads_discovery',
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
