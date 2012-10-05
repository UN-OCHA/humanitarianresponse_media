<?php
/**
 * @file
 * humanitarianresponse_media.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function humanitarianresponse_media_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'media';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Media';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_column_class';
  $handler->display->display_options['style_options']['row_class'] = 'grid-4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Gallery media (media_gallery_media:fid) */
  $handler->display->display_options['relationships']['media_gallery_media_fid']['id'] = 'media_gallery_media_fid';
  $handler->display->display_options['relationships']['media_gallery_media_fid']['table'] = 'field_data_media_gallery_media';
  $handler->display->display_options['relationships']['media_gallery_media_fid']['field'] = 'media_gallery_media_fid';
  /* Field: Content: Gallery media */
  $handler->display->display_options['fields']['media_gallery_media']['id'] = 'media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['table'] = 'field_data_media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['field'] = 'media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['label'] = '';
  $handler->display->display_options['fields']['media_gallery_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['media_gallery_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['media_gallery_media']['type'] = 'media';
  $handler->display->display_options['fields']['media_gallery_media']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  $handler->display->display_options['fields']['media_gallery_media']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['media_gallery_media']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'media_gallery' => 'media_gallery',
  );
  /* Filter criterion: File: Mime type */
  $handler->display->display_options['filters']['filemime']['id'] = 'filemime';
  $handler->display->display_options['filters']['filemime']['table'] = 'file_managed';
  $handler->display->display_options['filters']['filemime']['field'] = 'filemime';
  $handler->display->display_options['filters']['filemime']['relationship'] = 'media_gallery_media_fid';
  $handler->display->display_options['filters']['filemime']['operator'] = 'contains';
  $handler->display->display_options['filters']['filemime']['value'] = 'image';
  $handler->display->display_options['filters']['filemime']['expose']['operator_id'] = 'filemime_op';
  $handler->display->display_options['filters']['filemime']['expose']['label'] = 'Mime type';
  $handler->display->display_options['filters']['filemime']['expose']['operator'] = 'filemime_op';
  $handler->display->display_options['filters']['filemime']['expose']['identifier'] = 'filemime';

  /* Display: Home block */
  $handler = $view->new_display('block', 'Home block', 'media_home_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Photos & Videos';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'media-center/galleries';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery media */
  $handler->display->display_options['fields']['media_gallery_media']['id'] = 'media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['table'] = 'field_data_media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['field'] = 'media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['label'] = '';
  $handler->display->display_options['fields']['media_gallery_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['media_gallery_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['media_gallery_media']['type'] = 'media';
  $handler->display->display_options['fields']['media_gallery_media']['settings'] = array(
    'file_view_mode' => 'media_responsive_grid_4',
  );
  $handler->display->display_options['fields']['media_gallery_media']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['media_gallery_media']['delta_offset'] = '0';
  $handler->display->display_options['block_description'] = 'Home Photos & Videos';
  $translatables['media'] = array(
    t('Master'),
    t('View all'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('file from media_gallery_media'),
    t('Mime type'),
    t('Home block'),
    t('Photos & Videos'),
    t('more'),
    t('Home Photos & Videos'),
  );
  $export['media'] = $view;

  return $export;
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
