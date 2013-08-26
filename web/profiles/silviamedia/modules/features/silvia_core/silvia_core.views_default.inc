<?php
/**
 * @file
 * silvia_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function silvia_core_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'pladder_jidder';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'aggregator_item';
  $view->human_name = 'pladder&jidder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pladder & Jidder';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Aggregator: Link */
  $handler->display->display_options['fields']['link']['id'] = 'link';
  $handler->display->display_options['fields']['link']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['link']['field'] = 'link';
  $handler->display->display_options['fields']['link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['link']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['link']['display_as_link'] = 0;
  /* Field: Aggregator: Body */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'Facebook';
  $handler->display->display_options['fields']['description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['description']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['description']['alter']['path'] = '[link]';
  $handler->display->display_options['fields']['description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['description']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['description']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['description']['alter']['html'] = 1;
  $handler->display->display_options['fields']['description']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['description']['hide_alter_empty'] = 1;
  /* Sort criterion: Aggregator: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'aggregator_item';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'rss-flow';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['pladder_jidder'] = $view;

  return $export;
}
