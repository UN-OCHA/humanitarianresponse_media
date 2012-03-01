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

  $file_display = new stdClass;
  $file_display->api_version = 1;
  $file_display->name = 'image__media_home_slideshow__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_home_slideshow__file_field_file_default'] = $file_display;

  $file_display = new stdClass;
  $file_display->api_version = 1;
  $file_display->name = 'image__media_home_slideshow__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_home_slideshow__file_field_file_table'] = $file_display;

  $file_display = new stdClass;
  $file_display->api_version = 1;
  $file_display->name = 'image__media_home_slideshow__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_home_slideshow__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass;
  $file_display->api_version = 1;
  $file_display->name = 'image__media_home_slideshow__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_home_slideshow__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass;
  $file_display->api_version = 1;
  $file_display->name = 'image__media_home_slideshow__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'home_slideshow',
  );
  $export['image__media_home_slideshow__file_image'] = $file_display;

  $file_display = new stdClass;
  $file_display->api_version = 1;
  $file_display->name = 'video__media_home_slideshow__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_home_slideshow__file_field_file_default'] = $file_display;

  $file_display = new stdClass;
  $file_display->api_version = 1;
  $file_display->name = 'video__media_home_slideshow__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_home_slideshow__file_field_file_table'] = $file_display;

  $file_display = new stdClass;
  $file_display->api_version = 1;
  $file_display->name = 'video__media_home_slideshow__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_home_slideshow__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass;
  $file_display->api_version = 1;
  $file_display->name = 'video__media_home_slideshow__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_home_slideshow__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass;
  $file_display->api_version = 1;
  $file_display->name = 'video__media_home_slideshow__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => 'home_slideshow',
  );
  $export['video__media_home_slideshow__file_image'] = $file_display;

  $file_display = new stdClass;
  $file_display->api_version = 1;
  $file_display->name = 'video__media_home_slideshow__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'home_slideshow',
  );
  $export['video__media_home_slideshow__media_youtube_image'] = $file_display;

  $file_display = new stdClass;
  $file_display->api_version = 1;
  $file_display->name = 'video__media_home_slideshow__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'version' => '3',
    'theme' => 'dark',
    'width' => '560',
    'height' => '340',
    'fullscreen' => 1,
    'autoplay' => 0,
    'related' => 1,
    'hd' => 0,
    'showsearch' => 1,
    'modestbranding' => 0,
    'showinfo' => 1,
    'chromeless' => 0,
  );
  $export['video__media_home_slideshow__media_youtube_video'] = $file_display;

  return $export;
}
