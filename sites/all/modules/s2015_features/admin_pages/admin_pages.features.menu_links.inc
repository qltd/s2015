<?php
/**
 * @file
 * admin_pages.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function admin_pages_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_meta:admin/content/meta
  $menu_links['management_meta:admin/content/meta'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/meta',
    'router_path' => 'admin/content/meta',
    'link_title' => 'Meta',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'management_meta:admin/content/meta',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Meta');


  return $menu_links;
}
