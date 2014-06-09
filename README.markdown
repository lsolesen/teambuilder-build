[teambuilder.vih.dk](http://teambuilder.vih.dk) [![Build Status](https://secure.travis-ci.org/lsolesen/teambuilder.vih.dk.png?branch=7.x-1.x)](http://travis-ci.org/lsolesen/teambuilder.vih.dk)
==

Installation profile for teambuilder.vih.dk written for Drupal 6.

Requirements
--

* [drush](http://drupal.org/project/drush) 
* [drush_make](http://drupal.org/project/drush_make)

Installation
--

    drush make build-teambuilder.make ~/workspace/teambuilder_vih_dk_build
    
Create the settings.php in sites/default and chmod 755
Create "files" directory in sites/default and chmod 755

Navigate to the root directory in a web browser and run the install profile.

#### Update existing install profile ####

If you want to update just the install profile instead of rebuilding the
entire site, you can run this:

    drush make --no-core --contrib-destination=. drupal-org.make

### Rebuild everything ###

    drush si teambuilder_vih_dk
