<?php

function s2015_menu_link ($variables) {
  $variables['element']['#localized_options']['attributes']['class'][] = 'menu-link';

  $emphasize = array('For Submitters', 'For Volunteers', 'For Attendees', 'For the Media', 'For Exhibitors & Advertisers');
  if (in_array($variables['element']['#title'], $emphasize)) return s2015_menu_link_emphasize($variables['element']);
  return theme_menu_link($variables);
}

function s2015_menu_link_emphasize ($element) {
  $emphasized = false;
  $output_str = '';
  $sub_menu = '';
  $title_words = explode(' ', $element['#title']);
  if ($element['#below']) $sub_menu = drupal_render($element['#below']);
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
  $output = l($output_str, $element['#href'], $element['#localized_options']);
  $element['#attributes']['class'][] = 'menu-item-emphasized';
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}
