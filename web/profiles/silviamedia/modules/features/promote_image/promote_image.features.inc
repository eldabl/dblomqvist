<?php
/**
 * @file
 * promote_image.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function promote_image_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function promote_image_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function promote_image_node_info() {
  $items = array(
    'promote_image' => array(
      'name' => t('Promote image'),
      'base' => 'node_content',
      'description' => t('Upload an image that will be displayed on the frontpage in the brabding section of the page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
