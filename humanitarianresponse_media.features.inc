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
}

/**
 * Implements hook_views_api().
 */
function humanitarianresponse_media_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function humanitarianresponse_media_image_default_styles() {
  $styles = array();

  // Exported image style: home_slideshow
  $styles['home_slideshow'] = array(
    'name' => 'home_slideshow',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '550',
          'height' => '305',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
