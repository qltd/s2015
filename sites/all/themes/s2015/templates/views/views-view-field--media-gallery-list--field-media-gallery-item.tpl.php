<?php

/**
 * Template for "Media Gallery" field collection item output
 */

if (isset($row->field_field_media_gallery_item[0]['rendered']['entity']['field_collection_item'])):
  foreach ($row->field_field_media_gallery_item[0]['rendered']['entity']['field_collection_item'] as $media_item) {
    $title = isset($media_item['field_media_title']['#items'][0]['value']) ? $media_item['field_media_title']['#items'][0]['value'] : '';
    $caption = isset($media_item['field_media_caption']['#items'][0]['value']) ? $media_item['field_media_caption']['#items'][0]['value'] : '';
    $media_type = isset($media_item['field_media_asset']['#items'][0]['type']) ? $media_item['field_media_asset']['#items'][0]['type'] : '';
    if ($media_type === 'image') {
      $image = array(
         'style_name' => 'media_gallery_lg',
         'path' => isset($media_item['field_media_asset']['#items'][0]['uri']) ? $media_item['field_media_asset']['#items'][0]['uri'] : '',
         'alt' => isset($media_item['field_media_asset']['#items'][0]['alt']) ? $media_item['field_media_asset']['#items'][0]['alt'] : '',
         'title' => isset($media_item['field_media_asset']['#items'][0]['title']) ? $media_item['field_media_asset']['#items'][0]['title'] : '',
         'attributes' => array(
           'class' => array('media-gallery-lg-image'),
         ),
      );
      $media_asset = theme('image_style', $image);
    } elseif ($media_type === 'video') {
      $video = isset($media_item['field_media_asset']['#items'][0]['uri']) ? drupal_realpath($media_item['field_media_asset']['#items'][0]['uri']) : '';
      $start_time = isset($media_item['field_media_start_time']['#items'][0]['value']) ? '&start='. $media_item['field_media_start_time']['#items'][0]['value'] : '';
      $media_asset = '<a class="fa button-play-video" href="'.$video.$start_time.'" role="button" target="_blank">Play Video</a>';
    } else {
      $media_asset = '';
    }
  }
?>

<article class="media-gallery-list-item">
  <div class="gallery-media"><?php print $media_asset; ?></div>
  <div class="gallery-caption"><?php print $caption; ?></div>
</article>

<?php endif; ?>
