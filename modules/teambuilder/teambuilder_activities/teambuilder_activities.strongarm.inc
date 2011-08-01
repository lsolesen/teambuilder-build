<?php

/**
 * Implementation of hook_strongarm().
 */
function teambuilder_activities_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_nodetype_activity';
  $strongarm->value = 1;

  $export['addthis_nodetype_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_activity';
  $strongarm->value = '2';

  $export['comment_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_activity';
  $strongarm->value = 0;

  $export['comment_anonymous_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_activity';
  $strongarm->value = '3';

  $export['comment_controls_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_activity';
  $strongarm->value = '4';

  $export['comment_default_mode_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_activity';
  $strongarm->value = '1';

  $export['comment_default_order_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_activity';
  $strongarm->value = '50';

  $export['comment_default_per_page_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_activity';
  $strongarm->value = '0';

  $export['comment_form_location_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_activity';
  $strongarm->value = '1';

  $export['comment_preview_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_activity';
  $strongarm->value = '1';

  $export['comment_subject_field_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_activity';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'menu' => '-4',
    'taxonomy' => '-3',
    'book' => '11',
  );

  $export['content_extra_weights_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_activity';
  $strongarm->value = '0';

  $export['language_content_type_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_activity';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_nodetype_desc_php_activity';
  $strongarm->value = '';

  $export['nodewords_nodetype_desc_php_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_nodetype_description_activity';
  $strongarm->value = '';

  $export['nodewords_nodetype_description_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_nodetype_keywords_activity';
  $strongarm->value = '';

  $export['nodewords_nodetype_keywords_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_nodetype_robots_activity';
  $strongarm->value = '';

  $export['nodewords_nodetype_robots_activity'] = $strongarm;
  return $export;
}
