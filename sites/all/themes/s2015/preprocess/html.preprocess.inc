<?php

function s2015_preprocess_html (&$variables) {
  // Add conditional stylesheets for IE
  drupal_add_css(path_to_theme() . '/css/s2015.lte-ie8.min.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE), 'preprocess' => FALSE));
}

?>
