<?php

function silviamedia_panels_default_style_render_region($vars) {
  $output = '';
//  $output .= '<div class="region region-' . $vars['region_id'] . '">';
  //we do not need panel-separator
  $output .= implode($vars['panes']);
//  $output .= '</div>';
  return $output;
}


function silviamedia_preprocess_panels_pane(&$vars){

  if (isset($vars['pane']->type) && $vars['pane']->type == 'page_content'){

    // Load node from arg()
    if (arg(0) == 'node' && is_numeric(arg(1))){
      $node = node_load(arg(1));

      //Make sure we are dealing with a node of type 'case'.
      if ($node->type == 'case'){

        // add class to pane if tags exis for case node
        if (!empty($node->field_case_tags)){
          $vars['classes_array'][] = 'case-tag-exist';
        }
      }
    }
  }
}

function silviamedia_aggregator_block_item($variables) {
  // Add extra markup to the feed item-
  return '<p><a href="' . check_url($variables['item']->link) . '">Facebook:  ' . check_plain($variables['item']->title) . "</a></p>\n";
}
