<?php
/**
 * @file
 * for_submitters_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function for_submitters_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'for_submitters';
  $context->description = 'This is the "For Submitters" page context';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'submitters/*' => 'submitters/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is the "For Submitters" page context');
  t('page');
  $export['for_submitters'] = $context;

  return $export;
}
