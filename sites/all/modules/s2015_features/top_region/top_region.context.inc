<?php
/**
 * @file
 * top_region.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function top_region_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'top';
  $context->description = 'This is the sitewide context for the top region';
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
        'block-23' => array(
          'module' => 'block',
          'delta' => '23',
          'region' => 'top',
          'weight' => '-20',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'top',
          'weight' => '-19',
        ),
        'menu-menu-social' => array(
          'module' => 'menu',
          'delta' => 'menu-social',
          'region' => 'top',
          'weight' => '-18',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is the sitewide context for the top region');
  t('region');
  $export['top'] = $context;

  return $export;
}
