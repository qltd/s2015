<?php
/**
 * @file
 * top_region.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function top_region_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-social.
  $menus['menu-social'] = array(
    'menu_name' => 'menu-social',
    'title' => 'Social',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Social');


  return $menus;
}
