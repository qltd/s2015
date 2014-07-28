<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * s2015 theme.
 */

function s2015_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_block_form') {
    $form['actions']['submit']['#value'] = decode_entities('&#xf002;'); // Change the text on the submit button

    // Alternative (HTML5) placeholder attribute instead of using the javascript
    $form['search_block_form']['#attributes']['placeholder'] = t('Type Keyword');
  }
}
