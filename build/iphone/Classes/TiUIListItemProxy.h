/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2014 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UILISTVIEW

#import "TiViewProxy.h"

@class TiUIListItem;
@class TiUIListViewProxy;

@interface TiUIListItemProxy : TiViewProxy < TiViewEventOverrideDelegate, TiProxyDelegate >

@property (nonatomic, readwrite, assign) TiUIListItem *listItem;
@property (nonatomic, readwrite, retain) NSIndexPath *indexPath;

- (id)initWithListViewProxy:(TiUIListViewProxy *)listViewProxy inContext:(id<TiEvaluator>)context;
-(void)deregisterProxy:(id<TiEvaluator>)context;
@end

#endif
