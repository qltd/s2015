<?php
/**
 * @file
 * landing_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function landing_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing';
  $context->description = 'This is the context for landing pages';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'submitters' => 'submitters',
        'volunteers' => 'volunteers',
        'attendees' => 'attendees',
        'media' => 'media',
        'exhibitors-advertisers' => 'exhibitors-advertisers',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-21aaed4132c6deaf4b03dd6014950a1e' => array(
          'module' => 'views',
          'delta' => '21aaed4132c6deaf4b03dd6014950a1e',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is the context for landing pages');
  t('pages');
  $export['landing'] = $context;

  return $export;
}
