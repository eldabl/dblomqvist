<?php

$plugin = array(
  'title' => t('ns_core site template'),
  'theme' => 'ns_core_site_template',
  'icon' => 'ns-core-site-template.png',
  'category' => 'ns_core',
  'regions' => array(
    'branding' => t('Branding'),
    'nav' => t('Navigation'),
    'main' => t('Main'),
    'footer' => t('Footer'),
  ),
);

/**
 * Preprocess the site template layout.
 */
function ns_core_preprocess_ns_core_site_template(&$vars) {
  ns_core_check_layout_variables($vars);
}
