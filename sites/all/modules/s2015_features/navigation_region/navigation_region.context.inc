<?php
/**
 * @file
 * navigation_region.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function navigation_region_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'navigation';
  $context->description = 'This is the sitewide context for the navigation region';
  $context->tag = 'region';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'navigation',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is the sitewide context for the navigation region');
  t('region');
  $export['navigation'] = $context;

  return $export;
}
