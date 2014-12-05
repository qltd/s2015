<?php
/**
 * @file
 * landing_pages.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function landing_pages_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'The "Programs & Events" block for the Conference Overview page';
  $fe_block_boxes->format = 'raw_html';
  $fe_block_boxes->machine_name = 'for_attendees_programs_events';
  $fe_block_boxes->body = '<p>Experience astounding images, and learn how they were created. Interact with tomorrow\'s digital systems, and understand them. Meet the leading international innovators in computer graphics and interactive techniques, and share their knowledge.</p>
<p>At SIGGRAPH 2015, you\'ll find all the data, techniques, people, and inspiration you need for another successful year of research, development, creativity, and production.</p>

<ul class="programs-events-list">
  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/acm-siggraph-awards">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/ACM-SIGGRAPH-Awards.jpg">
      <h3 class="programs-events-title">ACM SIGGRAPH Award Presentation</h3>
      <p class="programs-events-paragraph">Announcement and tributes for this year\'s recipients of five prestigious awards: the Steven Anson Coons Award, the Computer Graphics Achievement Award, the Significant New Researcher Award, the Distinguished Artist Award for Lifetime Achievement in Digital Art, and the ACM SIGGRAPH Outstanding Service Award.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/acm-siggraph-awards">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/ACM-SIGGRAPH-Award-Talks.jpg">
      <h3 class="programs-events-title">ACM SIGGRAPH Award Talks</h3>
      <p class="programs-events-paragraph">Invited presentations by recipients of this year\'s ACM SIGGRAPH Awards.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/acm-student-research-competition">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/ACM-Student-Research-Competition.jpg">
      <h3 class="programs-events-title">ACM Student Research Competition Final Presentation</h3>
      <p class="programs-events-paragraph">A competition recognizing research by individual graduate students or teams of undergraduates presented in poster format. This is an excellent opportunity to learn about the types of research being pursued.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/art-gallery">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Art-Gallery.jpg">
      <h3 class="programs-events-title">Art Gallery</h3>
      <p class="programs-events-paragraph">A presentation of outstanding, critical, and innovative art works and projects submitted by digital-minded artists. The essential aim is to provide a deeper insight into the relationships within art, science, technology, and societal developments.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/art-papers">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Art-Papers.jpg">
      <h3 class="programs-events-title">Art Papers</h3>
      <p class="programs-events-paragraph">SIGGRAPH 2015 and Leonardo/ISAST present their sixth joint publication of SIGGRAPH Art Papers aimed to illuminate the changing roles of artists and the methods of art-making in our increasingly networked and computationally mediated world.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/birds-feather">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Birds-of-a-Feather.jpg">
      <h3 class="programs-events-title">Birds of a Feather</h3>
      <p class="programs-events-paragraph">Informal presentations, discussions, and demonstrations for people who share interests, goals, technologies, environments, or backgrounds related to computer graphics and interactive techniques. Non-commercial in nature.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/computer-animation-festival">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Computer-Animation-Festival.jpg">
      <h3 class="programs-events-title">Computer Animation Festival</h3>
      <p class="programs-events-paragraph">The leading annual festival for the world\'s digital film and video creators. Selections include outstanding achievements in time-based art, scientific visualization, visual effects, real-time graphics, and narrative shorts. An internationally recogized jury receives hundreds of submissions and presents the best work of the year in Daytime Selects and the Electronic Theater.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/courses">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Courses.jpg">
      <h3 class="programs-events-title">Courses</h3>
      <p class="programs-events-paragraph">Attendees learn from the experts in the field and gain inside knowledge that is critical to career advancement. Courses are short or half-day structured sessions ranging from introductory concepts to advanced instruction.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/dailies">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Dailies.jpg">
      <h3 class="programs-events-title">Dailies</h3>
      <p class="programs-events-paragraph">A series of very short presentations by artists who tell the story behind the imagery they created. Presenters range from students to industry giants speaking on modeling, shading, animation, lighting, effects, and more.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/emerging-technologies">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Emerging-Technologies.jpg">
      <h3 class="programs-events-title">Emerging Technologies</h3>
      <p class="programs-events-paragraph">Play with the latest interactive and graphics technologies before they transform the way we live and work. Presented are demonstrations of research from several fields, including displays, input devices, collaborative environments, and robotics.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/exhibition">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Exhibition.jpg">
      <h3 class="programs-events-title">Exhibition</h3>
      <p class="programs-events-paragraph">Get up-close and hands-on with the year\'s largest, most comprehensive exhibition of products and services for the computer graphics and interactive techniques marketplace, featuring the industry\'s established leaders and emerging challengers.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/exhibitor-tech-talks">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Exhibitor-Tech-Talks.jpg">
      <h3 class="programs-events-title">Exhibitor Tech Talks</h3>
      <p class="programs-events-paragraph">Exhibitors demonstrate software, hardware, and systems; answer questions; and host one-on-on conversations about how their applications improve professional and technical performance.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/exhibits-fast-forward">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Exhibits-Fast-Forward.jpg">
      <h3 class="programs-events-title">Exhibits Fast Forward</h3>
      <p class="programs-events-paragraph">A preview of the products and announcements that companies are planning for SIGGRAPH 2015 in a fast-paced, entertaining session before the Exhibition opens.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/international-resources">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/International-Resources.jpg">
      <h3 class="programs-events-title">International Center</h3>
      <p class="programs-events-paragraph">Open to all registration categories at SIGGRAPH 2015, the International Center offers multilingual podcasts of conference programs, informal translation services, space for meetings, talks, demonstrations, and includes overviews of the ACM SIGGRAPH Chapters + Digital Arts Community, as well as other international organizations and CG professionals.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/job-fair">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Job-Fair.jpg">
      <h3 class="programs-events-title">Job Fair</h3>
      <p class="programs-events-paragraph">Attendees connect with employers before the conference, during the conference via the Job Fair, and after the conference via the CreativeHeads.net job board and candidate profiling system. Produced by CreativeHeads.net.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/panels">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Panels.jpg">
      <h3 class="programs-events-title">Panels</h3>
      <p class="programs-events-paragraph">Moderated discussions on important topics, with expert panelists chosen by the organizers to provide a wide range of perspectives. A forum for the community to share experiences, opinions, insights, speculation, disagreement, and controversy.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/posters">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Posters.jpg">
      <h3 class="programs-events-title">Posters</h3>
      <p class="programs-events-paragraph">Presenting in-progress research, student projects, and late-breaking work, posters are on display for attendees to browse at their leisure. Poster authors meet and discuss their work with attendees during Poster Presentations.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/production-sessions">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Production-Sessions.jpg">
      <h3 class="programs-events-title">Production Sessions</h3>
      <p class="programs-events-paragraph">The world\'s most elite and talented computer graphics experts explain their processes and techniques for creating compelling content, and answer attendee questions about the challenges and issues associated with complex productions.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/real-time-live">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Real-Time-Live.jpg">
      <h3 class="programs-events-title">Real-Time Live!</h3>
      <p class="programs-events-paragraph">A celebration of the latest trends and techniques for pushing the boundaries of interactive effects, presented in a fast-paced, 90-minute show of cutting-edge, aesthetically stimulating real-time work.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/studio">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Studio.jpg">
      <h3 class="programs-events-title">Studio</h3>
      <p class="programs-events-paragraph">In this collaborative working environment, try out a wide range of new techniques and media with help from experienced hands: 3D printing, modeling, animation software, gigapixel imaging, motion capture, and more.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/talks">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Talks.jpg">
      <h3 class="programs-events-title">Talks</h3>
      <p class="programs-events-paragraph">Talks often highlight the latest developments before publication, present ideas that are still in progress, or showcase how computer graphics and interactive techniques are actually implemented and used across many fields.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/technical-papers">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Technical-Papers.jpg">
      <h3 class="programs-events-title">Technical Papers</h3>
      <p class="programs-events-paragraph">The premier international forum for disseminating new scholarly work in computer graphics and interactive techniques. At the conference, paper authors provide brief overviews and their complete papers in separate sessions.</p>
    </a>
  </li>

  <li class="programs-events-list-item">
    <a class="programs-events-link" href="/attendees/technical-papers-fast-forward">
      <img class="programs-events-image" src="/sites/all/themes/s2015/images/programs-events/Technical-Papers-Fast-Forward.jpg">
      <h3 class="programs-events-title">Technical Papers Fast Forward</h3>
      <p class="programs-events-paragraph">An entertaining, illuminating summary of Technical Papers in an exciting two-hour session. Author(s) are allowed a little less than a minute to wow the crowd and entice attendees to hear their complete paper presentation later in the week.</p>
    </a>
  </li>
</ul>
';

  $export['for_attendees_programs_events'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Full programs video';
  $fe_block_boxes->format = 'event';
  $fe_block_boxes->machine_name = 'programs_video';
  $fe_block_boxes->body = '<div class="video-wrapper"><iframe allowfullscreen="" frameborder="0" height="315" src="//www.youtube.com/embed/qXi2BWdO74Q" width="560"></iframe></div>
';

  $export['programs_video'] = $fe_block_boxes;

  return $export;
}
