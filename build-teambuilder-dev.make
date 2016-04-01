api = 2
core = 7.x

includes[] = https://raw.githubusercontent.com/lsolesen/buildthat/7.x-1.x/build-buildthat.make
includes[] = drupal-org.make

projects[teambuilder_vih_dk][type] = "profile"
projects[teambuilder_vih_dk][download][type] = "git"
projects[teambuilder_vih_dk][download][url] = "https://github.com/lsolesen/teambuilder.vih.dk.git"
projects[teambuilder_vih_dk][download][branch] = "7.x-1.x"
