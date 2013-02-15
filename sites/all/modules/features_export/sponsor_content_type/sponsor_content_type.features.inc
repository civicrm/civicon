<?php
/**
 * @file
 * sponsor_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function sponsor_content_type_node_info() {
  $items = array(
    'sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('An event sponsor'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
