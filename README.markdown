[teambuilder.vih.dk](http://teambuilder.vih.dk)
==

Installation profile for teambuilder.vih.dk written i Drupal.

Requirements
--

* [drush](http://drupal.org/project/drush) 
* [drush_make](http://drupal.org/project/drush_make)

Installation
--

    drush make teambuilder_vih_dk.build ~/workspace/teambuilder_vih_dk_build
    
Create the settings.php in sites/default and chmod 755
Create "files" directory in sites/default and chmod 755

Navigate to the root directory in a webbrowser and run the install profile.

#### Update existing install profile ####

If you want to update just the install profile instead of rebuilding the
entire site, you can run this:

    drush make --no-core --contrib-destination=. teambuilder_vih_dk.make