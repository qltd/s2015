<?php
/**
 * @file
 * navigation_region.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function navigation_region_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-navigation_attendees'] = array(
    'cache' => -1,
    'css_class' => 'primary-navigation-content-attendees',
    'custom' => 0,
    'machine_name' => 'navigation_attendees',
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

  $export['block-navigation_exhibitors'] = array(
    'cache' => -1,
    'css_class' => 'primary-navigation-content-exhibitors-advertisers',
    'custom' => 0,
    'machine_name' => 'navigation_exhibitors',
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

  $export['block-navigation_media'] = array(
    'cache' => -1,
    'css_class' => 'primary-navigation-content-media',
    'custom' => 0,
    'machine_name' => 'navigation_media',
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

  $export['block-navigation_submitters'] = array(
    'cache' => -1,
    'css_class' => 'primary-navigation-content-submitters',
    'custom' => 0,
    'machine_name' => 'navigation_submitters',
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

  $export['block-navigation_volunteers'] = array(
    'cache' => -1,
    'css_class' => 'primary-navigation-content-volunteers',
    'custom' => 0,
    'machine_name' => 'navigation_volunteers',
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

  $export['menu_block-1'] = array(
    'cache' => -1,
    'css_class' => 'primary-navigation',
    'custom' => 0,
    'delta' => 1,
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
        'weight' => -19,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
