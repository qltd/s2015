<?php
/**
 * @file
 * top_region.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function top_region_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-social_facebook:http://www.facebook.com/SIGGRAPHConferences
  $menu_links['menu-social_facebook:http://www.facebook.com/SIGGRAPHConferences'] = array(
    'menu_name' => 'menu-social',
    'link_path' => 'http://www.facebook.com/SIGGRAPHConferences',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'menu_views' => array(
        'name' => FALSE,
        'display' => FALSE,
        'arguments' => '',
        'mlid' => 438,
      ),
      'attributes' => array(
        'title' => 'Visit SIGGRAPH on Facebook',
        'class' => array(
          0 => 'fa',
          1 => 'fa-facebook',
          2 => 'social-navigation-link',
        ),
        'target' => '_blank',
      ),
      'identifier' => 'menu-social_facebook:http://www.facebook.com/SIGGRAPHConferences',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-social_google:https://plus.google.com/+siggraph
  $menu_links['menu-social_google:https://plus.google.com/+siggraph'] = array(
    'menu_name' => 'menu-social',
    'link_path' => 'https://plus.google.com/+siggraph',
    'router_path' => '',
    'link_title' => 'Google+',
    'options' => array(
      'menu_views' => array(
        'name' => FALSE,
        'display' => FALSE,
        'arguments' => '',
        'mlid' => 523,
      ),
      'attributes' => array(
        'class' => array(
          0 => 'fa',
          1 => 'fa-google-plus',
          2 => 'social-navigation-link',
        ),
        'target' => '_blank',
      ),
      'identifier' => 'menu-social_google:https://plus.google.com/+siggraph',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-social_instagram:http://instagram.com/acmsiggraph
  $menu_links['menu-social_instagram:http://instagram.com/acmsiggraph'] = array(
    'menu_name' => 'menu-social',
    'link_path' => 'http://instagram.com/acmsiggraph',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'fa',
          1 => 'fa-instagram',
          2 => 'social-navigation-link',
        ),
        'target' => '_blank',
      ),
      'identifier' => 'menu-social_instagram:http://instagram.com/acmsiggraph',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-social_twitter:http://twitter.com/siggraph
  $menu_links['menu-social_twitter:http://twitter.com/siggraph'] = array(
    'menu_name' => 'menu-social',
    'link_path' => 'http://twitter.com/siggraph',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'menu_views' => array(
        'name' => FALSE,
        'display' => FALSE,
        'arguments' => '',
        'mlid' => 437,
      ),
      'attributes' => array(
        'class' => array(
          0 => 'fa',
          1 => 'fa-twitter',
          2 => 'social-navigation-link',
        ),
        'target' => '_blank',
      ),
      'identifier' => 'menu-social_twitter:http://twitter.com/siggraph',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-social_wordpress-blog:http://blog.siggraph.org/
  $menu_links['menu-social_wordpress-blog:http://blog.siggraph.org/'] = array(
    'menu_name' => 'menu-social',
    'link_path' => 'http://blog.siggraph.org/',
    'router_path' => '',
    'link_title' => 'Wordpress Blog',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'fa',
          1 => 'fa-wordpress',
          2 => 'social-navigation-link',
          3 => 'menu-link',
        ),
        'target' => '_blank',
      ),
      'identifier' => 'menu-social_wordpress-blog:http://blog.siggraph.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-social_youtube:http://www.youtube.com/user/ACMSIGGRAPH
  $menu_links['menu-social_youtube:http://www.youtube.com/user/ACMSIGGRAPH'] = array(
    'menu_name' => 'menu-social',
    'link_path' => 'http://www.youtube.com/user/ACMSIGGRAPH',
    'router_path' => '',
    'link_title' => 'Youtube',
    'options' => array(
      'menu_views' => array(
        'name' => FALSE,
        'display' => FALSE,
        'arguments' => '',
        'mlid' => 439,
      ),
      'attributes' => array(
        'title' => 'Visit SIGGRAPH on YouTube',
        'class' => array(
          0 => 'fa',
          1 => 'fa-youtube-play',
          2 => 'social-navigation-link',
        ),
        'target' => '_blank',
      ),
      'identifier' => 'menu-social_youtube:http://www.youtube.com/user/ACMSIGGRAPH',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Facebook');
  t('Google+');
  t('Instagram');
  t('Twitter');
  t('Wordpress Blog');
  t('Youtube');


  return $menu_links;
}
