<?php
/**
 * @file
 * for_submitters_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function for_submitters_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
