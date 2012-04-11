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

  $view = new view;
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
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['style_options']['fill_single_line'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Gallery media (media_gallery_media:fid) */
  $handler->display->display_options['relationships']['media_gallery_media_fid']['id'] = 'media_gallery_media_fid';
  $handler->display->display_options['relationships']['media_gallery_media_fid']['table'] = 'field_data_media_gallery_media';
  $handler->display->display_options['relationships']['media_gallery_media_fid']['field'] = 'media_gallery_media_fid';
  $handler->display->display_options['relationships']['media_gallery_media_fid']['required'] = 0;
  /* Field: Content: Gallery media */
  $handler->display->display_options['fields']['media_gallery_media']['id'] = 'media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['table'] = 'field_data_media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['field'] = 'media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['label'] = '';
  $handler->display->display_options['fields']['media_gallery_media']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['external'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['html'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['media_gallery_media']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['media_gallery_media']['hide_empty'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['empty_zero'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['media_gallery_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['media_gallery_media']['type'] = 'media';
  $handler->display->display_options['fields']['media_gallery_media']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  $handler->display->display_options['fields']['media_gallery_media']['group_rows'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['delta_offset'] = '0';
  $handler->display->display_options['fields']['media_gallery_media']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['field_api_classes'] = 0;
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
  $handler->display->display_options['filters']['filemime']['expose']['required'] = 0;
  $handler->display->display_options['filters']['filemime']['expose']['multiple'] = FALSE;

  /* Display: Home block */
  $handler = $view->new_display('panel_pane', 'Home block', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Photos & Videos';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'media/galleries';
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
  $handler->display->display_options['fields']['media_gallery_media']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['external'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['html'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['media_gallery_media']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['media_gallery_media']['hide_empty'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['empty_zero'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['media_gallery_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['media_gallery_media']['type'] = 'media';
  $handler->display->display_options['fields']['media_gallery_media']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  $handler->display->display_options['fields']['media_gallery_media']['group_rows'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['delta_offset'] = '0';
  $handler->display->display_options['fields']['media_gallery_media']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['pane_category']['name'] = 'Media panes';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Slideshow */
  $handler = $view->new_display('panel_pane', 'Slideshow', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Home page';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'media_gallery_media' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'media_gallery_media' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery media */
  $handler->display->display_options['fields']['media_gallery_media']['id'] = 'media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['table'] = 'field_data_media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['field'] = 'media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['label'] = '';
  $handler->display->display_options['fields']['media_gallery_media']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['external'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['html'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['media_gallery_media']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['media_gallery_media']['hide_empty'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['empty_zero'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['media_gallery_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['media_gallery_media']['type'] = 'media';
  $handler->display->display_options['fields']['media_gallery_media']['settings'] = array(
    'file_view_mode' => 'media_home_slideshow',
  );
  $handler->display->display_options['fields']['media_gallery_media']['group_rows'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['delta_offset'] = '0';
  $handler->display->display_options['fields']['media_gallery_media']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['pane_category']['name'] = 'Media panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['media'] = $view;

  return $export;
}
