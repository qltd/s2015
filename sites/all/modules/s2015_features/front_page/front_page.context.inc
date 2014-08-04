<?php
/**
 * @file
 * front_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function front_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'This is the front page context';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-30' => array(
          'module' => 'block',
          'delta' => '30',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is the front page context');
  t('pages');
  $export['front'] = $context;

  return $export;
}