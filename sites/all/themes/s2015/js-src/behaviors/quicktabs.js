(function ($) {

  // override broken clickHandler
  if (Drupal.quicktabs) Drupal.quicktabs.clickHandler = function (event) {
    var tab = event.data.tab;
    var element = this;
    // Set clicked tab to active.
    $(this).parents('li').siblings().removeClass('active');
    $(this).parents('li').addClass('active');

    // Hide all tabpages.
    tab.container.children().addClass('quicktabs-hide');

    if (!tab.tabpage.hasClass("quicktabs-tabpage")) {
      tab = new Drupal.quicktabs.tab(element);
    }

    // mjbondra: add tab page if the the value isn't properly defined
    if (tab.tabpage.selector === '#quicktabs-container-tabs #quicktabs-tabpage-tabs-undefined' && element.id) {
      var target = element.id.replace('-tab-', '-tabpage-');
      if (target !== element.id) tab.tabpage = $('#' + target);
    }

    tab.tabpage.removeClass('quicktabs-hide');
    return false;
  }
})(jQuery);
