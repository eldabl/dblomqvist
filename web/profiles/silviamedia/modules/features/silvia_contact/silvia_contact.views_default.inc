<?php
/**
 * @file
 * silvia_contact.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function silvia_contact_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Staff';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'views-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h1>Vi jobbar här</h1>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'staff' => 'staff',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: &lt;div class=&quot;case-inner&quot;&gt; */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '<div class="case-inner">';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="case-inner">';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Content: About */
  $handler->display->display_options['fields']['field_staff_about']['id'] = 'field_staff_about';
  $handler->display->display_options['fields']['field_staff_about']['table'] = 'field_data_field_staff_about';
  $handler->display->display_options['fields']['field_staff_about']['field'] = 'field_staff_about';
  $handler->display->display_options['fields']['field_staff_about']['label'] = '';
  $handler->display->display_options['fields']['field_staff_about']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_about']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_staff_about']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_staff_about']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_staff_about']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_staff_about']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_staff_about']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_staff_about']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_staff_about']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_staff_about']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_staff_about']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_staff_about']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_staff_about']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_staff_about']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_staff_about']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_about']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_staff_about']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_staff_about']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_staff_about']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_staff_about']['field_api_classes'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_staff_email']['id'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['table'] = 'field_data_field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['field'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['label'] = '';
  $handler->display->display_options['fields']['field_staff_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_staff_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_staff_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_staff_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_staff_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_staff_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_staff_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_staff_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_staff_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_staff_email']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_staff_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_staff_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_staff_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_staff_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_staff_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_staff_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_staff_email']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_staff_email']['field_api_classes'] = 0;
  /* Field: Content: Telephone */
  $handler->display->display_options['fields']['field_staff_telephone']['id'] = 'field_staff_telephone';
  $handler->display->display_options['fields']['field_staff_telephone']['table'] = 'field_data_field_staff_telephone';
  $handler->display->display_options['fields']['field_staff_telephone']['field'] = 'field_staff_telephone';
  $handler->display->display_options['fields']['field_staff_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_staff_telephone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_telephone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_staff_telephone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_staff_telephone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_staff_telephone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_staff_telephone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_staff_telephone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_staff_telephone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_staff_telephone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_staff_telephone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_staff_telephone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_staff_telephone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_staff_telephone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_staff_telephone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_staff_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_telephone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_staff_telephone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_staff_telephone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_staff_telephone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_staff_telephone']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="name">[title]</div>
<div class="about">[field_staff_about]</div>
<div class="email">[field_staff_email]</div>
<div class="phone">[field_staff_telephone]</div>
';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_staff_picture']['id'] = 'field_staff_picture';
  $handler->display->display_options['fields']['field_staff_picture']['table'] = 'field_data_field_staff_picture';
  $handler->display->display_options['fields']['field_staff_picture']['field'] = 'field_staff_picture';
  $handler->display->display_options['fields']['field_staff_picture']['label'] = '';
  $handler->display->display_options['fields']['field_staff_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_staff_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_staff_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_staff_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_staff_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_staff_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_staff_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_staff_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_staff_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_staff_picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_staff_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_staff_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_staff_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_staff_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_staff_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_staff_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_staff_picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_staff_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_staff_picture']['settings'] = array(
    'image_style' => 'case_list',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_staff_picture']['field_api_classes'] = 0;
  /* Field: &lt;/div&gt; */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_1']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['staff'] = $view;

  return $export;
}
