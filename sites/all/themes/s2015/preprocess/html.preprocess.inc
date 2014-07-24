<?php

function s2015_preprocess_html (&$variables) {
  // Add conditional stylesheets for IE
  drupal_add_css(drupal_get_path('theme', 's2015') . '/css/s2015.lte-ie8.min.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE), 'preprocess' => FALSE));
}

?>
