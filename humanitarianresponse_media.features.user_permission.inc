<?php
/**
 * @file
 * humanitarianresponse_media.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: add media from remote sources
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: administer lightbox2
  $permissions['administer lightbox2'] = array(
    'name' => 'administer lightbox2',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: administer media galleries
  $permissions['administer media galleries'] = array(
    'name' => 'administer media galleries',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'media_gallery',
  );

  // Exported permission: create media_gallery content
  $permissions['create media_gallery content'] = array(
    'name' => 'create media_gallery content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own media_gallery content
  $permissions['delete own media_gallery content'] = array(
    'name' => 'delete own media_gallery content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: download original image
  $permissions['download original image'] = array(
    'name' => 'download original image',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'manager',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: edit own media_gallery content
  $permissions['edit own media_gallery content'] = array(
    'name' => 'edit own media_gallery content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
