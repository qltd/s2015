<?php
/**
 * @file
 * navigation_region.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function navigation_region_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
