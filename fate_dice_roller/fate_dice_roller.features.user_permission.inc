<?php
/**
 * @file
 * fate_dice_roller.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fate_dice_roller_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_roll'.
  $permissions['create field_roll'] = array(
    'name' => 'create field_roll',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_roll_modifier'.
  $permissions['create field_roll_modifier'] = array(
    'name' => 'create field_roll_modifier',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_roll'.
  $permissions['edit field_roll'] = array(
    'name' => 'edit field_roll',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_roll_modifier'.
  $permissions['edit field_roll_modifier'] = array(
    'name' => 'edit field_roll_modifier',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_roll'.
  $permissions['edit own field_roll'] = array(
    'name' => 'edit own field_roll',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_roll_modifier'.
  $permissions['edit own field_roll_modifier'] = array(
    'name' => 'edit own field_roll_modifier',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_roll'.
  $permissions['view field_roll'] = array(
    'name' => 'view field_roll',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_roll_modifier'.
  $permissions['view field_roll_modifier'] = array(
    'name' => 'view field_roll_modifier',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_roll'.
  $permissions['view own field_roll'] = array(
    'name' => 'view own field_roll',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_roll_modifier'.
  $permissions['view own field_roll_modifier'] = array(
    'name' => 'view own field_roll_modifier',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
