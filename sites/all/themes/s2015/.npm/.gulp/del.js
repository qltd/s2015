var gulp = require('gulp')
  , del = require('del');

gulp.task('del', ['bower'], function () {
  return del(['./libraries/ckeditor/skins/*', '!./libraries/ckeditor/skins/moono'], function (err) {
    if (err) console.error(err);
  });
});
