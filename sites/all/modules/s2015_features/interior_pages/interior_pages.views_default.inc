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

  $view = new view();
  $view->name = 'sessions_and_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sessions and Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'sessions-events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'span',
      'class' => 'date-location',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper',
    ),
    'field_organizer' => array(
      'element_type' => 'span',
      'class' => 'organizer',
    ),
    'field_email' => array(
      'element_type' => 'span',
      'class' => 'organizer-email',
    ),
  );
  /* Relationship: Content: Session (field_session) */
  $handler->display->display_options['relationships']['field_session_nid']['id'] = 'field_session_nid';
  $handler->display->display_options['relationships']['field_session_nid']['table'] = 'field_data_field_session';
  $handler->display->display_options['relationships']['field_session_nid']['field'] = 'field_session_nid';
  $handler->display->display_options['relationships']['field_session_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_session_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = '- [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time] - [field_time_1]</span> | [field_location], [field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Organizer */
  $handler->display->display_options['fields']['field_organizer']['id'] = 'field_organizer';
  $handler->display->display_options['fields']['field_organizer']['table'] = 'field_data_field_organizer';
  $handler->display->display_options['fields']['field_organizer']['field'] = 'field_organizer';
  $handler->display->display_options['fields']['field_organizer']['label'] = '';
  $handler->display->display_options['fields']['field_organizer']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Time -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['relationship'] = 'field_session_nid';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Birds of a Feather */
  $handler = $view->new_display('block', 'Birds of a Feather', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'sessions-events birds-of-a-feather';

  /* Display: Technical Papers */
  $handler = $view->new_display('block', 'Technical Papers', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'span',
      'class' => 'date-location',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper',
    ),
    'field_organizer' => array(
      'element_type' => 'span',
      'class' => 'organizer',
    ),
    'field_email' => array(
      'element_type' => 'span',
      'class' => 'organizer-email',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = '- [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time] - [field_time_1]</span> | [field_location], [field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Organizer */
  $handler->display->display_options['fields']['field_organizer']['id'] = 'field_organizer';
  $handler->display->display_options['fields']['field_organizer']['table'] = 'field_data_field_organizer';
  $handler->display->display_options['fields']['field_organizer']['field'] = 'field_organizer';
  $handler->display->display_options['fields']['field_organizer']['label'] = '';
  $handler->display->display_options['fields']['field_organizer']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Session's Events */
  $handler = $view->new_display('block', 'Session\'s Events', 'block_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper',
    ),
    'field_full_author_affiliation' => array(
      'element_type' => 'div',
      'class' => 'affiliation-wrapper',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Session (field_session) - reverse */
  $handler->display->display_options['relationships']['reverse_field_session_node']['id'] = 'reverse_field_session_node';
  $handler->display->display_options['relationships']['reverse_field_session_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_session_node']['field'] = 'reverse_field_session_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Order (field_order) */
  $handler->display->display_options['sorts']['field_order_value']['id'] = 'field_order_value';
  $handler->display->display_options['sorts']['field_order_value']['table'] = 'field_data_field_order';
  $handler->display->display_options['sorts']['field_order_value']['field'] = 'field_order_value';
  $handler->display->display_options['sorts']['field_order_value']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Courses */
  $handler = $view->new_display('block', 'Courses', 'block_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'span',
      'class' => 'date-location',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper',
    ),
    'field_organizer' => array(
      'element_type' => 'span',
      'class' => 'organizer',
    ),
    'field_email' => array(
      'element_type' => 'span',
      'class' => 'organizer-email',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_time']['alter']['text'] = '[field_time] - ';
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = ' | [field_location]';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = ', [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time][field_time_1]</span>[field_location][field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Time -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['relationship'] = 'field_session_nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Event Details */
  $handler = $view->new_display('block', 'Event Details', 'block_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'sessions-events event-info';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_event_type_name' => array(
      'element_type' => 'h1',
      'class' => 'event_type title',
    ),
    'title' => array(
      'element_type' => 'h2',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'p',
      'class' => 'date-location',
    ),
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper clearfix',
    ),
    'field_level' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_prerequisites' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_intended_audience' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_full_author_affiliation' => array(
      'element_type' => 'div',
      'class' => 'affiliation-wrapper',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Type Name */
  $handler->display->display_options['fields']['field_event_type_name']['id'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['field'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['label'] = '';
  $handler->display->display_options['fields']['field_event_type_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_time']['alter']['text'] = '[field_time] - ';
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = ' | [field_location]';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = ', [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time][field_time_1]</span>[field_location][field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Level */
  $handler->display->display_options['fields']['field_level']['id'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['table'] = 'field_data_field_level';
  $handler->display->display_options['fields']['field_level']['field'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['label'] = '';
  $handler->display->display_options['fields']['field_level']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_level']['alter']['text'] = '<h3>Level</h3>
<p>[field_level]</p>';
  $handler->display->display_options['fields']['field_level']['element_label_colon'] = FALSE;
  /* Field: Content: Prerequisites */
  $handler->display->display_options['fields']['field_prerequisites']['id'] = 'field_prerequisites';
  $handler->display->display_options['fields']['field_prerequisites']['table'] = 'field_data_field_prerequisites';
  $handler->display->display_options['fields']['field_prerequisites']['field'] = 'field_prerequisites';
  $handler->display->display_options['fields']['field_prerequisites']['label'] = '';
  $handler->display->display_options['fields']['field_prerequisites']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prerequisites']['alter']['text'] = '<h3>Prerequisites</h3>
<p>[field_prerequisites]</p>';
  $handler->display->display_options['fields']['field_prerequisites']['element_label_colon'] = FALSE;
  /* Field: Content: Intended Audience */
  $handler->display->display_options['fields']['field_intended_audience']['id'] = 'field_intended_audience';
  $handler->display->display_options['fields']['field_intended_audience']['table'] = 'field_data_field_intended_audience';
  $handler->display->display_options['fields']['field_intended_audience']['field'] = 'field_intended_audience';
  $handler->display->display_options['fields']['field_intended_audience']['label'] = '';
  $handler->display->display_options['fields']['field_intended_audience']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_intended_audience']['alter']['text'] = '<h3>Intended Audience</h3>
<p>[field_intended_audience]</p>';
  $handler->display->display_options['fields']['field_intended_audience']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['alter']['text'] = '<h3>Instructor(s)</h3>
[field_full_author_affiliation]';
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Emerging Technologies */
  $handler = $view->new_display('block', 'Emerging Technologies', 'block_6');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'nothing_1' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'nothing' => array(
      'element_type' => 'div',
      'class' => 'event-text',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['label'] = '';
  $handler->display->display_options['fields']['field_video_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_url']['alter']['text'] = '<a href="[field_video_url]" target="_blank"><i class="icon-facetime-video"></i>&nbsp;&nbsp;View Video</a>';
  $handler->display->display_options['fields']['field_video_url']['element_label_colon'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_image_thumbnail]<br><br>
<p>[field_video_url]</p>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>
<div class="affiliation-wrapper">[field_full_author_affiliation]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: PHP */
  $handler->display->display_options['sorts']['php']['id'] = 'php';
  $handler->display->display_options['sorts']['php']['table'] = 'views';
  $handler->display->display_options['sorts']['php']['field'] = 'php';
  $handler->display->display_options['sorts']['php']['use_php_setup'] = 0;
  $handler->display->display_options['sorts']['php']['php_sort'] = '$title1 = isset($row1->title) ? str_replace(array(\'(\', \')\'), \'\', $row1->title) : \'\';
$title2 = isset($row2->title) ? str_replace(array(\'(\', \')\'), \'\', $row2->title) : \'\';
return strcmp($title1, $title2);';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    9 => '9',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Emerging Technology Event Details */
  $handler = $view->new_display('block', 'Emerging Technology Event Details', 'block_7');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'sessions-events event-info';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_event_type_name' => array(
      'element_type' => 'h1',
      'class' => 'event_type title',
    ),
    'title' => array(
      'element_type' => 'h2',
      'class' => 'emerging-technology-title',
    ),
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper clearfix',
    ),
    'field_full_author_affiliation' => array(
      'element_type' => 'div',
      'class' => 'affiliation-wrapper',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Type Name */
  $handler->display->display_options['fields']['field_event_type_name']['id'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['field'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['label'] = '';
  $handler->display->display_options['fields']['field_event_type_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['label'] = '';
  $handler->display->display_options['fields']['field_video_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_url']['alter']['text'] = '<a href="[field_video_url]" target="_blank"><i class="icon-facetime-video"></i>&nbsp;&nbsp;View Video</a>';
  $handler->display->display_options['fields']['field_video_url']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]
<p>[field_video_url]</p>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['alter']['text'] = '
[field_full_author_affiliation]';
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Panels */
  $handler = $view->new_display('block', 'Panels', 'block_8');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'span',
      'class' => 'date-location',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = '- [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time] - [field_time_1]</span> | [field_location], [field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    22 => '22',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Courses Event Details */
  $handler = $view->new_display('block', 'Courses Event Details', 'block_9');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'sessions-events event-info';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_event_type_name' => array(
      'element_type' => 'h1',
      'class' => 'event_type title',
    ),
    'title' => array(
      'element_type' => 'h2',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'p',
      'class' => 'date-location',
    ),
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper clearfix',
    ),
    'field_level' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_prerequisites' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_intended_audience' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_full_author_affiliation' => array(
      'element_type' => 'div',
      'class' => 'affiliation-wrapper',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Type Name */
  $handler->display->display_options['fields']['field_event_type_name']['id'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['field'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['label'] = '';
  $handler->display->display_options['fields']['field_event_type_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_time']['alter']['text'] = '[field_time] - ';
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = ' | [field_location]';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = ', [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time][field_time_1]</span>[field_location][field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Level */
  $handler->display->display_options['fields']['field_level']['id'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['table'] = 'field_data_field_level';
  $handler->display->display_options['fields']['field_level']['field'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['label'] = '';
  $handler->display->display_options['fields']['field_level']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_level']['alter']['text'] = '<h3>Level</h3>
<p>[field_level]</p>';
  $handler->display->display_options['fields']['field_level']['element_label_colon'] = FALSE;
  /* Field: Content: Prerequisites */
  $handler->display->display_options['fields']['field_prerequisites']['id'] = 'field_prerequisites';
  $handler->display->display_options['fields']['field_prerequisites']['table'] = 'field_data_field_prerequisites';
  $handler->display->display_options['fields']['field_prerequisites']['field'] = 'field_prerequisites';
  $handler->display->display_options['fields']['field_prerequisites']['label'] = '';
  $handler->display->display_options['fields']['field_prerequisites']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prerequisites']['alter']['text'] = '<h3>Prerequisites</h3>
<p>[field_prerequisites]</p>';
  $handler->display->display_options['fields']['field_prerequisites']['element_label_colon'] = FALSE;
  /* Field: Content: Intended Audience */
  $handler->display->display_options['fields']['field_intended_audience']['id'] = 'field_intended_audience';
  $handler->display->display_options['fields']['field_intended_audience']['table'] = 'field_data_field_intended_audience';
  $handler->display->display_options['fields']['field_intended_audience']['field'] = 'field_intended_audience';
  $handler->display->display_options['fields']['field_intended_audience']['label'] = '';
  $handler->display->display_options['fields']['field_intended_audience']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_intended_audience']['alter']['text'] = '<h3>Intended Audience</h3>
<p>[field_intended_audience]</p>';
  $handler->display->display_options['fields']['field_intended_audience']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['alter']['text'] = '<h3>Instructor(s)</h3>
[field_full_author_affiliation]';
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Art Papers */
  $handler = $view->new_display('block', 'Art Papers', 'block_10');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'span',
      'class' => 'date-location',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper',
    ),
    'field_organizer' => array(
      'element_type' => 'span',
      'class' => 'organizer',
    ),
    'field_email' => array(
      'element_type' => 'span',
      'class' => 'organizer-email',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = '- [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time] - [field_time_1]</span> | [field_location], [field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    0 => '4',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Art Gallery */
  $handler = $view->new_display('block', 'Art Gallery', 'block_11');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'nothing' => array(
      'element_type' => 'div',
      'class' => 'event-text',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>
<div class="affiliation-wrapper">[field_full_author_affiliation]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Feeds item: Item URL */
  $handler->display->display_options['sorts']['url']['id'] = 'url';
  $handler->display->display_options['sorts']['url']['table'] = 'feeds_item';
  $handler->display->display_options['sorts']['url']['field'] = 'url';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Talks */
  $handler = $view->new_display('block', 'Talks', 'block_12');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'span',
      'class' => 'date-location',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper',
    ),
    'field_organizer' => array(
      'element_type' => 'span',
      'class' => 'organizer',
    ),
    'field_email' => array(
      'element_type' => 'span',
      'class' => 'organizer-email',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = '- [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time] - [field_time_1]</span> | [field_location], [field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    0 => '11',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Studio Courses */
  $handler = $view->new_display('block', 'Studio Courses', 'block_13');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'sessions-events';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'p',
      'class' => 'date-location',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper clearfix',
    ),
    'field_full_author_affiliation' => array(
      'element_type' => 'div',
      'class' => 'affiliation-wrapper',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_time']['alter']['text'] = '[field_time] - ';
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = ' | [field_location]';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = ', [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time][field_time_1]</span>[field_location][field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['alter']['text'] = '<h3>Instructor(s)</h3>
[field_full_author_affiliation]';
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Time -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['relationship'] = 'field_session_nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    0 => '23',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Studio Talks Event Details */
  $handler = $view->new_display('block', 'Studio Talks Event Details', 'block_15');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'sessions-events event-info';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_event_type_name' => array(
      'element_type' => 'h1',
      'class' => 'event_type title',
    ),
    'title' => array(
      'element_type' => 'h2',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'p',
      'class' => 'date-location',
    ),
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper clearfix',
    ),
    'field_level' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_prerequisites' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_intended_audience' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_full_author_affiliation' => array(
      'element_type' => 'div',
      'class' => 'affiliation-wrapper',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Type Name */
  $handler->display->display_options['fields']['field_event_type_name']['id'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['field'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['label'] = '';
  $handler->display->display_options['fields']['field_event_type_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_type_name']['alter']['text'] = 'Studio Talks';
  $handler->display->display_options['fields']['field_event_type_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_time']['alter']['text'] = '[field_time] - ';
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = ' | [field_location]';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = ', [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time][field_time_1]</span>[field_location][field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Level */
  $handler->display->display_options['fields']['field_level']['id'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['table'] = 'field_data_field_level';
  $handler->display->display_options['fields']['field_level']['field'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['label'] = '';
  $handler->display->display_options['fields']['field_level']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_level']['alter']['text'] = '<h3>Level</h3>
<p>[field_level]</p>';
  $handler->display->display_options['fields']['field_level']['element_label_colon'] = FALSE;
  /* Field: Content: Prerequisites */
  $handler->display->display_options['fields']['field_prerequisites']['id'] = 'field_prerequisites';
  $handler->display->display_options['fields']['field_prerequisites']['table'] = 'field_data_field_prerequisites';
  $handler->display->display_options['fields']['field_prerequisites']['field'] = 'field_prerequisites';
  $handler->display->display_options['fields']['field_prerequisites']['label'] = '';
  $handler->display->display_options['fields']['field_prerequisites']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prerequisites']['alter']['text'] = '<h3>Prerequisites</h3>
<p>[field_prerequisites]</p>';
  $handler->display->display_options['fields']['field_prerequisites']['element_label_colon'] = FALSE;
  /* Field: Content: Intended Audience */
  $handler->display->display_options['fields']['field_intended_audience']['id'] = 'field_intended_audience';
  $handler->display->display_options['fields']['field_intended_audience']['table'] = 'field_data_field_intended_audience';
  $handler->display->display_options['fields']['field_intended_audience']['field'] = 'field_intended_audience';
  $handler->display->display_options['fields']['field_intended_audience']['label'] = '';
  $handler->display->display_options['fields']['field_intended_audience']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_intended_audience']['alter']['text'] = '<h3>Intended Audience</h3>
<p>[field_intended_audience]</p>';
  $handler->display->display_options['fields']['field_intended_audience']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['alter']['text'] = '<h3>Instructor(s)</h3>
[field_full_author_affiliation]';
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Studio Projects */
  $handler = $view->new_display('block', 'Studio Projects', 'block_16');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'nothing' => array(
      'element_type' => 'div',
      'class' => 'event-text',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3><br>
<div class="body-wrapper">[body]</div>
<div class="affiliation-wrapper">[field_full_author_affiliation]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Feeds item: Item URL */
  $handler->display->display_options['sorts']['url']['id'] = 'url';
  $handler->display->display_options['sorts']['url']['table'] = 'feeds_item';
  $handler->display->display_options['sorts']['url']['field'] = 'url';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    25 => '25',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Real-Time Live! */
  $handler = $view->new_display('block', 'Real-Time Live!', 'block_17');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'nothing' => array(
      'element_type' => 'div',
      'class' => 'event-text',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Studio Talk's Events */
  $handler = $view->new_display('block', 'Studio Talk\'s Events', 'block_18');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'nothing' => array(
      'element_type' => 'div',
      'class' => 'event-text',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Session (field_session) - reverse */
  $handler->display->display_options['relationships']['reverse_field_session_node']['id'] = 'reverse_field_session_node';
  $handler->display->display_options['relationships']['reverse_field_session_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_session_node']['field'] = 'reverse_field_session_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>
<div class="body-wrapper">[body]</div>
<div class="affiliation-wrapper">[field_full_author_affiliation]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Order (field_order) */
  $handler->display->display_options['sorts']['field_order_value']['id'] = 'field_order_value';
  $handler->display->display_options['sorts']['field_order_value']['table'] = 'field_data_field_order';
  $handler->display->display_options['sorts']['field_order_value']['field'] = 'field_order_value';
  $handler->display->display_options['sorts']['field_order_value']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Studio Talks */
  $handler = $view->new_display('block', 'Studio Talks', 'block_19');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'span',
      'class' => 'date-location',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper',
    ),
    'field_organizer' => array(
      'element_type' => 'span',
      'class' => 'organizer',
    ),
    'field_email' => array(
      'element_type' => 'span',
      'class' => 'organizer-email',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = '- [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time] - [field_time_1]</span> | [field_location], [field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    0 => '24',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Animation & VFX Focus */
  $handler = $view->new_display('block', 'Animation & VFX Focus', 'block_14');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'php' => array(
      'element_type' => 'div',
      'class' => 'registration-levels',
    ),
    'field_event_type_name' => array(
      'element_type' => 'div',
      'class' => 'event-type',
    ),
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'span',
      'class' => 'date-location',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_registration_level']['id'] = 'field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['table'] = 'field_data_field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['field'] = 'field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['label'] = '';
  $handler->display->display_options['fields']['field_registration_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_registration_level']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

if (isset($data->field_field_registration_level)) { // check for registration level array
  $levels = array();
  $raw = $data->field_field_registration_level;
  $str = \'\';
  foreach ($raw as $value) {
    if (isset($value[\'raw\'][\'value\'])) { // check for existence of raw value
      $level = $value[\'raw\'][\'value\'];
      if (!in_array($level, $levels)) array_push($levels, $level);
    }
  }
  // add values to $str in specific order
  if (in_array(\'Full Conference\', $levels)) $str .= \'<span class="full-conf">F</span> \';
  if (in_array(\'Select Conference\', $levels)) $str .= \'<span class="select-conf">S</span> \';
  if (in_array(\'Exhibits Plus\', $levels)) $str .= \'<span class="Ex-plus">E+</span> \';
  if (in_array(\'Exhibitors\', $levels)) $str .= \'<span class="Ex">Ex</span>\';
  echo $str;
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Event Type Name */
  $handler->display->display_options['fields']['field_event_type_name']['id'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['field'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['label'] = '';
  $handler->display->display_options['fields']['field_event_type_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = '- [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time] - [field_time_1]</span> | [field_location], [field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Time -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['relationship'] = 'field_session_nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_event_focus_value']['id'] = 'field_event_focus_value';
  $handler->display->display_options['filters']['field_event_focus_value']['table'] = 'field_data_field_event_focus';
  $handler->display->display_options['filters']['field_event_focus_value']['field'] = 'field_event_focus_value';
  $handler->display->display_options['filters']['field_event_focus_value']['value'] = array(
    'Animation and VFX' => 'Animation and VFX',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = '';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Art Focus */
  $handler = $view->new_display('block', 'Art Focus', 'block_20');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'php' => array(
      'element_type' => 'div',
      'class' => 'registration-levels',
    ),
    'field_event_type_name' => array(
      'element_type' => 'div',
      'class' => 'event-type',
    ),
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'span',
      'class' => 'date-location',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_registration_level']['id'] = 'field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['table'] = 'field_data_field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['field'] = 'field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['label'] = '';
  $handler->display->display_options['fields']['field_registration_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_registration_level']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

if (isset($data->field_field_registration_level)) { // check for registration level array
  $levels = array();
  $raw = $data->field_field_registration_level;
  $str = \'\';
  foreach ($raw as $value) {
    if (isset($value[\'raw\'][\'value\'])) { // check for existence of raw value
      $level = $value[\'raw\'][\'value\'];
      if (!in_array($level, $levels)) array_push($levels, $level);
    }
  }
  // add values to $str in specific order
  if (in_array(\'Full Conference\', $levels)) $str .= \'<span class="full-conf">F</span> \';
  if (in_array(\'Select Conference\', $levels)) $str .= \'<span class="select-conf">S</span> \';
  if (in_array(\'Exhibits Plus\', $levels)) $str .= \'<span class="Ex-plus">E+</span> \';
  if (in_array(\'Exhibitors\', $levels)) $str .= \'<span class="Ex">Ex</span>\';
  echo $str;
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Event Type Name */
  $handler->display->display_options['fields']['field_event_type_name']['id'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['field'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['label'] = '';
  $handler->display->display_options['fields']['field_event_type_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = '- [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time] - [field_time_1]</span> | [field_location], [field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Time -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['relationship'] = 'field_session_nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_event_focus_value']['id'] = 'field_event_focus_value';
  $handler->display->display_options['filters']['field_event_focus_value']['table'] = 'field_data_field_event_focus';
  $handler->display->display_options['filters']['field_event_focus_value']['field'] = 'field_event_focus_value';
  $handler->display->display_options['filters']['field_event_focus_value']['value'] = array(
    'Art' => 'Art',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = '';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Education Focus */
  $handler = $view->new_display('block', 'Education Focus', 'block_21');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'php' => array(
      'element_type' => 'div',
      'class' => 'registration-levels',
    ),
    'field_event_type_name' => array(
      'element_type' => 'div',
      'class' => 'event-type',
    ),
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'span',
      'class' => 'date-location',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_registration_level']['id'] = 'field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['table'] = 'field_data_field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['field'] = 'field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['label'] = '';
  $handler->display->display_options['fields']['field_registration_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_registration_level']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

if (isset($data->field_field_registration_level)) { // check for registration level array
  $levels = array();
  $raw = $data->field_field_registration_level;
  $str = \'\';
  foreach ($raw as $value) {
    if (isset($value[\'raw\'][\'value\'])) { // check for existence of raw value
      $level = $value[\'raw\'][\'value\'];
      if (!in_array($level, $levels)) array_push($levels, $level);
    }
  }
  // add values to $str in specific order
  if (in_array(\'Full Conference\', $levels)) $str .= \'<span class="full-conf">F</span> \';
  if (in_array(\'Select Conference\', $levels)) $str .= \'<span class="select-conf">S</span> \';
  if (in_array(\'Exhibits Plus\', $levels)) $str .= \'<span class="Ex-plus">E+</span> \';
  if (in_array(\'Exhibitors\', $levels)) $str .= \'<span class="Ex">Ex</span>\';
  echo $str;
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Event Type Name */
  $handler->display->display_options['fields']['field_event_type_name']['id'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['field'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['label'] = '';
  $handler->display->display_options['fields']['field_event_type_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = '- [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time] - [field_time_1]</span> | [field_location], [field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Time -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['relationship'] = 'field_session_nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_event_focus_value']['id'] = 'field_event_focus_value';
  $handler->display->display_options['filters']['field_event_focus_value']['table'] = 'field_data_field_event_focus';
  $handler->display->display_options['filters']['field_event_focus_value']['field'] = 'field_event_focus_value';
  $handler->display->display_options['filters']['field_event_focus_value']['value'] = array(
    'Education' => 'Education',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = '';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: First-Time Attendees Focus */
  $handler = $view->new_display('block', 'First-Time Attendees Focus', 'block_22');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'php' => array(
      'element_type' => 'div',
      'class' => 'registration-levels',
    ),
    'field_event_type_name' => array(
      'element_type' => 'div',
      'class' => 'event-type',
    ),
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'span',
      'class' => 'date-location',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_registration_level']['id'] = 'field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['table'] = 'field_data_field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['field'] = 'field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['label'] = '';
  $handler->display->display_options['fields']['field_registration_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_registration_level']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

if (isset($data->field_field_registration_level)) { // check for registration level array
  $levels = array();
  $raw = $data->field_field_registration_level;
  $str = \'\';
  foreach ($raw as $value) {
    if (isset($value[\'raw\'][\'value\'])) { // check for existence of raw value
      $level = $value[\'raw\'][\'value\'];
      if (!in_array($level, $levels)) array_push($levels, $level);
    }
  }
  // add values to $str in specific order
  if (in_array(\'Full Conference\', $levels)) $str .= \'<span class="full-conf">F</span> \';
  if (in_array(\'Select Conference\', $levels)) $str .= \'<span class="select-conf">S</span> \';
  if (in_array(\'Exhibits Plus\', $levels)) $str .= \'<span class="Ex-plus">E+</span> \';
  if (in_array(\'Exhibitors\', $levels)) $str .= \'<span class="Ex">Ex</span>\';
  echo $str;
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Event Type Name */
  $handler->display->display_options['fields']['field_event_type_name']['id'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['field'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['label'] = '';
  $handler->display->display_options['fields']['field_event_type_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = '- [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time] - [field_time_1]</span> | [field_location], [field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Time -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['relationship'] = 'field_session_nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_event_focus_value']['id'] = 'field_event_focus_value';
  $handler->display->display_options['filters']['field_event_focus_value']['table'] = 'field_data_field_event_focus';
  $handler->display->display_options['filters']['field_event_focus_value']['field'] = 'field_event_focus_value';
  $handler->display->display_options['filters']['field_event_focus_value']['value'] = array(
    'First-Time Attendees' => 'First-Time Attendees',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = '';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Games Focus */
  $handler = $view->new_display('block', 'Games Focus', 'block_23');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'php' => array(
      'element_type' => 'div',
      'class' => 'registration-levels',
    ),
    'field_event_type_name' => array(
      'element_type' => 'div',
      'class' => 'event-type',
    ),
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'span',
      'class' => 'date-location',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_registration_level']['id'] = 'field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['table'] = 'field_data_field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['field'] = 'field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['label'] = '';
  $handler->display->display_options['fields']['field_registration_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_registration_level']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

if (isset($data->field_field_registration_level)) { // check for registration level array
  $levels = array();
  $raw = $data->field_field_registration_level;
  $str = \'\';
  foreach ($raw as $value) {
    if (isset($value[\'raw\'][\'value\'])) { // check for existence of raw value
      $level = $value[\'raw\'][\'value\'];
      if (!in_array($level, $levels)) array_push($levels, $level);
    }
  }
  // add values to $str in specific order
  if (in_array(\'Full Conference\', $levels)) $str .= \'<span class="full-conf">F</span> \';
  if (in_array(\'Select Conference\', $levels)) $str .= \'<span class="select-conf">S</span> \';
  if (in_array(\'Exhibits Plus\', $levels)) $str .= \'<span class="Ex-plus">E+</span> \';
  if (in_array(\'Exhibitors\', $levels)) $str .= \'<span class="Ex">Ex</span>\';
  echo $str;
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Event Type Name */
  $handler->display->display_options['fields']['field_event_type_name']['id'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['field'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['label'] = '';
  $handler->display->display_options['fields']['field_event_type_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = '- [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time] - [field_time_1]</span> | [field_location], [field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Time -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['relationship'] = 'field_session_nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_event_focus_value']['id'] = 'field_event_focus_value';
  $handler->display->display_options['filters']['field_event_focus_value']['table'] = 'field_data_field_event_focus';
  $handler->display->display_options['filters']['field_event_focus_value']['field'] = 'field_event_focus_value';
  $handler->display->display_options['filters']['field_event_focus_value']['value'] = array(
    'Games' => 'Games',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = '';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Mobile Focus */
  $handler = $view->new_display('block', 'Mobile Focus', 'block_24');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'php' => array(
      'element_type' => 'div',
      'class' => 'registration-levels',
    ),
    'field_event_type_name' => array(
      'element_type' => 'div',
      'class' => 'event-type',
    ),
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'span',
      'class' => 'date-location',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_registration_level']['id'] = 'field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['table'] = 'field_data_field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['field'] = 'field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['label'] = '';
  $handler->display->display_options['fields']['field_registration_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_registration_level']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

if (isset($data->field_field_registration_level)) { // check for registration level array
  $levels = array();
  $raw = $data->field_field_registration_level;
  $str = \'\';
  foreach ($raw as $value) {
    if (isset($value[\'raw\'][\'value\'])) { // check for existence of raw value
      $level = $value[\'raw\'][\'value\'];
      if (!in_array($level, $levels)) array_push($levels, $level);
    }
  }
  // add values to $str in specific order
  if (in_array(\'Full Conference\', $levels)) $str .= \'<span class="full-conf">F</span> \';
  if (in_array(\'Select Conference\', $levels)) $str .= \'<span class="select-conf">S</span> \';
  if (in_array(\'Exhibits Plus\', $levels)) $str .= \'<span class="Ex-plus">E+</span> \';
  if (in_array(\'Exhibitors\', $levels)) $str .= \'<span class="Ex">Ex</span>\';
  echo $str;
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Event Type Name */
  $handler->display->display_options['fields']['field_event_type_name']['id'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['field'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['label'] = '';
  $handler->display->display_options['fields']['field_event_type_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = '- [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time] - [field_time_1]</span> | [field_location], [field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Time -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['relationship'] = 'field_session_nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_event_focus_value']['id'] = 'field_event_focus_value';
  $handler->display->display_options['filters']['field_event_focus_value']['table'] = 'field_data_field_event_focus';
  $handler->display->display_options['filters']['field_event_focus_value']['field'] = 'field_event_focus_value';
  $handler->display->display_options['filters']['field_event_focus_value']['value'] = array(
    'Mobile' => 'Mobile',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = '';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Research Focus */
  $handler = $view->new_display('block', 'Research Focus', 'block_25');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'php' => array(
      'element_type' => 'div',
      'class' => 'registration-levels',
    ),
    'field_event_type_name' => array(
      'element_type' => 'div',
      'class' => 'event-type',
    ),
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'span',
      'class' => 'date-location',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_registration_level']['id'] = 'field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['table'] = 'field_data_field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['field'] = 'field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['label'] = '';
  $handler->display->display_options['fields']['field_registration_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_registration_level']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

if (isset($data->field_field_registration_level)) { // check for registration level array
  $levels = array();
  $raw = $data->field_field_registration_level;
  $str = \'\';
  foreach ($raw as $value) {
    if (isset($value[\'raw\'][\'value\'])) { // check for existence of raw value
      $level = $value[\'raw\'][\'value\'];
      if (!in_array($level, $levels)) array_push($levels, $level);
    }
  }
  // add values to $str in specific order
  if (in_array(\'Full Conference\', $levels)) $str .= \'<span class="full-conf">F</span> \';
  if (in_array(\'Select Conference\', $levels)) $str .= \'<span class="select-conf">S</span> \';
  if (in_array(\'Exhibits Plus\', $levels)) $str .= \'<span class="Ex-plus">E+</span> \';
  if (in_array(\'Exhibitors\', $levels)) $str .= \'<span class="Ex">Ex</span>\';
  echo $str;
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Event Type Name */
  $handler->display->display_options['fields']['field_event_type_name']['id'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['field'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['label'] = '';
  $handler->display->display_options['fields']['field_event_type_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = '- [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time] - [field_time_1]</span> | [field_location], [field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Time -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['relationship'] = 'field_session_nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_event_focus_value']['id'] = 'field_event_focus_value';
  $handler->display->display_options['filters']['field_event_focus_value']['table'] = 'field_data_field_event_focus';
  $handler->display->display_options['filters']['field_event_focus_value']['field'] = 'field_event_focus_value';
  $handler->display->display_options['filters']['field_event_focus_value']['value'] = array(
    'Research' => 'Research',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = '';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Posters Events */
  $handler = $view->new_display('block', 'Posters Events', 'block_27');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'field_category' => array(
      'element_type' => 'div',
      'class' => 'category-wrapper',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper',
    ),
    'field_full_author_affiliation' => array(
      'element_type' => 'div',
      'class' => 'affiliation-wrapper',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Session (field_session) - reverse */
  $handler->display->display_options['relationships']['reverse_field_session_node']['id'] = 'reverse_field_session_node';
  $handler->display->display_options['relationships']['reverse_field_session_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_session_node']['field'] = 'reverse_field_session_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Order */
  $handler->display->display_options['fields']['field_order']['id'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['table'] = 'field_data_field_order';
  $handler->display->display_options['fields']['field_order']['field'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['field_order']['label'] = '';
  $handler->display->display_options['fields']['field_order']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_order]. [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Order (field_order) */
  $handler->display->display_options['sorts']['field_order_value']['id'] = 'field_order_value';
  $handler->display->display_options['sorts']['field_order_value']['table'] = 'field_data_field_order';
  $handler->display->display_options['sorts']['field_order_value']['field'] = 'field_order_value';
  $handler->display->display_options['sorts']['field_order_value']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Posters (by Order) */
  $handler = $view->new_display('block', 'Posters (by Order)', 'block_26');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'field_category' => array(
      'element_type' => 'div',
      'class' => 'category-wrapper',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper',
    ),
    'field_full_author_affiliation' => array(
      'element_type' => 'div',
      'class' => 'affiliation-wrapper',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Order */
  $handler->display->display_options['fields']['field_order']['id'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['table'] = 'field_data_field_order';
  $handler->display->display_options['fields']['field_order']['field'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['field_order']['label'] = '';
  $handler->display->display_options['fields']['field_order']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_order]. [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Order (field_order) */
  $handler->display->display_options['sorts']['field_order_value']['id'] = 'field_order_value';
  $handler->display->display_options['sorts']['field_order_value']['table'] = 'field_data_field_order';
  $handler->display->display_options['sorts']['field_order_value']['field'] = 'field_order_value';
  $handler->display->display_options['sorts']['field_order_value']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    0 => '26',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Posters (by Category) */
  $handler = $view->new_display('block', 'Posters (by Category)', 'block_28');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'sessions-events posters-by-category';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'field_category' => array(
      'element_type' => 'div',
      'class' => 'category-wrapper hidden',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper',
    ),
    'field_full_author_affiliation' => array(
      'element_type' => 'div',
      'class' => 'affiliation-wrapper',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Order */
  $handler->display->display_options['fields']['field_order']['id'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['table'] = 'field_data_field_order';
  $handler->display->display_options['fields']['field_order']['field'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['field_order']['label'] = '';
  $handler->display->display_options['fields']['field_order']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_order]. [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['field_category_value']['id'] = 'field_category_value';
  $handler->display->display_options['sorts']['field_category_value']['table'] = 'field_data_field_category';
  $handler->display->display_options['sorts']['field_category_value']['field'] = 'field_category_value';
  /* Sort criterion: Content: Order (field_order) */
  $handler->display->display_options['sorts']['field_order_value']['id'] = 'field_order_value';
  $handler->display->display_options['sorts']['field_order_value']['table'] = 'field_data_field_order';
  $handler->display->display_options['sorts']['field_order_value']['field'] = 'field_order_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    0 => '26',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Physical 3D Focus */
  $handler = $view->new_display('block', 'Physical 3D Focus', 'block_29');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'php' => array(
      'element_type' => 'div',
      'class' => 'registration-levels',
    ),
    'field_event_type_name' => array(
      'element_type' => 'div',
      'class' => 'event-type',
    ),
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'span',
      'class' => 'date-location',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_registration_level']['id'] = 'field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['table'] = 'field_data_field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['field'] = 'field_registration_level';
  $handler->display->display_options['fields']['field_registration_level']['label'] = '';
  $handler->display->display_options['fields']['field_registration_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_registration_level']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

if (isset($data->field_field_registration_level)) { // check for registration level array
  $levels = array();
  $raw = $data->field_field_registration_level;
  $str = \'\';
  foreach ($raw as $value) {
    if (isset($value[\'raw\'][\'value\'])) { // check for existence of raw value
      $level = $value[\'raw\'][\'value\'];
      if (!in_array($level, $levels)) array_push($levels, $level);
    }
  }
  // add values to $str in specific order
  if (in_array(\'Full Conference\', $levels)) $str .= \'<span class="full-conf">F</span> \';
  if (in_array(\'Select Conference\', $levels)) $str .= \'<span class="select-conf">S</span> \';
  if (in_array(\'Exhibits Plus\', $levels)) $str .= \'<span class="Ex-plus">E+</span> \';
  if (in_array(\'Exhibitors\', $levels)) $str .= \'<span class="Ex">Ex</span>\';
  echo $str;
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Event Type Name */
  $handler->display->display_options['fields']['field_event_type_name']['id'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['field'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['label'] = '';
  $handler->display->display_options['fields']['field_event_type_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = '- [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time] - [field_time_1]</span> | [field_location], [field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Time -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['relationship'] = 'field_session_nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_event_focus_value']['id'] = 'field_event_focus_value';
  $handler->display->display_options['filters']['field_event_focus_value']['table'] = 'field_data_field_event_focus';
  $handler->display->display_options['filters']['field_event_focus_value']['field'] = 'field_event_focus_value';
  $handler->display->display_options['filters']['field_event_focus_value']['value'] = array(
    'Physical 3-D' => 'Physical 3-D',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = '';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Production Sessions */
  $handler = $view->new_display('block', 'Production Sessions', 'block_30');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'span',
      'class' => 'date-location',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper',
    ),
    'field_organizer' => array(
      'element_type' => 'span',
      'class' => 'organizer',
    ),
    'field_email' => array(
      'element_type' => 'span',
      'class' => 'organizer-email',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_time']['alter']['text'] = '[field_time] - ';
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = ' | [field_location]';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = ', [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time][field_time_1]</span>[field_location][field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Time -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['relationship'] = 'field_session_nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: Production Sessions Event Details */
  $handler = $view->new_display('block', 'Production Sessions Event Details', 'block_31');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'sessions-events event-info';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_event_type_name' => array(
      'element_type' => 'h1',
      'class' => 'event_type title',
    ),
    'title' => array(
      'element_type' => 'h2',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => 'p',
      'class' => 'date-location',
    ),
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper clearfix',
    ),
    'field_level' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_prerequisites' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_intended_audience' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_full_author_affiliation' => array(
      'element_type' => 'div',
      'class' => 'affiliation-wrapper',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Type Name */
  $handler->display->display_options['fields']['field_event_type_name']['id'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['field'] = 'field_event_type_name';
  $handler->display->display_options['fields']['field_event_type_name']['label'] = '';
  $handler->display->display_options['fields']['field_event_type_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_type_name']['alter']['text'] = 'Production Sessions';
  $handler->display->display_options['fields']['field_event_type_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_time']['alter']['text'] = '[field_time] - ';
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'bof',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'bof_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = ' | [field_location]';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['relationship'] = 'field_session_nid';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = ', [field_venue]';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="session-date">[field_time][field_time_1]</span>[field_location][field_venue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Level */
  $handler->display->display_options['fields']['field_level']['id'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['table'] = 'field_data_field_level';
  $handler->display->display_options['fields']['field_level']['field'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['label'] = '';
  $handler->display->display_options['fields']['field_level']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_level']['alter']['text'] = '<h3>Level</h3>
<p>[field_level]</p>';
  $handler->display->display_options['fields']['field_level']['element_label_colon'] = FALSE;
  /* Field: Content: Prerequisites */
  $handler->display->display_options['fields']['field_prerequisites']['id'] = 'field_prerequisites';
  $handler->display->display_options['fields']['field_prerequisites']['table'] = 'field_data_field_prerequisites';
  $handler->display->display_options['fields']['field_prerequisites']['field'] = 'field_prerequisites';
  $handler->display->display_options['fields']['field_prerequisites']['label'] = '';
  $handler->display->display_options['fields']['field_prerequisites']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prerequisites']['alter']['text'] = '<h3>Prerequisites</h3>
<p>[field_prerequisites]</p>';
  $handler->display->display_options['fields']['field_prerequisites']['element_label_colon'] = FALSE;
  /* Field: Content: Intended Audience */
  $handler->display->display_options['fields']['field_intended_audience']['id'] = 'field_intended_audience';
  $handler->display->display_options['fields']['field_intended_audience']['table'] = 'field_data_field_intended_audience';
  $handler->display->display_options['fields']['field_intended_audience']['field'] = 'field_intended_audience';
  $handler->display->display_options['fields']['field_intended_audience']['label'] = '';
  $handler->display->display_options['fields']['field_intended_audience']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_intended_audience']['alter']['text'] = '<h3>Intended Audience</h3>
<p>[field_intended_audience]</p>';
  $handler->display->display_options['fields']['field_intended_audience']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['alter']['text'] = '<h3>Instructor(s)</h3>
[field_full_author_affiliation]';
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Dailies */
  $handler = $view->new_display('block', 'Dailies', 'block_32');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'field_category' => array(
      'element_type' => 'div',
      'class' => 'category-wrapper',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body-wrapper',
    ),
    'field_full_author_affiliation' => array(
      'element_type' => 'div',
      'class' => 'affiliation-wrapper',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_order]. [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['relationship'] = 'reverse_field_session_node';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: PHP */
  $handler->display->display_options['sorts']['php']['id'] = 'php';
  $handler->display->display_options['sorts']['php']['table'] = 'views';
  $handler->display->display_options['sorts']['php']['field'] = 'php';
  $handler->display->display_options['sorts']['php']['use_php_setup'] = 0;
  $handler->display->display_options['sorts']['php']['php_sort'] = '$title1 = isset($row1->title) ? str_replace(\'"\', \'\', $row1->title) : \'\';
$title2 = isset($row2->title) ? str_replace(\'"\', \'\', $row2->title) : \'\';
return strcmp($title1, $title2);';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    0 => '27',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: CAF - Electronic Theater */
  $handler = $view->new_display('block', 'CAF - Electronic Theater', 'block_33');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'nothing' => array(
      'element_type' => 'div',
      'class' => 'event-text',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail_200w',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>
<div class="body-wrapper">[body]</div>
<div class="affiliation-wrapper">[field_full_author_affiliation]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    28 => '28',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';

  /* Display: DS - Children's Animation */
  $handler = $view->new_display('block', 'DS - Children\'s Animation', 'block_34');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'nothing' => array(
      'element_type' => 'div',
      'class' => 'event-text',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail_200w',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>
<div class="body-wrapper">[body]</div>
<div class="affiliation-wrapper">[field_full_author_affiliation]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    29 => '29',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_session_nid';
  $handler->display->display_options['filters']['title']['value'] = 'Daytime Selects - Children\'s Film and Animation';

  /* Display: DS - Experimental Film */
  $handler = $view->new_display('block', 'DS - Experimental Film', 'block_35');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'nothing' => array(
      'element_type' => 'div',
      'class' => 'event-text',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail_200w',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>
<div class="body-wrapper">[body]</div>
<div class="affiliation-wrapper">[field_full_author_affiliation]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    29 => '29',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_session_nid';
  $handler->display->display_options['filters']['title']['value'] = 'Daytime Selects - Experimental Film';

  /* Display: DS - Demoscene */
  $handler = $view->new_display('block', 'DS - Demoscene', 'block_36');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'nothing' => array(
      'element_type' => 'div',
      'class' => 'event-text',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail_200w',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>
<div class="body-wrapper">[body]</div>
<div class="affiliation-wrapper">[field_full_author_affiliation]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    29 => '29',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_session_nid';
  $handler->display->display_options['filters']['title']['value'] = 'Daytime Selects - Demoscene';

  /* Display: DS - Live-Action Short Films */
  $handler = $view->new_display('block', 'DS - Live-Action Short Films', 'block_37');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'nothing' => array(
      'element_type' => 'div',
      'class' => 'event-text',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail_200w',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>
<div class="body-wrapper">[body]</div>
<div class="affiliation-wrapper">[field_full_author_affiliation]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    29 => '29',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_session_nid';
  $handler->display->display_options['filters']['title']['value'] = 'Daytime Selects - Live Action Short Film';

  /* Display: DS - Student Work */
  $handler = $view->new_display('block', 'DS - Student Work', 'block_38');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'nothing' => array(
      'element_type' => 'div',
      'class' => 'event-text',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail_200w',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>
<div class="body-wrapper">[body]</div>
<div class="affiliation-wrapper">[field_full_author_affiliation]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    29 => '29',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_session_nid';
  $handler->display->display_options['filters']['title']['value'] = 'Daytime Selects - Student Work';

  /* Display: DS - Stop Motion */
  $handler = $view->new_display('block', 'DS - Stop Motion', 'block_39');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'nothing' => array(
      'element_type' => 'div',
      'class' => 'event-text',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail_200w',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>
<div class="body-wrapper">[body]</div>
<div class="affiliation-wrapper">[field_full_author_affiliation]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    29 => '29',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_session_nid';
  $handler->display->display_options['filters']['title']['value'] = 'Daytime Selects - Stop Motion';

  /* Display: DS - Japan Media Arts Festival */
  $handler = $view->new_display('block', 'DS - Japan Media Arts Festival', 'block_40');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'nothing' => array(
      'element_type' => 'div',
      'class' => 'event-text',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail_200w',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>
<div class="body-wrapper">[body]</div>
<div class="affiliation-wrapper">[field_full_author_affiliation]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    29 => '29',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_session_nid';
  $handler->display->display_options['filters']['title']['value'] = 'Daytime Selects - Japan Media Arts Festival';

  /* Display: DS - Traditional Animation */
  $handler = $view->new_display('block', 'DS - Traditional Animation', 'block_41');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'nothing' => array(
      'element_type' => 'div',
      'class' => 'event-text',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail_200w',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>
<div class="body-wrapper">[body]</div>
<div class="affiliation-wrapper">[field_full_author_affiliation]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    29 => '29',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_session_nid';
  $handler->display->display_options['filters']['title']['value'] = 'Daytime Selects - Traditional Animation';

  /* Display: Appy Hour */
  $handler = $view->new_display('block', 'Appy Hour', 'block_42');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_thumbnail' => array(
      'element_type' => 'div',
      'class' => 'event-image',
    ),
    'nothing' => array(
      'element_type' => 'div',
      'class' => 'event-text',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail_200w',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Full Author Affiliation */
  $handler->display->display_options['fields']['field_full_author_affiliation']['id'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['table'] = 'field_data_field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['field'] = 'field_full_author_affiliation';
  $handler->display->display_options['fields']['field_full_author_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_full_author_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_author_affiliation']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>
<div class="body-wrapper">[body]</div>
<div class="affiliation-wrapper">[field_full_author_affiliation]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Type Name (field_event_type_name) */
  $handler->display->display_options['filters']['field_event_type_name_tid']['id'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['table'] = 'field_data_field_event_type_name';
  $handler->display->display_options['filters']['field_event_type_name_tid']['field'] = 'field_event_type_name_tid';
  $handler->display->display_options['filters']['field_event_type_name_tid']['value'] = array(
    30 => '30',
  );
  $handler->display->display_options['filters']['field_event_type_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_name_tid']['vocabulary'] = 'event_type';
  $export['sessions_and_events'] = $view;

  return $export;
}
