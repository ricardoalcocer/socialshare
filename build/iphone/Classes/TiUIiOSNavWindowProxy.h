/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2014 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */

#ifdef USE_TI_UIIOSNAVIGATIONWINDOW
#import "TiWindowProxy.h"

@interface TiUIiOSNavWindowProxy : TiWindowProxy<UINavigationControllerDelegate,TiOrientationController,TiTab> {
@private
    UINavigationController *navController;
    TiWindowProxy *rootWindow;
    TiWindowProxy *current;
    BOOL transitionIsAnimating;
    BOOL transitionWithGesture;
}

//Private API
-(void)setFrame:(CGRect)bounds;
@end
#endif
