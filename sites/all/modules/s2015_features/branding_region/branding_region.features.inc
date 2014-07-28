<?php
/**
 * @file
 * branding_region.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function branding_region_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
