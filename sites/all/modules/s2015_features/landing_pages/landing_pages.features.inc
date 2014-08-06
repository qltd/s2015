<?php
/**
 * @file
 * landing_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landing_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
