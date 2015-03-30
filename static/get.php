<?php
	header('Content-Type:text/xml;charset=utf-8');
	$xml = curl_init();
	curl_setopt($xml, CURLOPT_URL, "http://sis.siggraph.org/cgi-bin/procform?sessiontype=".$_GET['type']."&date=".$_GET['date']."&sortby=".$_GET['sort']."&preparsed=1&command=pack&formname=sessions&conferenceid=106");
	curl_setopt($xml, CURLOPT_USERAGENT, 'Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.1; SV1)');
	curl_setopt($xml, CURLOPT_RETURNTRANSFER, 1);
	curl_setopt($xml, CURLOPT_FOLLOWLOCATION, 1);
	$result = curl_exec($xml);
	curl_close($xml);
	$new_results = str_replace(" (at) ", "@", $result);
	$new_results = str_replace("<eventImageThumbnail>", "<eventImageThumbnail>http://sis.siggraph.org/OPAL/Themes/SIS/2013/src/downloads-perm/", $new_results);
	$new_results = str_replace('<eventImage name="publicimage">', '<eventImage>http://sis.siggraph.org/OPAL/Themes/SIS/2013/src/downloads-perm/', $new_results);
	echo $new_results;

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
//					chr(169),
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
}

?>
