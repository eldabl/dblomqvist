<?php
/**
 * @file
 * promote_image.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function promote_image_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'promote_image';
  $view->description = 'Promotoe image display';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Promote image';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Promote image */
  $handler->display->display_options['fields']['field_promote_image']['id'] = 'field_promote_image';
  $handler->display->display_options['fields']['field_promote_image']['table'] = 'field_data_field_promote_image';
  $handler->display->display_options['fields']['field_promote_image']['field'] = 'field_promote_image';
  $handler->display->display_options['fields']['field_promote_image']['label'] = '';
  $handler->display->display_options['fields']['field_promote_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_promote_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_promote_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_promote_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_promote_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_promote_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_promote_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_promote_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_promote_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_promote_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_promote_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_promote_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_promote_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_promote_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promote_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_promote_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_promote_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_promote_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_promote_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_promote_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_promote_image']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Promoto to section (field_promote_image_section) */
  $handler->display->display_options['arguments']['field_promote_image_section_value']['id'] = 'field_promote_image_section_value';
  $handler->display->display_options['arguments']['field_promote_image_section_value']['table'] = 'field_data_field_promote_image_section';
  $handler->display->display_options['arguments']['field_promote_image_section_value']['field'] = 'field_promote_image_section_value';
  $handler->display->display_options['arguments']['field_promote_image_section_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_promote_image_section_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_promote_image_section_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_promote_image_section_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_promote_image_section_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_promote_image_section_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_promote_image_section_value']['summary']['human'] = 0;
  $handler->display->display_options['arguments']['field_promote_image_section_value']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_promote_image_section_value']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'promote_image' => 'promote_image',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_promote_image_section_value' => array(
      'type' => 'user',
      'context' => 'entity:node.field_promote_image_section',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Promoto to section(field_promote_image_section)',
    ),
  );
  $export['promote_image'] = $view;

  return $export;
}
