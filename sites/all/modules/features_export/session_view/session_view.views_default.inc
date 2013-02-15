<?php
/**
 * @file
 * session_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function session_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'clone_of_sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Proposed Sessions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_speakers' => 'field_speakers',
    'body' => 'body',
    'field_accepted' => 'field_accepted',
    'field_experience' => 'field_experience',
    'field_track' => 'field_track',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'field_speakers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_accepted' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_experience' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_track' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No sessions...';
  $handler->display->display_options['empty']['area']['content'] = 'No sessions have been submitted.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Session';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['hide_alter_empty'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_accepted']['id'] = 'field_accepted';
  $handler->display->display_options['fields']['field_accepted']['table'] = 'field_data_field_accepted';
  $handler->display->display_options['fields']['field_accepted']['field'] = 'field_accepted';
  $handler->display->display_options['fields']['field_accepted']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_accepted']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_accepted']['hide_alter_empty'] = FALSE;
  /* Field: Content: Experience level */
  $handler->display->display_options['fields']['field_experience']['id'] = 'field_experience';
  $handler->display->display_options['fields']['field_experience']['table'] = 'field_data_field_experience';
  $handler->display->display_options['fields']['field_experience']['field'] = 'field_experience';
  $handler->display->display_options['fields']['field_experience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_experience']['hide_alter_empty'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  /* Filter criterion: Content: Experience level (field_experience) */
  $handler->display->display_options['filters']['field_experience_value']['id'] = 'field_experience_value';
  $handler->display->display_options['filters']['field_experience_value']['table'] = 'field_data_field_experience';
  $handler->display->display_options['filters']['field_experience_value']['field'] = 'field_experience_value';
  $handler->display->display_options['filters']['field_experience_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_experience_value']['expose']['operator_id'] = 'field_experience_value_op';
  $handler->display->display_options['filters']['field_experience_value']['expose']['label'] = 'Experience';
  $handler->display->display_options['filters']['field_experience_value']['expose']['operator'] = 'field_experience_value_op';
  $handler->display->display_options['filters']['field_experience_value']['expose']['identifier'] = 'field_experience_value';
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter by keywords';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  /* Filter criterion: Content: Status (field_accepted) */
  $handler->display->display_options['filters']['field_accepted_value']['id'] = 'field_accepted_value';
  $handler->display->display_options['filters']['field_accepted_value']['table'] = 'field_data_field_accepted';
  $handler->display->display_options['filters']['field_accepted_value']['field'] = 'field_accepted_value';
  $handler->display->display_options['filters']['field_accepted_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page: Proposed */
  $handler = $view->new_display('page', 'Page: Proposed', 'page_proposed');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Experience level (field_experience) */
  $handler->display->display_options['filters']['field_experience_value']['id'] = 'field_experience_value';
  $handler->display->display_options['filters']['field_experience_value']['table'] = 'field_data_field_experience';
  $handler->display->display_options['filters']['field_experience_value']['field'] = 'field_experience_value';
  $handler->display->display_options['filters']['field_experience_value']['group'] = 0;
  $handler->display->display_options['filters']['field_experience_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_experience_value']['expose']['operator_id'] = 'field_experience_value_op';
  $handler->display->display_options['filters']['field_experience_value']['expose']['label'] = 'Experience level';
  $handler->display->display_options['filters']['field_experience_value']['expose']['operator'] = 'field_experience_value_op';
  $handler->display->display_options['filters']['field_experience_value']['expose']['identifier'] = 'field_experience_value';
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 0;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter by keywords:';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  /* Filter criterion: Content: Status (field_accepted) */
  $handler->display->display_options['filters']['field_accepted_value_1']['id'] = 'field_accepted_value_1';
  $handler->display->display_options['filters']['field_accepted_value_1']['table'] = 'field_data_field_accepted';
  $handler->display->display_options['filters']['field_accepted_value_1']['field'] = 'field_accepted_value';
  $handler->display->display_options['filters']['field_accepted_value_1']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_accepted_value_1']['group'] = 0;
  $handler->display->display_options['path'] = 'program/sessions/proposed';
  $handler->display->display_options['menu']['title'] = 'Proposed Sessions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Page: Accepted */
  $handler = $view->new_display('page', 'Page: Accepted', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Accepted Sessions';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_speakers' => 'field_speakers',
    'body' => 'body',
    'field_accepted' => 'field_accepted',
    'field_experience' => 'field_experience',
    'field_track' => 'field_track',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_speakers' => array(
      'align' => '',
      'separator' => '',
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_accepted' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_experience' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_track' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No sessions...';
  $handler->display->display_options['empty']['area']['content'] = 'No sessions have been accepted yet.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['path'] = 'program/sessions/accepted';
  $handler->display->display_options['menu']['title'] = 'Accepted Sessions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Sessions';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';
  $export['clone_of_sessions'] = $view;

  return $export;
}
