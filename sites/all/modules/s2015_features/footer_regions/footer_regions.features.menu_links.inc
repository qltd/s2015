<?php
/**
 * @file
 * footer_regions.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function footer_regions_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu_about-acm-siggraph-:http://www.siggraph.org/about/about-acm-siggraph
  $menu_links['menu-footer-menu_about-acm-siggraph-:http://www.siggraph.org/about/about-acm-siggraph'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://www.siggraph.org/about/about-acm-siggraph',
    'router_path' => '',
    'link_title' => 'About ACM SIGGRAPH ',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
      'identifier' => 'menu-footer-menu_about-acm-siggraph-:http://www.siggraph.org/about/about-acm-siggraph',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_image-credits:node/482
  $menu_links['menu-footer-menu_image-credits:node/482'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/482',
    'router_path' => 'node/%',
    'link_title' => 'Image Credits',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_image-credits:node/482',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_login:user
  $menu_links['menu-footer-menu_login:user'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_login:user',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_logos--guidelines:node/120
  $menu_links['menu-footer-menu_logos--guidelines:node/120'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/120',
    'router_path' => 'node/%',
    'link_title' => 'Logos & Guidelines',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_logos--guidelines:node/120',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_siggraph-2015-committee:node/47
  $menu_links['menu-footer-menu_siggraph-2015-committee:node/47'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/47',
    'router_path' => 'node/%',
    'link_title' => 'SIGGRAPH 2015 Committee',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_siggraph-2015-committee:node/47',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About ACM SIGGRAPH ');
  t('Image Credits');
  t('Login');
  t('Logos & Guidelines');
  t('SIGGRAPH 2015 Committee');


  return $menu_links;
}
