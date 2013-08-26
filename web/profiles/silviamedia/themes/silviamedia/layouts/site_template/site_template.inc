<?php
/**
 * @file
 * Definition of Silvia Media site template layout.
 */

$plugin = array(
  'title' => t('Site template'),
  'theme' => 'site-template',
  'icon' => 'site-template.png',
  'category' => 'Silvia Media',
  'regions' => array(
    'navigation' => t('Navigation'),
    'branding' => t('Branding'),
    'content' => t('Content'),
    'content_footer' => t('Content footer'),
    'closure' => t('Closure'),
  ),
);
