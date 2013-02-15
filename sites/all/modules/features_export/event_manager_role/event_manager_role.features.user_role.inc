<?php
/**
 * @file
 * event_manager_role.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function event_manager_role_user_default_roles() {
  $roles = array();

  // Exported role: Event Manager.
  $roles['Event Manager'] = array(
    'name' => 'Event Manager',
    'weight' => '5',
  );

  return $roles;
}
