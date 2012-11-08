<?php
/**
 * @file
 * humanitarianresponse_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_media_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function humanitarianresponse_media_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_views_default_views_alter().
 */
function humanitarianresponse_media_views_default_views_alter(&$views) {
  if (isset($views['media_galleries'])) {
    $views['media_galleries']->set_display('page');
    $views['media_galleries']->display_handler->set_option('path', 'media-center/galleries');
  }
}
