var gulp = require('gulp')
  , bower = require('gulp-bower')
  , browserify = require('gulp-browserify')
  , compass = require('gulp-compass')
  , csso = require('gulp-csso')
  , del = require('del')
  , plumber = require('gulp-plumber')
  , rename = require('gulp-rename')
  , uglify = require('gulp-uglify');

gulp.task('bower', function () {
  return bower()
    .pipe(gulp.dest('./libraries/'));
});

gulp.task('browserify', ['bower'], function () {
  return gulp.src('./js/s2015.js')
    .pipe(plumber())
    .pipe(rename(function (path) { path.basename += '.min'; }))
    .pipe(browserify())
    .pipe(uglify())
    .pipe(gulp.dest('./js/'));
});

gulp.task('compass', ['bower'], function () {
  return gulp.src('./sass/*.scss')
    .pipe(plumber())
    .pipe(compass({ environment: 'production', sass: './sass', css: './css' }))
    .pipe(gulp.dest('./css/'))
    .pipe(rename(function (path) { path.basename += '.min'; }))
    .pipe(csso())
    .pipe(gulp.dest('./css/'));
});

gulp.task('del', ['bower'], function () {
  return del(['./libraries/ckeditor/skins/*', '!./libraries/ckeditor/skins/moono'], function (err) {
    console.error(err);
  });
});

gulp.task('watch', function () {
  gulp.watch(['./js/*.js'], ['browserify']);
  gulp.watch(['./sass/*.scss', './sass/**/*.scss'], ['compass']);
});

gulp.task('default', ['bower', 'browserify', 'compass', 'del']);
