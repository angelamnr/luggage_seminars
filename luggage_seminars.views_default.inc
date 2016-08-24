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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    332 => '332',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Date (node)';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['group_info']['label'] = 'Semester';
  $handler->display->display_options['filters']['date_filter']['group_info']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Fall 2014',
      'operator' => 'between',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'date',
          'value' => NULL,
          'default_date' => '',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'date',
          'min' => '2014-08-25',
          'default_date' => '',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => '2014-12-20',
          'default_to_date' => '',
        ),
      ),
    ),
    2 => array(
      'title' => 'Spring 2015',
      'operator' => 'between',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'date',
          'value' => NULL,
          'default_date' => '',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'date',
          'min' => '2015-01-12',
          'default_date' => '',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => '2015-05-09',
          'default_to_date' => '',
        ),
      ),
    ),
    3 => array(
      'title' => 'Summer 2015',
      'operator' => 'between',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'date',
          'value' => NULL,
          'default_date' => '',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'date',
          'min' => '2015-05-18',
          'default_date' => '',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => '2015-08-07',
          'default_to_date' => '',
        ),
      ),
    ),
    4 => array(
      'title' => 'Fall 2015',
      'operator' => 'between',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'date',
          'value' => NULL,
          'default_date' => '',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'date',
          'min' => '2015-08-24',
          'default_date' => '',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => '2015-12-19',
          'default_to_date' => '',
        ),
      ),
    ),
    5 => array(
      'title' => 'Spring 2016',
      'operator' => 'between',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'date',
          'value' => NULL,
          'default_date' => '',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'date',
          'min' => '2016-01-11',
          'default_date' => '',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => '2016-05-07',
          'default_to_date' => '',
        ),
      ),
    ),
    6 => array(
      'title' => 'Summer 2016',
      'operator' => 'between',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'date',
          'value' => NULL,
          'default_date' => '',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'date',
          'min' => '2016-05-16',
          'default_date' => '',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => '2016-08-05',
          'default_to_date' => '',
        ),
      ),
    ),
    7 => array(
      'title' => 'Fall 2016',
      'operator' => 'between',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'date',
          'value' => NULL,
          'default_date' => '',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'date',
          'min' => '2016-08-22',
          'default_date' => '',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => '2016-12-16',
          'default_to_date' => '',
        ),
      ),
    ),
    8 => array(
      'title' => 'Spring 2017',
      'operator' => 'between',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'date',
          'value' => NULL,
          'default_date' => '',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'date',
          'min' => '2017-01-09',
          'default_date' => '',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => '2017-05-05',
          'default_to_date' => '',
        ),
      ),
    ),
    9 => array(
      'title' => 'Summer 2017',
      'operator' => 'between',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'date',
          'value' => NULL,
          'default_date' => '',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'date',
          'min' => '2017-05-15',
          'default_date' => '',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => '2017-08-04',
          'default_to_date' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_event_when.field_event_when_value' => 'field_data_field_event_when.field_event_when_value',
    'field_data_field_event_when.field_event_when_value2' => 'field_data_field_event_when.field_event_when_value2',
  );
  $handler->display->display_options['filters']['date_filter']['date_method'] = 'AND';

  /* Display: Seminars */
  $handler = $view->new_display('page', 'Seminars', 'seminars');
  $handler->display->display_options['path'] = 'seminars';
  $export['seminars'] = $view;

  return $export;
}
