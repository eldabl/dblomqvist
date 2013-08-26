<?php
/**
 * @file
 * silvia_customer_bragging.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function silvia_customer_bragging_taxonomy_default_vocabularies() {
  return array(
    'taggar' => array(
      'name' => 'Detta gjorde vi',
      'machine_name' => 'taggar',
      'description' => 'Design, Layout, Copy, Original, Förnuft, Känsla',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
