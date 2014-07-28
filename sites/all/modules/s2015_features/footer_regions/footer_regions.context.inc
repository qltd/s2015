<?php
/**
 * @file
 * footer_regions.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function footer_regions_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer';
  $context->description = 'This is the sitewide context for the footer regions';
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
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer_navigation',
          'weight' => '-10',
        ),
        'menu-menu-social' => array(
          'module' => 'menu',
          'delta' => 'menu-social',
          'region' => 'footer_branding',
          'weight' => '-10',
        ),
        'block-26' => array(
          'module' => 'block',
          'delta' => '26',
          'region' => 'footer_branding',
          'weight' => '-9',
        ),
        'block-24' => array(
          'module' => 'block',
          'delta' => '24',
          'region' => 'footer_connecting',
          'weight' => '-10',
        ),
        'block-25' => array(
          'module' => 'block',
          'delta' => '25',
          'region' => 'footer_connecting',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is the sitewide context for the footer regions');
  t('region');
  $export['footer'] = $context;

  return $export;
}
