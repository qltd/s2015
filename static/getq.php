<?php

header('Content-Type:text/xml;charset=utf-8');

$result = file_get_contents("http://sis.siggraph.org/cgi-bin/procform?sessiontype=".@$_GET['type']."&date=".@$_GET['date']."&sortby=".@$_GET['sort']."&preparsed=1&command=pack&formname=sessions&conferenceid=109");
$new_results = str_replace(" (at) ", "@", $result);
$new_results = str_replace("<eventImageThumbnail>", "<eventImageThumbnail>http://sis.siggraph.org/OPAL/Themes/SIS/2015/src/downloads-perm/", $new_results);
$new_results = str_replace('<eventImage name="publicimage">', '<eventImage>http://sis.siggraph.org/OPAL/Themes/SIS/2015/src/downloads-perm/', $new_results);
echo $new_results;

/* This function is has not been called in recent versions of this script, but we will keep it just in case we would like to use it

function convert_smart_quotes($string) {
  $search = array(chr(145),
          chr(146),
          chr(228),
          chr(252),
          chr(231),
          chr(147),
          chr(148),
          chr(233),
          chr(244),
          chr(225),
          chr(8212),
          chr(8211),
          chr(150),
          chr(214),
          chr(149),
          chr(246),
          chr(183),
          chr(243),
          chr(174),
          chr(241),
          chr(232),
          chr(151));

  $replace = array("'",
          "'",
          '&#228;',
          '&#252;',
          '&#231;',
          '"',
          '"',
          '&#233;',
          '&#244;',
          '&#225;',
          '&#8212;',
          '&#8211;',
          '&#150;',
          '&#214;',
          '&#183;',
          '&#246;',
          '&#183;',
          '&#243;',
          '&#174;',
          '&#241;',
          '&#232;',
          '-');

    return str_replace($search, $replace, $string);
}*/

?>
