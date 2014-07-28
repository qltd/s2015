<?php
/**
 * @file
 * branding_region.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function branding_region_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'branding';
  $context->description = 'This is the sitewide context for the branding region';
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
        'block-27' => array(
          'module' => 'block',
          'delta' => '27',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'block-28' => array(
          'module' => 'block',
          'delta' => '28',
          'region' => 'branding',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is the sitewide context for the branding region');
  t('region');
  $export['branding'] = $context;

  return $export;
}
