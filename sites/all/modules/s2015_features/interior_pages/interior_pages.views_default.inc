<?php
/**
 * @file
 * interior_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function interior_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'media_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Media Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'view-media-gallery-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Media Gallery Item */
  $handler->display->display_options['fields']['field_media_gallery_item']['id'] = 'field_media_gallery_item';
  $handler->display->display_options['fields']['field_media_gallery_item']['table'] = 'field_data_field_media_gallery_item';
  $handler->display->display_options['fields']['field_media_gallery_item']['field'] = 'field_media_gallery_item';
  $handler->display->display_options['fields']['field_media_gallery_item']['label'] = '';
  $handler->display->display_options['fields']['field_media_gallery_item']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_gallery_item']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_media_gallery_item']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_media_gallery_item']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_media_gallery_item']['delta_offset'] = '0';
  /* Sort criterion: Content: Media Gallery Item (field_media_gallery_item:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_media_gallery_item';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'media_gallery_list');
  $export['media_gallery'] = $view;

  $view = new view();
  $view->name = 'media_gallery_main';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Media Gallery Main';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'view-media-gallery-main';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Media Gallery Item */
  $handler->display->display_options['fields']['field_media_gallery_item']['id'] = 'field_media_gallery_item';
  $handler->display->display_options['fields']['field_media_gallery_item']['table'] = 'field_data_field_media_gallery_item';
  $handler->display->display_options['fields']['field_media_gallery_item']['field'] = 'field_media_gallery_item';
  $handler->display->display_options['fields']['field_media_gallery_item']['label'] = '';
  $handler->display->display_options['fields']['field_media_gallery_item']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_gallery_item']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_media_gallery_item']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_media_gallery_item']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_media_gallery_item']['delta_limit'] = '6';
  $handler->display->display_options['fields']['field_media_gallery_item']['delta_offset'] = '0';
  /* Sort criterion: Content: Media Gallery Item (field_media_gallery_item:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_media_gallery_item';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'media_gallery_main');
  $export['media_gallery_main'] = $view;

  return $export;
}
