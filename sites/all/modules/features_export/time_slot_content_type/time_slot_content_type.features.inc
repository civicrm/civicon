<?php
/**
 * @file
 * time_slot_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function time_slot_content_type_node_info() {
  $items = array(
    'time_slot' => array(
      'name' => t('Time slot'),
      'base' => 'node_content',
      'description' => t('Use time slots to define when sessions will occur.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
