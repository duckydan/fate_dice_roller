<?php
/**
 * @file
 * fate_dice_roller.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fate_dice_roller_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_forum-field_roll'.
  $field_instances['comment-comment_node_forum-field_roll'] = array(
    'bundle' => 'comment_node_forum',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_roll',
    'label' => 'Roll result',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'comment-comment_node_forum-field_roll_modifier'.
  $field_instances['comment-comment_node_forum-field_roll_modifier'] = array(
    'bundle' => 'comment_node_forum',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'To roll dice, enter in a value here, even if it is 0.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_roll_modifier',
    'label' => 'Roll modifier',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Roll modifier');
  t('Roll result');
  t('To roll dice, enter in a value here, even if it is 0.');

  return $field_instances;
}
