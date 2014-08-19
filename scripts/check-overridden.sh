#!/bin/bash

: ${DRUSH:=drush}
: ${DRUSH_ARGS:=}

TEAMBUILDER_FEATURES="teambuilder_activities" 

# TODO: We should make sure that 'diff' is downloaded first!
$DRUSH $DRUSH_ARGS en -y diff

OVERRIDDEN=0
for teambuilder_feature in $TEAMBUILDER_FEATURES; do
  echo "Checking $teambuilder_feature..."
  if $DRUSH $DRUSH_ARGS features-diff $teambuilder_feature 2>&1 | grep -v 'Feature is in its default state'; then
    OVERRIDDEN=1
  fi
done

exit $OVERRIDDEN
