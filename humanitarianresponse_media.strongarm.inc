<?php
/**
 * @file
 * humanitarianresponse_media.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function humanitarianresponse_media_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_media_gallery_pattern';
  $strongarm->value = 'media/galleries/[node:title]';
  $export['pathauto_node_media_gallery_pattern'] = $strongarm;

  return $export;
}
