<?php

/**
 * @file
 * Provides support for the Views module.
 */

/**
 * Implements hook_views_handlers().
 */
function content_unpublish_views_handlers() {
  return array(
    // Node unpublish field.
    'content_unpublish_handler_field_node_link_unpublish' => array(
     'parent' => 'views_handler_field_node_link',
    ),
    // Comment unpublish field.
    'content_unpublish_handler_field_comment_link_unpublish' => array(
     'parent' => 'views_handler_field_comment_link',
    ),
  );
}


/**
 * Implements hook_views_data().
 */
function content_unpublish_views_data() {
  // Link to node unpublish.
  $data['node']['unpublish_node'] = array(
    'field' => array(
      'title' => t('Unpublish link'),
      'help' => t('Provide a simple link to unpublish the node.'),
      'handler' => 'content_unpublish_handler_field_node_link_unpublish',
    ),
  );

  // Link to comment unpublish.
  $data['comment']['unpublish_comment'] = array(
    'field' => array(
      'title' => t('Unpublish link'),
      'help' => t('Provide a simple link to unpublish the comment.'),
      'handler' => 'content_unpublish_handler_field_comment_link_unpublish',
    ),
  );

  return $data;
}
