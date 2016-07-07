<?php
/**
 * @file
 * luggage_seminars.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function luggage_seminars_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_seminar_series';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_seminar_series'] = $strongarm;

  return $export;
}
