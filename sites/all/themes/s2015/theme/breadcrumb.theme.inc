<?php

function s2015_breadcrumb ($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    // Remove column labels that do not contain links from breadcrumbs
    foreach ($breadcrumb as $key => $crumb) {
      if (strpos($crumb, 'nolink') !== FALSE) {
        unset($breadcrumb[$key]);
      }
    }

    //Here we are adding in breadcrumb items which are not present in event details pages and should be
    //total hack. 
    $current_path = drupal_get_path_alias(current_path());
    $path_elements = explode('/',$current_path);
    if(!empty($path_elements) && count($path_elements) > 2 && count($path_elements) > count($breadcrumb)){
        if($path_elements[0] == 'attendees'){
            //this should only happen in the for attendees section 
            $breadcrumb[1] = '<a class="for-attendees" href="/attendees">For Attendees</a>';
            if($path_elements[1] == 'computer-animation-festival-production-sessions'){
                $path_elements[1] = 'production-sessions';
            }
            $breadcrumb[2] = '<a href="/attendees/'.$path_elements[1].'">'.str_replace('-',' ',ucname($path_elements[1])).'</a>';
        } 
    }

    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $delimiter = ' <span class="breadcrumb-delimiter">//</span> ';
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    $output .= '<div class="breadcrumb">' . implode($delimiter, $breadcrumb) . $delimiter . l(html_entity_decode(strip_tags(drupal_get_title())), current_path()) . '</div>';
    return $output;
  } else {
    $output = '<div class="breadcrumb empty-breadcrumb">&nbsp;</div>';
    return $output;
  }
}

function ucname($string) {
    $string =ucwords(strtolower($string));

    foreach (array('-', '\'') as $delimiter) {
        if (strpos($string, $delimiter)!==false) {
            $string =implode($delimiter, array_map('ucfirst', explode($delimiter, $string)));
        }
    }
    return $string;
}
