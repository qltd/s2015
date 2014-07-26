<?php
/**
 * @file
 * top_region.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function top_region_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-conference_location'] = array(
    'cache' => -1,
    'css_class' => 'conference-location',
    'custom' => 0,
    'machine_name' => 'conference_location',
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
        'weight' => -19,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-social'] = array(
    'cache' => -1,
    'css_class' => 'social-navigation',
    'custom' => 0,
    'delta' => 'menu-social',
    'module' => 'menu',
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
        'weight' => -18,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => 'site-search',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -1,
      ),
      's2015' => array(
        'region' => '',
        'status' => 0,
        'theme' => 's2015',
        'weight' => -3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
