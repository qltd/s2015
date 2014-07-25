<?php

function s2015_menu_link ($variables) {
  $variables['element']['#localized_options']['attributes']['class'][] = 'menu-link';

  $primary = array('Home', 'For Submitters', 'For Volunteers', 'For Attendees', 'For the Media', 'For Exhibitors & Advertisers');
  if (in_array($variables['element']['#title'], $primary)) return s2015_primary_navigation($variables['element']);
  return theme_menu_link($variables);
}

/**
 * Helper function for primary navigation menu items
 *
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
