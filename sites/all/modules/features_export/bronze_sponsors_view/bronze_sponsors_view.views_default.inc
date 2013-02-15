<?php
/**
 * @file
 * bronze_sponsors_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bronze_sponsors_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bronze_sponsors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bronze Sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bronze Sponsors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No Sponsors have been added yet.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Sponsorship Level (field_sponsor_sponsorship_level) */
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['id'] = 'field_sponsor_sponsorship_level_tid';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['table'] = 'field_data_field_sponsor_sponsorship_level';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['field'] = 'field_sponsor_sponsorship_level_tid';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['vocabulary'] = 'sponsorship_level';

  /* Display: Bronze Sponsor Page */
  $handler = $view->new_display('page', 'Bronze Sponsor Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Sponsorship Level (field_sponsor_sponsorship_level) */
  $handler->display->display_options['relationships']['field_sponsor_sponsorship_level_tid']['id'] = 'field_sponsor_sponsorship_level_tid';
  $handler->display->display_options['relationships']['field_sponsor_sponsorship_level_tid']['table'] = 'field_data_field_sponsor_sponsorship_level';
  $handler->display->display_options['relationships']['field_sponsor_sponsorship_level_tid']['field'] = 'field_sponsor_sponsorship_level_tid';
  $handler->display->display_options['relationships']['field_sponsor_sponsorship_level_tid']['label'] = 'Sponsorship Level';
  $handler->display->display_options['relationships']['field_sponsor_sponsorship_level_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Sponsorship Level */
  $handler->display->display_options['fields']['field_sponsor_sponsorship_level']['id'] = 'field_sponsor_sponsorship_level';
  $handler->display->display_options['fields']['field_sponsor_sponsorship_level']['table'] = 'field_data_field_sponsor_sponsorship_level';
  $handler->display->display_options['fields']['field_sponsor_sponsorship_level']['field'] = 'field_sponsor_sponsorship_level';
  $handler->display->display_options['fields']['field_sponsor_sponsorship_level']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_sponsorship_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sponsor_sponsorship_level']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_sponsor_sponsorship_level']['element_class'] = 'title';
  $handler->display->display_options['fields']['field_sponsor_sponsorship_level']['element_label_colon'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_sponsor_sponsorship_level_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'bronze-sponsors';
  $handler->display->display_options['menu']['title'] = 'Sponsors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Bronze Sponsor Block */
  $handler = $view->new_display('block', 'Bronze Sponsor Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Sponsorship Level (field_sponsor_sponsorship_level) */
  $handler->display->display_options['arguments']['field_sponsor_sponsorship_level_tid']['id'] = 'field_sponsor_sponsorship_level_tid';
  $handler->display->display_options['arguments']['field_sponsor_sponsorship_level_tid']['table'] = 'field_data_field_sponsor_sponsorship_level';
  $handler->display->display_options['arguments']['field_sponsor_sponsorship_level_tid']['field'] = 'field_sponsor_sponsorship_level_tid';
  $handler->display->display_options['arguments']['field_sponsor_sponsorship_level_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_sponsor_sponsorship_level_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sponsor_sponsorship_level_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sponsor_sponsorship_level_tid']['summary_options']['items_per_page'] = '25';
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
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Sponsorship Level (field_sponsor_sponsorship_level) */
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['id'] = 'field_sponsor_sponsorship_level_tid';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['table'] = 'field_data_field_sponsor_sponsorship_level';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['field'] = 'field_sponsor_sponsorship_level_tid';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['vocabulary'] = 'sponsorship_level';
  $export['bronze_sponsors'] = $view;

  return $export;
}
