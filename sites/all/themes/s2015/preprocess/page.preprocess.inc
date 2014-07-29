<?php

function s2015_preprocess_page (&$variables) {
  if (isset($variables['site_name'])) $variables['site_name_formatted'] = s2015_emphasize_first_word($variables['site_name'], 'site-name-emphasized');
}

/**
 * Helper function for adding emphasis to the first word in a series of words
 *
 * @param {string} $value - string of words
 * @param {string} [$class='emphasized'] - class name for emphasis tag
 * @return {string} - html markup emphasized content
 */
function s2015_emphasize_first_word ($value, $class = 'emphasized') {
  $words = explode(' ', $value);
  if (!isset($words[0])) return $value;
  $words[0] = '<strong class="' . $class . '">' . $words[0] . '</strong>';
  return implode(' ', $words);
}
