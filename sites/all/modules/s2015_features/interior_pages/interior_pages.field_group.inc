<?php
/**
 * @file
 * interior_pages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function interior_pages_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|for_submitters|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'for_submitters';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '3',
    'children' => array(
      0 => 'field_how_to_sub',
      1 => 'field_evaluation',
      2 => 'field_timeline',
      3 => 'field_faq',
      4 => 'field_acceptance',
      5 => 'field_new_for_2014',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Tabs',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-tabs field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_tabs|node|for_submitters|form'] = $field_group;

  return $export;
}
