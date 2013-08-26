<?php
/**
 * @file
 * silvia_blog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function silvia_blog_taxonomy_default_vocabularies() {
  return array(
    'senaste_nytt' => array(
      'name' => 'Senaste nytt',
      'machine_name' => 'senaste_nytt',
      'description' => 'De senaste taggade blogginläggen',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
