<?php
/**
 * @file
 * Definition of Silvia Media two col layout.
 */

$plugin = array(
  'title' => t('Two column stacked'),
  'theme' => 'twocolwide',
  'icon' => 'twocolwide.png',
  'category' => 'Silvia Media',
  'regions' => array(
    'images' => t('Images'),
    'aside' => t('Aside'),
    'text' => t('Text'),
    'more_cases' => t('More cases'),
  ),
);

function template_preprocess_twocolwide(&$vars){

  $vars['main_grid_class'] = empty($vars['content']['aside']) ? '' : 'grid-9';

}
