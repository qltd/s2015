<?php

function s2015_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_block_form') {
    $form['actions']['submit']['#value'] = decode_entities('&#xf002;'); // Change the text on the submit button
  }
}
