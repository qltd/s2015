# SIGGRAPH 2015

This is the repository for the SIGGRAPH 2015 conference in Los Angeles.

## Getting Started

### Requirements

* Node.js
* PHP
* Ruby
* Web Server (Apache, Nginx, etc.)

### Installing Dependencies

In your command line of choice, change the current directory to ```sites/all/themes/s2015```, and then entering the following:

```
bundle install
npm install
```

Running ```npm install``` will install and run gulp, which will compile and minify all Sass and JavaScript resources.

### Database

You can either create a new database and run the installation script at ```install.php```, or you can source a copy of the existing SIGGRAPH conference site database from an appropriate party. Contact [Michael J. Bondra](mailto:mike@qltd.com) for more information.

### Features Module

Features constructed by the Features module are the primary way that development is shared between developers and the other environments of the website (dev, test, and live).