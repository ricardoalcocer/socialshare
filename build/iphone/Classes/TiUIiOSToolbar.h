/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2014 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */

#if defined(USE_TI_UIIOSTOOLBAR) || defined(USE_TI_UITOOLBAR)
#import "TiUIView.h"

@protocol ios6ToolbarDelegate
- (NSInteger)positionForBar:(id)bar;
@end
@interface TiUIiOSToolbar : TiUIView<LayoutAutosizing,ios6ToolbarDelegate> {
    UIToolbar * toolBar;
    BOOL hideTopBorder;
    BOOL showBottomBorder;
    BOOL extendsBackground;
}

-(UIToolbar *)toolBar;

@end

#endif