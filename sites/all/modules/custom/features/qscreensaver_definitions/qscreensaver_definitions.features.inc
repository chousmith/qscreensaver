<?php
/**
 * @file
 * qscreensaver_definitions.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function qscreensaver_definitions_flag_default_flags() {
  $flags = array();
  // Exported flag: "Default-Enabled".
  $flags['defaultenabled'] = array(
    'entity_type' => 'taxonomy_term',
    'title' => 'Default-Enabled',
    'global' => 1,
    'types' => array(
      0 => 'folders',
    ),
    'flag_short' => 'Make this item Enabled by default',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Make this item Disabled by default',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'qscreensaver_definitions',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function qscreensaver_definitions_image_default_styles() {
  $styles = array();

  // Exported image style: l.
  $styles['l'] = array(
    'name' => 'l',
    'label' => 'l (1920x1080)',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 1080,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: p.
  $styles['p'] = array(
    'name' => 'p',
    'label' => 'p (1080x1920)',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1080,
          'height' => 1920,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: s.
  $styles['s'] = array(
    'name' => 's',
    'label' => 'fullsize',
    'effects' => array(
      6 => array(
        'label' => 'Aspect switcher',
        'help' => 'Use different effects depending on whether the image is landscape of portrait shaped. This re-uses other preset definitions, and just chooses between them based on the rule.',
        'effect callback' => 'canvasactions_aspect_effect',
        'dimensions callback' => 'canvasactions_aspect_dimensions',
        'form callback' => 'canvasactions_aspect_form',
        'summary theme' => 'canvasactions_aspect_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_aspect',
        'data' => array(
          'portrait' => 'p',
          'landscape' => 'l',
          'ratio_adjustment' => 1.77,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thm.
  $styles['thm'] = array(
    'name' => 'thm',
    'label' => 'thm',
    'effects' => array(
      5 => array(
        'label' => 'Aspect switcher',
        'help' => 'Use different effects depending on whether the image is landscape of portrait shaped. This re-uses other preset definitions, and just chooses between them based on the rule.',
        'effect callback' => 'canvasactions_aspect_effect',
        'dimensions callback' => 'canvasactions_aspect_dimensions',
        'form callback' => 'canvasactions_aspect_form',
        'summary theme' => 'canvasactions_aspect_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_aspect',
        'data' => array(
          'portrait' => 'thmp',
          'landscape' => 'thml',
          'ratio_adjustment' => 1.77,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thml.
  $styles['thml'] = array(
    'name' => 'thml',
    'label' => 'thm l (192x108)',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 192,
          'height' => 108,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thmp.
  $styles['thmp'] = array(
    'name' => 'thmp',
    'label' => 'thm p (108x192)',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 108,
          'height' => 192,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function qscreensaver_definitions_node_info() {
  $items = array(
    'landscape_slide' => array(
      'name' => t('Landscape Slide'),
      'base' => 'node_content',
      'description' => t('Slides content should be uploaded at 1920x1080 resolution'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'portrait_slide' => array(
      'name' => t('Portrait Slide'),
      'base' => 'node_content',
      'description' => t('Slides content should be uploaded at 1080x1920 resolution'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
