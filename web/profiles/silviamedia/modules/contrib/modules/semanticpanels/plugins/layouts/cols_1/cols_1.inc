<?php

/**
 * implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(

  'title' => t('Columns: 1'),
  'regions' => array('col_1' => t('Column 1')),
  'icon' => 'cols_1.png',
  'theme suggestions' => array('foo'),

  'category' => t('Semantic Panels (*unstable*)'),
  'theme' => 'semantic_panels_layout',
  'settings form' => 'semantic_panels_layout_settings_form'
);

module_load_include('inc', 'semantic_panels', 'includes/layout');