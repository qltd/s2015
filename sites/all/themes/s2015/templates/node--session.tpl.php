<article<?php print $attributes; ?>>
  <header class="session-info sessions-events">
    <?php
    // vars
    $location = '';
    $venue = '';
    if (isset($node->field_time['und'][0]['value']) && isset($node->field_time['und'][0]['value2'])) {
      $startTime = date('l, j F g:i A', strtotime($node->field_time['und'][0]['value']));
      $endTime = date('g:i A', strtotime($node->field_time['und'][0]['value2']));
    }
    if (isset($node->field_session_chair['und'][0]['safe_value'])) {
      $sessionChair = $node->field_session_chair['und'][0]['safe_value'];
    }
    if (isset($node->field_location['und'][0]['safe_value'])) {
      $location = ' | ' . $node->field_location['und'][0]['safe_value'];
    }
    if (isset($node->field_venue['und'][0]['safe_value'])) {
      $venue = ', '. $node->field_venue['und'][0]['safe_value'];
    }
    if (isset($node->field_event_type_name['und'][0]['tid'])) {
      $eventTid = $node->field_event_type_name['und'][0]['tid'];
      $taxonomy_term = taxonomy_term_load($eventTid);
      $term_name = str_replace('- ', '', $taxonomy_term->name);
    }

    if (isset($term_name)) {
    ?>
      <h1 class="event_type title"><?php echo $term_name; ?></h1>
      <h2<?php echo $title_attributes; ?>><?php echo $title; ?></h2>
    <?php
    } else {
    ?>
      <h1<?php echo $title_attributes; ?>><?php echo $title ?></h2>
    <?php
    }
    ?>

    <p>
      <?php
        if (isset($startTime) && isset($endTime)) {
      ?>
        <span class="date-location">
          <span class="session-date"><?php echo $startTime . ' - ' . $endTime; ?></span><?php echo $location . $venue; ?>
        </span>
      <?php 
        }
      ?>
      <?php
        if (isset($sessionChair)) {
      ?>
        <span class="session-chair"><span class="label">Session Chair:</span> <?php echo $sessionChair; ?></span>
      <?php 
        }
      ?>
    </p>
  </header>
  
  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>
  
</article>
<div class="pre-hr-space"></div>
<hr />
