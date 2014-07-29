<?php

function s2015_preprocess_html (&$variables) {
  // Add conditional stylesheets for IE
  drupal_add_css(drupal_get_path('theme', 's2015') . '/css/s2015.lte-ie8.min.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE), 'preprocess' => FALSE));

  // Add conditional JavaScript for IE
  drupal_add_js(drupal_get_path('theme', 's2015') . '/libraries/html5shiv/dist/html5shiv.min.js', array('browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_js(drupal_get_path('theme', 's2015') . '/libraries/html5shiv/dist/html5shiv-printshiv.min.js', array('browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_js(drupal_get_path('theme', 's2015') . '/libraries/selectivizr/selectivizr.js', array('browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE), 'preprocess' => FALSE));
}
