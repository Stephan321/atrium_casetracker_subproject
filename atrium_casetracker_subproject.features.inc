<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_casetracker_subproject_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function atrium_casetracker_subproject_node_info() {
  $items = array(
    'casetracker_subproject' => array(
      'name' => t('Subproject'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
