<?php
/**
 * @file
 * interior_pages.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function interior_pages_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Exhibiting at SIGGRAPH 2015';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'exhibiting_at_siggraph';
  $fe_block_boxes->body = '<h4>Exhibit at<br />
SIGGRAPH 2015</h4>

<p>Take your place among the leading companies in the computer graphics industry.</p>

<p><a href="/contact-us?category=exhibits@siggraph.org">SIGGRAPH 2015 Exhibition Management</a><br />
Hall-Erickson, Inc.<br />
98 East Chicago Avenue<br />
Westmont, Illinois 60559 USA<br />
+1.630.434.7779<br />
+1.630.434.1216 fax</p>
';

  $export['exhibiting_at_siggraph'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Lend Your Support page content block.';
  $fe_block_boxes->format = 'raw_html';
  $fe_block_boxes->machine_name = 'lend_your_support';
  $fe_block_boxes->body = '<div class="lend-your-support-wrapper">
	<div class="support-incentive-container first"><i class="fa fa-users fa-2x"></i>Garner recognition in support of the conference and its student volunteers.</div>
	<div class="support-incentive-container"><i class="fa fa-eye fa-2x"></i>Gain additional exposure to SIGGRAPH 2015&rsquo;s broad audience.</div>
	<div class="support-incentive-container last"><i class="fa fa-random fa-2x"></i>Co-brand with the premiere international conference on computer graphics and interactive techniques.</div>
	<h3 class="support-sub-title">All organizations that support SIGGRAPH 2015 will receive recognition:</h3>
	<ul class="support-incentive-list">
		<li>On the <strong>SIGGRAPH 2015 web site,</strong> visited by more that 100,000 industry professionals.</li>
		<li>On <strong>promotional banners</strong> in prominent locations in the Los Angeles Convention Center.</li>
		<li>Within various conference venues with <strong>standard-size signs</strong> highlighting the use of their equipment and/or services.</li>
		<li>In a <strong>thank-you letter</strong> from the SIGGRAPH 2015 Conference Chair following the conference and exhibition.</li>
	</ul>
	<hr />
	<h3 class="support-sub-title">Donations values at $10,000 or more will be recognized as sponsors at the following levels:</h3>
	<div class="support-recognition-container">
		<div class="support-recognition-level platinum"><i class="fa fa-certificate fa-2x"></i>
			<p><span class="recognition-level-text">PLATINUM</span> SPONSORSHIP <span class="recognition-amount-text">$50,000</span> or more in value</p>
		</div>
		<ul class="support-recognition-list">
			<li>10 Full Conference registrations</li>
			<li>Logo on the SIGGRAPH 2015 home page</li>
			<li>1 convention center banner location</li>
			<li>One-time use of the SIGGRAPH 2015 attendee list</li>
			<li>Free insert in the merchandise bag</li>
			<li>Social media promotion</li>
		</ul>
	</div>
	<div class="support-recognition-container">
		<div class="support-recognition-level gold"><i class="fa fa-certificate fa-2x"></i>
			<p><span class="recognition-level-text">GOLD</span> SPONSORSHIP <span class="recognition-amount-text">$25,000</span> or more in value</p>
		</div>
		<ul class="support-recognition-list">
			<li>6 Full Conference registrations</li>
			<li>Name on the SIGGRAPH 2015 home page</li>
			<li>1 convention center banner location</li>
			<li>One-time use of the SIGGRAPH 2015 attendee list</li>
			<li>Free insert in the merchandise bag</li>
			<li>Social media promotion</li>
		</ul>
	</div>
	<div class="support-recognition-container">
		<div class="support-recognition-level silver"><i class="fa fa-certificate fa-2x"></i>
			<p><span class="recognition-level-text">SILVER</span> SPONSORSHIP <span class="recognition-amount-text">$15,000</span> or more in value</p>
		</div>
		<ul class="support-recognition-list">
			<li>4 Full Conference registrations</li>
			<li>Social media promotion</li>
		</ul>
	</div>
	<div class="support-recognition-container">
		<div class="support-recognition-level bronze"><i class="fa fa-certificate fa-2x"></i>
			<p><span class="recognition-level-text">BRONZE</span> SPONSORSHIP <span class="recognition-amount-text">$10,000</span> or more in value</p>
		</div>
		<ul class="support-recognition-list">
			<li>2 Full Conference registrations</li>
			<li>Social media promotion</li>
		</ul>
	</div>
</div>';

  $export['lend_your_support'] = $fe_block_boxes;

  return $export;
}
