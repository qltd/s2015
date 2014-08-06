<?php

/**
 * Template for "Small Billboards" field collection item output
 */

if (isset($row->field_field_billboards[0]['rendered']['entity']['field_collection_item'])):
  foreach ($row->field_field_billboards[0]['rendered']['entity']['field_collection_item'] as $billboard) {
    $title = isset($billboard['field_billboard_title']['#items'][0]['value']) ? $billboard['field_billboard_title']['#items'][0]['value'] : '';
    $body = isset($billboard['field_billboard_body']['#items'][0]['value']) ? $billboard['field_billboard_body']['#items'][0]['value'] : '';
    $image = array(
      'style_name' => 'medium_cropped',
      'path' => isset($billboard['field_image']['#items'][0]['uri']) ? $billboard['field_image']['#items'][0]['uri'] : '',
      'alt' => isset($billboard['field_image']['#items'][0]['alt']) ? $billboard['field_image']['#items'][0]['alt'] : '',
      'title' => isset($billboard['field_image']['#items'][0]['title']) ? $billboard['field_image']['#items'][0]['title'] : '',
      'attributes' => array(
        'class' => array('billboard-small-image'),
      ),
    );
    $link = array(
      'attributes' => array(
        'target' => isset($billboard['field_billboard_link']['#items'][0]['attributes']['target']) ? $billboard['field_billboard_link']['#items'][0]['attributes']['target'] : '',
      ),
      'path' => isset($billboard['field_billboard_link']['#items'][0]['url']) ? $billboard['field_billboard_link']['#items'][0]['url'] : '',
    );
  }
?>

<div class="billboard-small-container">
  <a class="billboard-small-link" href="<?php print $link['path']; ?>"<?php if (!empty($link['attributes']['target'])) print ' target="' . $link['attributes']['target'] . '"'; ?>>
    <?php if (!empty($image['path'])) print theme('image_style', $image); ?>
    <div class="billboard-small-shelf">
      <h3 class="billboard-small-title"><?php print $title; ?></h3>
      <div class="billboard-small-body"><?php print $body; ?></div>
    </div>
  </a>
</div>

<?php endif; ?>
