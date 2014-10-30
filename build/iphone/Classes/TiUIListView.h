/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2014 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UILISTVIEW

#import "TiUIView.h"
#import "TiUIListViewProxy.h"

@interface TiUIListView : TiUIView <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, UIGestureRecognizerDelegate, UISearchBarDelegate, UISearchDisplayDelegate, TiScrolling, TiProxyObserver >

#pragma mark - Private APIs

@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, readonly) BOOL isSearchActive;

- (void)updateSearchResults:(id)unused;
- (void)setDictTemplates_:(id)args;
- (void)setContentInsets_:(id)value withObject:(id)props;
- (void)deselectAll:(BOOL)animated;
- (void)updateIndicesForVisibleRows;

+ (UITableViewRowAnimation)animationStyleForProperties:(NSDictionary*)properties;

@end

#endif
