<?php

function semantic_panels_layout_settings_form($display, $layout, $settings){

  $form = array();
  $elements = _semantic_panels_get_elements();

  // Code from views:
  // Some form elements belong in a fieldset for presentation, but can't
  // be moved into one because of the form_state['values'] hierarchy. Those
  // elements can add a #fieldset => 'fieldset_name' property, and they'll
  // be moved to their fieldset during pre_render.
  $form['#pre_render'][] = 'semantic_panels_pre_render_add_fieldset_markup';

  $form['layout_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Layout Settings'),
    '#weight' => 0,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['panel'] = array(
    '#type' => 'fieldset',
    '#title' => t('Panel Settings'),
    '#weight' => 0,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#fieldset' => 'layout_settings'
  );
  $form['panel']['element_wrapper'] = array(
    '#type' => 'fieldset',
    '#title' => t('Wrapper settings'),
    '#weight' => 2,
    '#collapsible' => TRUE,
  );
  $form['panel']['element_wrapper']['#pre_render'][] = 'semantic_panels_pre_render_add_fieldset_markup';

  $form['panel']['element_wrapper']['type'] = array(
    '#type' => 'select',
    '#title' => t('HTML element'),
    '#options' => $elements,
    '#default_value' => isset($settings['panel']['element_wrapper']['type']) ? $settings['panel']['element_wrapper']['type'] : '',
  );
  $form['panel']['element_wrapper']['class_enable'] = array(
    '#type' => 'checkbox',
    '#title' => t('Create a CSS class'),
    '#default_value' => !empty($settings['panel']['element_wrapper']['class'])
  );
  $form['panel']['element_wrapper']['class'] = array(
    '#type' => 'textfield',
    '#title' => t('CSS class(es)'),
    '#default_value' => isset($settings['panel']['element_wrapper']['class']) ? $settings['panel']['element_wrapper']['class'] : '',
    '#dependency' => array(
      'edit-layout-settings-panel-element-wrapper-class-enable' => array(TRUE),
    )
  );

  foreach ($layout['regions'] as $machine_name => $human_name){

    $form['regions'] = array(
      '#type' => 'fieldset',
      '#title' => t('Regions Settings', array('@region_name' => $human_name)),
      '#weight' => 0,
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
      '#fieldset' => 'layout_settings'
    );

    $form['regions'][$machine_name] = array(
      '#type' => 'fieldset',
      '#title' => t('@region_name Settings', array('@region_name' => $human_name)),
      '#weight' => 0,
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
      '#fieldset' => 'regions'
    );

    $form['regions'][$machine_name]['element_wrapper'] = array(
      '#type' => 'fieldset',
      '#title' => t('Wrapper settings'),
      '#weight' => 2,
      '#collapsible' => TRUE,
    );
    $form['regions'][$machine_name]['element_wrapper']['type'] = array(
      '#type' => 'select',
      '#title' => t('HTML element'),
      '#options' => $elements,
      '#default_value' => isset($settings['regions'][$machine_name]['element_wrapper']['type']) ? $settings['regions'][$machine_name]['element_wrapper']['type'] : '',
    );
    $form['regions'][$machine_name]['element_wrapper']['class_enable'] = array(
      '#type' => 'checkbox',
      '#title' => t('Create a CSS class'),
      '#default_value' => !empty($settings['regions'][$machine_name]['element_wrapper']['class'])
    );
    $form['regions'][$machine_name]['element_wrapper']['class'] = array(
      '#type' => 'textfield',
      '#title' => t('CSS class(es)'),
      '#default_value' => isset($settings['regions'][$machine_name]['element_wrapper']['class']) ? $settings['regions'][$machine_name]['element_wrapper']['class'] : '',
      '#dependency' => array(
        'edit-layout-settings-regions-' . drupal_clean_css_identifier($machine_name) . '-element-wrapper-class-enable' => array(TRUE),
      )
    );

  }

  return $form;
}

function template_preprocess_semantic_panels_layout(&$vars){

  $settings = $vars['settings'];
  $layout = $vars['layout'];

  $element_wrapper = isset($settings['panel']['element_wrapper']) ? $settings['panel']['element_wrapper'] : array('type' => '');
  $vars['panel_wrapper'] = _semantic_panels_prepare_element_settings($element_wrapper);

  if (!empty($settings['element_wrapper']['class'])){
    $vars['classes_array'][] = $settings['element_wrapper']['class'];
  }

  $vars['theme_hook_suggestions'][] = 'semantic_panels_layout_' . $vars['layout']['name'];

}