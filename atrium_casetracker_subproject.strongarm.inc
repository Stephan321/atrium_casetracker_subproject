<?php

/**
 * Implementation of hook_strongarm().
 */
function atrium_casetracker_subproject_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'casetracker_project_node_types';
  $strongarm->value = array(
    'casetracker_basic_project' => 'casetracker_basic_project',
    'casetracker_subproject' => 'casetracker_subproject',
    'blog' => 0,
    'book' => 0,
    'event' => 0,
    'group' => 0,
    'invoice' => 0,
    'password' => 0,
    'profile' => 0,
    'shoutbox' => 0,
    'feed_ical_item' => 0,
    'feed_ical' => 0,
  );
  $export['casetracker_project_node_types'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_casetracker_subproject';
  $strongarm->value = 0;
  $export['comment_anonymous_casetracker_subproject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_casetracker_subproject';
  $strongarm->value = '2';
  $export['comment_casetracker_subproject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_casetracker_subproject';
  $strongarm->value = '3';
  $export['comment_controls_casetracker_subproject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_casetracker_subproject';
  $strongarm->value = '4';
  $export['comment_default_mode_casetracker_subproject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_casetracker_subproject';
  $strongarm->value = '1';
  $export['comment_default_order_casetracker_subproject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_casetracker_subproject';
  $strongarm->value = '50';
  $export['comment_default_per_page_casetracker_subproject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_casetracker_subproject';
  $strongarm->value = '0';
  $export['comment_form_location_casetracker_subproject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_casetracker_subproject';
  $strongarm->value = '1';
  $export['comment_preview_casetracker_subproject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_casetracker_subproject';
  $strongarm->value = '1';
  $export['comment_subject_field_casetracker_subproject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_casetracker_subproject';
  $strongarm->value = array(
    'og_nodeapi' => '-1',
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '1',
    'author' => '2',
    'options' => '3',
    'comment_settings' => '4',
    'menu' => '-3',
    'book' => '0',
    'attachments' => '5',
  );
  $export['content_extra_weights_casetracker_subproject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_casetracker_subproject';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_casetracker_subproject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_casetracker_subproject';
  $strongarm->value = '1';
  $export['upload_casetracker_subproject'] = $strongarm;

  return $export;
}
