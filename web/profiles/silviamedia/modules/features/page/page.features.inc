<?php
/**
 * @file
 * page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function page_image_default_styles() {
  $styles = array();

  // Exported image style: page_small_image
  $styles['page_small_image'] = array(
    'name' => 'page_small_image',
    'effects' => array(),
  );

  // Exported image style: page_specific
  $styles['page_specific'] = array(
    'name' => 'page_specific',
    'effects' => array(),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function page_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('standar page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
