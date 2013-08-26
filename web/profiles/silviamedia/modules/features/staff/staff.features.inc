<?php
/**
 * @file
 * staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function staff_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function staff_image_default_styles() {
  $styles = array();

  // Exported image style: staff
  $styles['staff'] = array(
    'name' => 'staff',
    'effects' => array(),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function staff_node_info() {
  $items = array(
    'staff' => array(
      'name' => t('Staff'),
      'base' => 'node_content',
      'description' => t('Kontaktkort'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
