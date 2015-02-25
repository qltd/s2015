<?php
/**
 * @file
 * navigation_region.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function navigation_region_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = '"For Attendees" content block for primary navigation.';
  $fe_block_boxes->format = 'raw_html';
  $fe_block_boxes->machine_name = 'navigation_attendees';
  $fe_block_boxes->body = '<ul class="primary-navigation-content-list">
  <li class="primary-navigation-content-list-item">
    <a class="primary-navigation-content-link" href="/attendees">
      <i class="fa fa-eye"></i>
      <h2 class="primary-navigation-content-title">Conference Overview</h2>
      <p class="primary-navigation-content-paragraph">Explore the wealth of information, resources, and events available at this year\'s annual conference.</p>
    </a>
  </li>
</ul>
';

  $export['navigation_attendees'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = '"For Exhibitors..." content block for primary navigation.';
  $fe_block_boxes->format = 'event';
  $fe_block_boxes->machine_name = 'navigation_exhibitors';
  $fe_block_boxes->body = '<p class="primary-navigation-content-paragraph"><img alt="For Exhibitors & Advertisers" class="primary-navigation-content-image" src="/sites/all/themes/s2015/images/navigation/exhibitors_drop.jpg" /></p>
';

  $export['navigation_exhibitors'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = '"For the Media" content block for primary navigation.';
  $fe_block_boxes->format = 'event';
  $fe_block_boxes->machine_name = 'navigation_media';
  $fe_block_boxes->body = '<p class="primary-navigation-content-paragraph"><img alt="For the Media" class="primary-navigation-content-image" src="/sites/all/themes/s2015/images/navigation/media_drop.jpg" /></p>

';

  $export['navigation_media'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = '"For Submitters" content block for primary navigation.';
  $fe_block_boxes->format = 'raw_html';
  $fe_block_boxes->machine_name = 'navigation_submitters';
  $fe_block_boxes->body = '<ul class="primary-navigation-content-list">
  <li class="primary-navigation-content-list-item">
    <a class="primary-navigation-content-link" href="/submitters">
      <i class="fa fa-comment-o"></i>
      <h2 class="primary-navigation-content-title">SIGGRAPH 2015</h2>
      <p class="primary-navigation-content-paragraph">An important message from SIGGRAPH 2015 Conference Chair Marc J. Barr.</p>
    </a>
  </li>
  <li class="primary-navigation-content-list-item">
    <a class="primary-navigation-content-link" href="/important-dates">
      <i class="fa fa-bell-o"></i>
      <h2 class="primary-navigation-content-title">Important Dates</h2>
      <p class="primary-navigation-content-paragraph">Submission deadlines for all SIGGRAPH 2015 programs.</p>
    </a>
  </li>
</ul>
';

  $export['navigation_submitters'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = '"For Volunteers" content block for primary navigation.';
  $fe_block_boxes->format = 'event';
  $fe_block_boxes->machine_name = 'navigation_volunteers';
  $fe_block_boxes->body = '<p class="primary-navigation-content-paragraph"><img alt="For Volunteers" class="primary-navigation-content-image" src="/sites/all/themes/s2015/images/navigation/volunteers_drop.jpg" /></p>
';

  $export['navigation_volunteers'] = $fe_block_boxes;

  return $export;
}
