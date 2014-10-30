/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2014 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#if defined(USE_TI_UITABLEVIEW) || defined(USE_TI_UILISTVIEW)
 
#import <UIKit/UIKit.h>

typedef enum
{
    TiCellBackgroundViewPositionTop,
    TiCellBackgroundViewPositionMiddle,
    TiCellBackgroundViewPositionBottom,
	TiCellBackgroundViewPositionSingleLine
} TiCellBackgroundViewPosition;


@interface TiSelectedCellBackgroundView : UIView
{
    TiCellBackgroundViewPosition position;
	UIColor *fillColor;
	BOOL grouped;
}
@property(nonatomic) TiCellBackgroundViewPosition position;
@property(nonatomic,retain) UIColor *fillColor;
@property(nonatomic) BOOL grouped;

@end

#endif