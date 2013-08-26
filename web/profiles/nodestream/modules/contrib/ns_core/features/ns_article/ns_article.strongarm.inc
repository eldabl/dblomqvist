<?php
/**
 * @file
 * ns_article.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ns_article_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ns_article';
  $strongarm->value = '0';
  $export['language_content_type_ns_article'] = $strongarm;

  return $export;
}
