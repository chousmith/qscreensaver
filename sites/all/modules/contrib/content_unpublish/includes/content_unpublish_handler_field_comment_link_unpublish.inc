<?php

/**
 * Field handler to present a link comment unpublish.
 */
class content_unpublish_handler_field_comment_link_unpublish extends views_handler_field_comment_link {
  function construct() {
    parent::construct();
    $this->additional_fields['uid'] = 'uid';
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['destination'] = array('default' => FALSE);

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['destination'] = array(
      '#type' => 'checkbox',
      '#title' => t('Use destination'),
      '#description' => t('Add destination to the link'),
      '#default_value' => $this->options['destination'],
    );
  }

  function render_link($data, $values) {
    parent::render_link($data, $values);
    // Ensure user has access to unpublish this comment.
    $wrapper = entity_metadata_wrapper('comment', $values->cid);
    if (!$wrapper->unpublish_link->access('view')) {
      return;
    }

    $text = !empty($this->options['text']) ? $this->options['text'] : t('delete');

    $this->options['alter']['make_link'] = TRUE;
    $this->options['alter']['path'] = $wrapper->unpublish_url->value();
    $this->options['alter']['query'] = drupal_get_destination();
    // Re-add the token.
    $this->options['alter']['query']['token'] = drupal_get_token($values->cid);


    return $text;
  }
}

