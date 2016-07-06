<?php
/**
 * @file
 * luggage_seminars.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function luggage_seminars_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'seminars';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Seminars';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Seminars';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'semester' => 'semester',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Semester (field_semester) */
  $handler->display->display_options['filters']['field_semester_tid']['id'] = 'field_semester_tid';
  $handler->display->display_options['filters']['field_semester_tid']['table'] = 'field_data_field_semester';
  $handler->display->display_options['filters']['field_semester_tid']['field'] = 'field_semester_tid';
  $handler->display->display_options['filters']['field_semester_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_semester_tid']['expose']['operator_id'] = 'field_semester_tid_op';
  $handler->display->display_options['filters']['field_semester_tid']['expose']['label'] = 'Semester';
  $handler->display->display_options['filters']['field_semester_tid']['expose']['operator'] = 'field_semester_tid_op';
  $handler->display->display_options['filters']['field_semester_tid']['expose']['identifier'] = 'field_semester_tid';
  $handler->display->display_options['filters']['field_semester_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_semester_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_semester_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_semester_tid']['vocabulary'] = 'semester';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'seminars';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Seminars';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['seminars'] = $view;

  return $export;
}
