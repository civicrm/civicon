<?php
/**
 * @file
 * session_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function session_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function session_content_type_node_info() {
  $items = array(
    'session' => array(
      'name' => t('Session'),
      'base' => 'node_content',
      'description' => t('Use this content type to propose sessions at the event. Users can vote on proposed sessions and add sessions to their individual session agendas.'),
      'has_title' => '1',
      'title_label' => t('Session Title'),
      'help' => '',
    ),
  );
  return $items;
}
