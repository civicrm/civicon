<?php
/**
 * @file
 * room_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function room_content_type_node_info() {
  $items = array(
    'room' => array(
      'name' => t('Room'),
      'base' => 'node_content',
      'description' => t('Rooms provide a location for each session.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
