<?php
/**
 * @file
 * footer_regions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function footer_regions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
