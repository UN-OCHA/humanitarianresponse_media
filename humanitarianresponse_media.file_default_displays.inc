<?php
/**
 * @file
 * humanitarianresponse_media.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function humanitarianresponse_media_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
    'alt' => '[file:field_file_image_alt_text]',
    'title' => '[file:field_file_image_title_text]',
  );
  $export['image__colorbox__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_picture';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'picture_group' => 'grid_4_with_margin',
    'fallback_image_style' => 'grid_4_mobile',
    'alt' => '',
    'title' => '',
  );
  $export['image__teaser__file_picture'] = $file_display;

  return $export;
}
