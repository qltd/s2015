<?php
/**
 * @file
 * navigation_region.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function navigation_region_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_attendees-col-1:<nolink>
  $menu_links['main-menu_attendees-col-1:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Attendees-Col-1',
    'options' => array(
      'identifier' => 'main-menu_attendees-col-1:<nolink>',
      'attributes' => array(
        'class' => array(
          0 => 'menu-nolink',
          1 => 'hidden',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_for-attendees:node/2',
  );
  // Exported menu link: main-menu_conference-overview:http://null
  $menu_links['main-menu_conference-overview:http://null'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://null',
    'router_path' => '',
    'link_title' => 'Conference Overview',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_conference-overview:http://null',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_attendees-col-1:<nolink>',
  );
  // Exported menu link: main-menu_for-attendees:node/2
  $menu_links['main-menu_for-attendees:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'For Attendees',
    'options' => array(
      'menu_views' => array(
        'name' => FALSE,
        'display' => FALSE,
        'arguments' => '',
        'mlid' => 385,
      ),
      'attributes' => array(
        'class' => array(
          0 => 'for-attendees',
        ),
      ),
      'identifier' => 'main-menu_for-attendees:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_for-exhibitors--advertisers:node/6
  $menu_links['main-menu_for-exhibitors--advertisers:node/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'For Exhibitors & Advertisers',
    'options' => array(
      'menu_views' => array(
        'name' => FALSE,
        'display' => FALSE,
        'arguments' => '',
        'mlid' => 389,
      ),
      'attributes' => array(
        'class' => array(
          0 => 'for-exhibitors-advertisers',
        ),
      ),
      'identifier' => 'main-menu_for-exhibitors--advertisers:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_for-submitters:node/3
  $menu_links['main-menu_for-submitters:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'For Submitters',
    'options' => array(
      'menu_views' => array(
        'name' => FALSE,
        'display' => FALSE,
        'arguments' => '',
        'mlid' => 386,
      ),
      'attributes' => array(
        'class' => array(
          0 => 'for-submitters',
        ),
      ),
      'identifier' => 'main-menu_for-submitters:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_for-the-media:node/5
  $menu_links['main-menu_for-the-media:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'For the Media',
    'options' => array(
      'menu_views' => array(
        'name' => FALSE,
        'display' => FALSE,
        'arguments' => '',
        'mlid' => 388,
      ),
      'attributes' => array(
        'class' => array(
          0 => 'for-the-media',
        ),
      ),
      'identifier' => 'main-menu_for-the-media:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_for-volunteers:node/3982
  $menu_links['main-menu_for-volunteers:node/3982'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3982',
    'router_path' => 'node/%',
    'link_title' => 'For Volunteers',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'for-volunteers',
        ),
      ),
      'identifier' => 'main-menu_for-volunteers:node/3982',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'fa',
          1 => 'fa-home',
          2 => 'home-link',
        ),
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_submitters-col-1:<nolink>
  $menu_links['main-menu_submitters-col-1:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Submitters-Col-1',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-nolink',
          1 => 'hidden',
        ),
      ),
      'identifier' => 'main-menu_submitters-col-1:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_for-submitters:node/3',
  );
  // Exported menu link: main-menu_submitters-important-dates:http://null
  $menu_links['main-menu_submitters-important-dates:http://null'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://null',
    'router_path' => '',
    'link_title' => 'Submitters Important Dates',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_submitters-important-dates:http://null',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_submitters-col-1:<nolink>',
  );
  // Exported menu link: main-menu_submitters-important-message:http://null
  $menu_links['main-menu_submitters-important-message:http://null'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://null',
    'router_path' => '',
    'link_title' => 'Submitters Important Message',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_submitters-important-message:http://null',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_submitters-col-1:<nolink>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Attendees-Col-1');
  t('Conference Overview');
  t('For Attendees');
  t('For Exhibitors & Advertisers');
  t('For Submitters');
  t('For Volunteers');
  t('For the Media');
  t('Home');
  t('Submitters Important Dates');
  t('Submitters Important Message');
  t('Submitters-Col-1');


  return $menu_links;
}
