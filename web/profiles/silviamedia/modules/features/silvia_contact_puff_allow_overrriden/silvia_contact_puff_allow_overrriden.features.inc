<?php
/**
 * @file
 * silvia_contact_puff_allow_overrriden.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function silvia_contact_puff_allow_overrriden_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
