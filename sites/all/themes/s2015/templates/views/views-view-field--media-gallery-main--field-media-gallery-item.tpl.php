<?php

/**
* Template for "Media Gallery" field collection item output
*/

if (isset($row->field_field_media_gallery_item[0]['rendered']['entity']['field_collection_item'])):
  foreach ($row->field_field_media_gallery_item[0]['rendered']['entity']['field_collection_item'] as $media_item) {
    $caption = isset($media_item['field_media_caption']['#items'][0]['value']) ? $media_item['field_media_caption']['#items'][0]['value'] : '';
    $media_type = isset($media_item['field_media_asset']['#items'][0]['type']) ? $media_item['field_media_asset']['#items'][0]['type'] : '';
    if ($media_type === 'image') {
      $image = array(
        'style_name' => 'media_gallery_lg',
        'path' => isset($media_item['field_media_asset']['#items'][0]['uri']) ? $media_item['field_media_asset']['#items'][0]['uri'] : '',
        'alt' => isset($media_item['field_media_asset']['#items'][0]['alt']) ? $media_item['field_media_asset']['#items'][0]['alt'] : '',
        'title' => isset($media_item['field_media_asset']['#items'][0]['title']) ? $media_item['field_media_asset']['#items'][0]['title'] : '',
        'attributes' => array(
          'class' => array('gallery-image'),
        ),
      );
      $media_asset = theme('image_style', $image);
    } elseif ($media_type === 'video') {
      $video = isset($media_item['field_media_asset']['#items'][0]['uri']) ? drupal_realpath($media_item['field_media_asset']['#items'][0]['uri']) : '';
      $start_time = isset($media_item['field_media_start_time']['#items'][0]['value']) ? '&start='. $media_item['field_media_start_time']['#items'][0]['value'] : '';
      $url = $video.$start_time;
      $embed_url = str_replace('&start', '?start', str_replace('watch?v=', 'embed/', $url));
      $media_asset = '<iframe width="570" height="363" src="'.$embed_url.'" frameborder="0" allowfullscreen></iframe>';
    } else {
      $media_asset = '';
    }
  }
  ?>

  <article class="media-gallery-main">
    <div class="gallery-media"><?php print $media_asset; ?></div>
    <?php if (!empty($caption)): ?>
      <div class="gallery-caption"><?php print $caption; ?></div>
    <?php endif; ?>
  </article>

<?php endif; ?>
