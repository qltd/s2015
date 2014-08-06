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
        'views-9c499aded61b02cb2e64a5937132d8a6' => array(
          'module' => 'views',
          'delta' => '9c499aded61b02cb2e64a5937132d8a6',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-31' => array(
          'module' => 'block',
          'delta' => '31',
          'region' => 'content',
          'weight' => '-8',
        ),
        'block-33' => array(
          'module' => 'block',
          'delta' => '33',
          'region' => 'content',
          'weight' => '-7',
        ),
        'block-32' => array(
          'module' => 'block',
          'delta' => '32',
          'region' => 'content',
          'weight' => '-6',
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
