<?php
/**
 * @file
 * qscreensaver_definitions.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function qscreensaver_definitions_taxonomy_default_vocabularies() {
  return array(
    'folders' => array(
      'name' => 'Folders',
      'machine_name' => 'folders',
      'description' => 'Slides are grouped into categories',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
