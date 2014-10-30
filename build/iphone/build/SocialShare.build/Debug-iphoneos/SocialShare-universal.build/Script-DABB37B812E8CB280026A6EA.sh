#!/bin/sh
echo 'Xcode Post-Compile Phase: Touching important files'
touch -c Classes/ApplicationRouting.h Classes/ApplicationRouting.m Classes/ApplicationDefaults.m Classes/ApplicationMods.m Classes/defines.h
if [ "x$TITANIUM_CLI_IMAGES_OPTIMIZED" != "x" ]; then
    if [ -f "$TITANIUM_CLI_IMAGES_OPTIMIZED" ]; then
        echo "Xcode Post-Compile Phase: Image optimization finished before xcodebuild finished, continuing"
    else
        echo "Xcode Post-Compile Phase: Waiting for image optimization to complete"
        echo "Xcode Post-Compile Phase: $TITANIUM_CLI_IMAGES_OPTIMIZED"
        while [ ! -f "$TITANIUM_CLI_IMAGES_OPTIMIZED" ]
        do
            sleep 1
        done
        echo 'Xcode Post-Compile Phase: Image optimization complete, continuing'
    fi
fi
