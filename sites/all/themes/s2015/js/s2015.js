(function e(t,n,r){function s(o,u){if(!n[o]){if(!t[o]){var a=typeof require=="function"&&require;if(!u&&a)return a(o,!0);if(i)return i(o,!0);throw new Error("Cannot find module '"+o+"'")}var f=n[o]={exports:{}};t[o][0].call(f.exports,function(e){var n=t[o][1][e];return s(n?n:e)},f,f.exports,e,t,n,r)}return n[o].exports}var i=typeof require=="function"&&require;for(var o=0;o<r.length;o++)s(r[o]);return s})({1:[function(require,module,exports){
(function ($) {

  Drupal.behaviors.s2015SiteSearch = {
    attach: function () {
      var formText = $('.site-search .form-text')
        , submitButton = $('.site-search .form-submit');

      submitButton.click(function (event) {
        event.preventDefault();
      });
    }
  };
})(jQuery);

},{}],2:[function(require,module,exports){
/*
 *   $$$$$$\  $$$$$$\  $$$$$$\   $$$$$$\  $$$$$$$\   $$$$$$\  $$$$$$$\  $$\   $$\        $$$$$$\   $$$$$$\    $$\  $$$$$$$\
 *  $$  __$$\ \_$$  _|$$  __$$\ $$  __$$\ $$  __$$\ $$  __$$\ $$  __$$\ $$ |  $$ |      $$  __$$\ $$$ __$$\ $$$$ | $$  ____|
 *  $$ /  \__|  $$ |  $$ /  \__|$$ /  \__|$$ |  $$ |$$ /  $$ |$$ |  $$ |$$ |  $$ |      \__/  $$ |$$$$\ $$ |\_$$ | $$ |
 *  \$$$$$$\    $$ |  $$ |$$$$\ $$ |$$$$\ $$$$$$$  |$$$$$$$$ |$$$$$$$  |$$$$$$$$ |       $$$$$$  |$$\$$\$$ |  $$ | $$$$$$$\
 *   \____$$\   $$ |  $$ |\_$$ |$$ |\_$$ |$$  __$$< $$  __$$ |$$  ____/ $$  __$$ |      $$  ____/ $$ \$$$$ |  $$ | \_____$$\
 *  $$\   $$ |  $$ |  $$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |      $$ |  $$ |      $$ |      $$ |\$$$ |  $$ | $$\   $$ |
 *  \$$$$$$  |$$$$$$\ \$$$$$$  |\$$$$$$  |$$ |  $$ |$$ |  $$ |$$ |      $$ |  $$ |      $$$$$$$$\ \$$$$$$  /$$$$$$\\$$$$$$  |
 *   \______/ \______| \______/  \______/ \__|  \__|\__|  \__|\__|      \__|  \__|      \________| \______/ \______|\______/
 *
 */

require('./behaviors/search');

},{"./behaviors/search":1}]},{},[2])