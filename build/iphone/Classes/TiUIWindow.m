/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2014 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#import "TiUIWindow.h"
#import "TiUIWindowProxy.h"

@implementation TiUIWindow

- (void) dealloc
{
	[super dealloc];
}


-(void)frameSizeChanged:(CGRect)frame bounds:(CGRect)bounds
{
    [super frameSizeChanged:frame bounds:bounds];
    
    //Need the delay so that we get the right navbar bounds
    TiProxy* windowProxy = [self proxy];
    if ([windowProxy respondsToSelector:@selector(willChangeSize)]) {
        [(id)windowProxy willChangeSize];
    }
    if ([windowProxy respondsToSelector:@selector(updateNavBar)]) {
        [windowProxy performSelector:@selector(updateNavBar) 
                           withObject:nil 
                           afterDelay:[[UIApplication sharedApplication] statusBarOrientationAnimationDuration] ];
    }
}


@end

