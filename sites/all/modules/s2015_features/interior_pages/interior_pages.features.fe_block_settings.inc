<?php
/**
 * @file
 * interior_pages.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function interior_pages_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['addtoany-addtoany_button'] = array(
    'cache' => 1,
    'css_class' => 'social-share-buttons',
    'custom' => 0,
    'delta' => 'addtoany_button',
    'module' => 'addtoany',
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
    'title' => 'Share Page:',
    'visibility' => 0,
  );

  $export['block-exhibiting_at_siggraph'] = array(
    'cache' => -1,
    'css_class' => 'contact-info-exhibitors-advertisers',
    'custom' => 0,
    'machine_name' => 'exhibiting_at_siggraph',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'exhibitors-advertisers
exhibitors-advertisers/exhibiting-siggraph-2015
exhibitors-advertisers/sponsorship-advertising',
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
        'weight' => -13,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

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

  $export['menu_block-3'] = array(
    'cache' => -1,
    'css_class' => 'primary-sub-navigation primary-sub-navigation-for-volunteers',
    'custom' => 0,
    'delta' => 3,
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

  $export['menu_block-4'] = array(
    'cache' => -1,
    'css_class' => 'primary-sub-navigation primary-sub-navigation-for-attendees',
    'custom' => 0,
    'delta' => 4,
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

  $export['menu_block-5'] = array(
    'cache' => -1,
    'css_class' => 'primary-sub-navigation primary-sub-navigation-for-the-media',
    'custom' => 0,
    'delta' => 5,
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

  $export['menu_block-6'] = array(
    'cache' => -1,
    'css_class' => 'primary-sub-navigation primary-sub-navigation-for-exhibitors-and-advertisers',
    'custom' => 0,
    'delta' => 6,
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

  $export['views-1166e414025bbb712537716b55a9774e'] = array(
    'cache' => -1,
    'css_class' => 'block-views-media-gallery-list',
    'custom' => 0,
    'delta' => '1166e414025bbb712537716b55a9774e',
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

  $export['views-30a59ed5fc3ab70a2bdbcd982684116e'] = array(
    'cache' => -1,
    'css_class' => 'block-views-media-gallery-main',
    'custom' => 0,
    'delta' => '30a59ed5fc3ab70a2bdbcd982684116e',
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
