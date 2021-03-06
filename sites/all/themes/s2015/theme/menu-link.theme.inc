<?php

function s2015_menu_link ($variables) {
  $variables['element']['#localized_options']['attributes']['class'][] = 'menu-link';

  $primary = array('Home', 'For Submitters', 'For Volunteers', 'For Attendees', 'For the Media', 'For Exhibitors & Advertisers');
  if (in_array($variables['element']['#title'], $primary)) return s2015_primary_navigation($variables['element']);

  $primary_content = array('Submitters-Col-1', 'Volunteers-Col-1', 'Attendees-Col-1', 'Media-Col-1', 'Exhibitors-Advertisers-Col-1');
  if (in_array($variables['element']['#title'], $primary_content)) return s2015_primary_navigation_content($variables['element']);

  return theme_menu_link($variables);
}

/**
 * Helper function for primary navigation menu items
 *
 * - adds font awesome icon to 'Home' item
 * - adds emphasis via a classed <strong> tag
 * - adds additional classes for easier styling and scripting
 *
 * @param {array} $element - menu item
 * @return {string} - html markup for menu item
 */
function s2015_primary_navigation ($element) {
  $emphasized = false;
  $output_str = '';
  $sub_menu = '';
  $title_words = explode(' ', $element['#title']);
  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
    $element['#attributes']['class'][] = 'primary-navigation-expanded-top';
  } else $element['#attributes']['class'][] = 'primary-navigation-leaf-top';
  foreach ($title_words as $key => $title_word) {
    if ($title_word != 'For' && $title_word != 'the' && $emphasized === false) {
      if ($title_word === 'Home') $output_str .= '<i class="fa fa-home"></i>';
      $output_str .= '<strong class="menu-link-emphasized">';
      $emphasized = true;
    }
    $output_str .= $title_word;
    if (count($title_words) == $key + 1 && $emphasized === true) {
      $output_str .= '</strong>';
    } else {
      $output_str .= ' ';
    }
  }
  $element['#localized_options']['html'] = true;
  $element['#localized_options']['attributes']['class'][] = 'primary-navigation-menu-link-top';
  $element['#attributes']['class'][] = 'primary-navigation-' . s2015_menu_title_slugify($element['#title']);
  $output = l($output_str, $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Helper function for primary navigation content blocks
 *
 * - adds content blocks to primary navigation dropdown menus
 *
 * @param {array} $element - menu item
 * @return {string} - html markup for menu item
 */
function s2015_primary_navigation_content ($element) {
  $output = '<li class="first expanded primary-navigation-content-block">';
  $output .= '<span class="menu-nolink hidden menu-link nolink">' . $element['#title'] . '</span>';
  switch ($element['#title']) {
    case 'Submitters-Col-1':
      $output .= s2015_block_in_menu_render('block', '35');
      break;
    case 'Volunteers-Col-1':
      $output .= s2015_block_in_menu_render('block', '36');
      break;
    case 'Attendees-Col-1':
      $output .= s2015_block_in_menu_render('block', '37');
      break;
    case 'Media-Col-1':
      $output .= s2015_block_in_menu_render('block', '38');
      break;
    case 'Exhibitors-Advertisers-Col-1':
      $output .= s2015_block_in_menu_render('block', '39');
      break;
  }
  $output .= '</li>';
  return $output;
}

/**
 * Helper function for creating slugs
 *
 * @param {string} $text - raw text
 * @return {string} - slugified text
 */
function s2015_menu_title_slugify ($text) {
  $text = preg_replace('~[^\\pL\d]+~u', '-', $text);
  $text = trim($text, '-');
  $text = iconv('utf-8', 'us-ascii//TRANSLIT', $text);
  $text = strtolower($text);
  $text = preg_replace('~[^-\w]+~', '', $text);
  if (empty($text)) return 'n-a';
  return $text;
}

/**
 * Helper function for programatically rendering blocks
 *
 * @param {string} $module
 * @param {string} $block_id
 * @return {string} - rendered output
 */
function s2015_block_in_menu_render($module, $block_id) {
  $block = block_load($module, $block_id);
  $block_content = _block_render_blocks(array($block));
  $build = _block_get_renderable_array($block_content);
  $block_rendered = drupal_render($build);
  return $block_rendered;
}
