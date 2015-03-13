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
  $view->name = 'hours_and_location';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hours and Location';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Deadlines';
  $handler->display->display_options['css_class'] = 'title-line-tooltip title-line-submission-deadline';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_sub_deadline' => array(
      'element_type' => 'div',
      'class' => 'dead-date',
    ),
    'field_sub_deadline_1' => array(
      'element_type' => 'div',
      'class' => 'dead-time',
    ),
    'nothing_1' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'field_late_deadline' => array(
      'element_type' => 'div',
      'class' => 'late-break-date',
    ),
    'field_late_deadline_1' => array(
      'element_type' => 'div',
      'class' => 'late-break-time',
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Convert to your time zone';
  $handler->display->display_options['footer']['area']['content'] = '<p class="title-line-submission-deadline-footer title-line-tooltip-footer"><a href="http://www.timeanddate.com/worldclock/converter.html" target="_blank">Convert to your time zone »</a><p>';
  $handler->display->display_options['footer']['area']['format'] = 'event';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Submission Deadline */
  $handler->display->display_options['fields']['field_sub_deadline']['id'] = 'field_sub_deadline';
  $handler->display->display_options['fields']['field_sub_deadline']['table'] = 'field_data_field_sub_deadline';
  $handler->display->display_options['fields']['field_sub_deadline']['field'] = 'field_sub_deadline';
  $handler->display->display_options['fields']['field_sub_deadline']['label'] = '';
  $handler->display->display_options['fields']['field_sub_deadline']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sub_deadline']['alter']['text'] = '[field_sub_deadline]';
  $handler->display->display_options['fields']['field_sub_deadline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sub_deadline']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sub_deadline']['settings'] = array(
    'format_type' => 'submission_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Submission Deadline */
  $handler->display->display_options['fields']['field_sub_deadline_1']['id'] = 'field_sub_deadline_1';
  $handler->display->display_options['fields']['field_sub_deadline_1']['table'] = 'field_data_field_sub_deadline';
  $handler->display->display_options['fields']['field_sub_deadline_1']['field'] = 'field_sub_deadline';
  $handler->display->display_options['fields']['field_sub_deadline_1']['label'] = '';
  $handler->display->display_options['fields']['field_sub_deadline_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sub_deadline_1']['alter']['text'] = '[field_sub_deadline_1] <span>UTC/GMT</span>';
  $handler->display->display_options['fields']['field_sub_deadline_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sub_deadline_1']['settings'] = array(
    'format_type' => 'submission_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Late Deadline Heading */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Late Deadline Heading';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Late Deadline';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Late Breaking */
  $handler->display->display_options['fields']['field_late_deadline']['id'] = 'field_late_deadline';
  $handler->display->display_options['fields']['field_late_deadline']['table'] = 'field_data_field_late_deadline';
  $handler->display->display_options['fields']['field_late_deadline']['field'] = 'field_late_deadline';
  $handler->display->display_options['fields']['field_late_deadline']['label'] = '';
  $handler->display->display_options['fields']['field_late_deadline']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_late_deadline']['alter']['text'] = '[field_late_deadline]';
  $handler->display->display_options['fields']['field_late_deadline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_late_deadline']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_late_deadline']['settings'] = array(
    'format_type' => 'submission_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Late Breaking */
  $handler->display->display_options['fields']['field_late_deadline_1']['id'] = 'field_late_deadline_1';
  $handler->display->display_options['fields']['field_late_deadline_1']['table'] = 'field_data_field_late_deadline';
  $handler->display->display_options['fields']['field_late_deadline_1']['field'] = 'field_late_deadline';
  $handler->display->display_options['fields']['field_late_deadline_1']['label'] = '';
  $handler->display->display_options['fields']['field_late_deadline_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_late_deadline_1']['alter']['text'] = '[field_late_deadline_1] <span>UTC/GMT</span>';
  $handler->display->display_options['fields']['field_late_deadline_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_late_deadline_1']['settings'] = array(
    'format_type' => 'submission_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php if (($row->nid) == 37 ): ?>
<span class="late-breaking-label">Paper Deadline</span><br /><span class="date-display-single" property="dc:date" datatype="xsd:dateTime" content="2013-05-07T22:00:00-04:00">Friday, 18 January 2013</span></div>
<div class="late-break-time"><span class="date-display-single" property="dc:date" datatype="xsd:dateTime" content="2013-05-07T22:00:00-04:00">22:00</span> <span>UTC/GMT</span></div>
<?php endif; ?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="convert"><a href="http://www.timeanddate.com/worldclock/converter.html">Convert to your time zone »</a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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

  /* Display: Hours and Location */
  $handler = $view->new_display('block', 'Hours and Location', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hours and Location';
  $handler->display->display_options['display_description'] = 'Hours and Location';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_hours' => array(
      'element_type' => 'div',
      'class' => 'title-line-tooltip-paragraph',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Hour Info */
  $handler->display->display_options['fields']['field_hours']['id'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['table'] = 'field_data_field_hours';
  $handler->display->display_options['fields']['field_hours']['field'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['label'] = '';
  $handler->display->display_options['fields']['field_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Hour Info (field_hours) */
  $handler->display->display_options['filters']['field_hours_value']['id'] = 'field_hours_value';
  $handler->display->display_options['filters']['field_hours_value']['table'] = 'field_data_field_hours';
  $handler->display->display_options['filters']['field_hours_value']['field'] = 'field_hours_value';
  $handler->display->display_options['filters']['field_hours_value']['operator'] = 'not empty';
  $export['hours_and_location'] = $view;

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
