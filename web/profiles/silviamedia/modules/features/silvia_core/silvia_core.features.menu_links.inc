<?php
/**
 * @file
 * silvia_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function silvia_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:blogg
  $menu_links['main-menu:blogg'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blogg',
    'router_path' => 'blogg',
    'link_title' => 'Blogg',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:kundskryt
  $menu_links['main-menu:kundskryt'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'kundskryt',
    'router_path' => 'kundskryt',
    'link_title' => 'Kundskryt',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:node/1
  $menu_links['main-menu:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'OM OSS',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:node/2
  $menu_links['main-menu:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'KONTAKT',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blogg');
  t('KONTAKT');
  t('Kundskryt');
  t('OM OSS');


  return $menu_links;
}
