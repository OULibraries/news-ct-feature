<?php
/**
 * @file
 * news_ct_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function news_ct_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function news_ct_feature_node_info() {
  $items = array(
    'announcement' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Use <i>news</i> to add a time-sensitive item to the news and events page.'),
      'has_title' => '1',
      'title_label' => t('NewsTitle'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
