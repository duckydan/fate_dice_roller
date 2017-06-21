<?php
/**
 * @file
 * fate_dice_roller.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fate_dice_roller_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dice_roll|comment|comment_node_forum|form';
  $field_group->group_name = 'group_dice_roll';
  $field_group->entity_type = 'comment';
  $field_group->bundle = 'comment_node_forum';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dice roll',
    'weight' => '3',
    'children' => array(
      0 => 'field_roll_modifier',
      1 => 'field_roll',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Dice roll',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-dice-roll field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dice roll');

  return $field_groups;
}
