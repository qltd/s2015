<?php
/**
 * @file
 * interior_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function interior_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'for_attendees';
  $context->description = 'This is the "For Attendees" page context';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'attendees/*' => 'attendees/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-4' => array(
          'module' => 'menu_block',
          'delta' => '4',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is the "For Attendees" page context');
  t('pages');
  $export['for_attendees'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'for_exhibitors_and_advertisers';
  $context->description = 'This is the "For Exhibitors and Advertisers" page context';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'exhibitors-advertisers/*' => 'exhibitors-advertisers/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-6' => array(
          'module' => 'menu_block',
          'delta' => '6',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'block-42' => array(
          'module' => 'block',
          'delta' => '42',
          'region' => 'sidebar',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is the "For Exhibitors and Advertisers" page context');
  t('pages');
  $export['for_exhibitors_and_advertisers'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'for_submitters';
  $context->description = 'This is the "For Submitters" page context';
  $context->tag = 'pages';
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
        'views-30a59ed5fc3ab70a2bdbcd982684116e' => array(
          'module' => 'views',
          'delta' => '30a59ed5fc3ab70a2bdbcd982684116e',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-1166e414025bbb712537716b55a9774e' => array(
          'module' => 'views',
          'delta' => '1166e414025bbb712537716b55a9774e',
          'region' => 'highlighted',
          'weight' => '-9',
        ),
        'quicktabs-tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'tabs',
          'region' => 'content',
          'weight' => '-10',
        ),
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
  t('pages');
  $export['for_submitters'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'for_the_media';
  $context->description = 'This is the "For the Media" page context';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'media/*' => 'media/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-5' => array(
          'module' => 'menu_block',
          'delta' => '5',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is the "For the Media" page context');
  t('pages');
  $export['for_the_media'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'for_volunteers';
  $context->description = 'This is the "For Volunteers" page context';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'volunteers/*' => 'volunteers/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is the "For Volunteers" page context');
  t('pages');
  $export['for_volunteers'] = $context;

  return $export;
}
