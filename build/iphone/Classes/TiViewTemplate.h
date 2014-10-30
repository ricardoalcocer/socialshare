/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2014 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#import "TiProxy.h"

@interface TiViewTemplate : TiProxy

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) NSDictionary *events;
@property (nonatomic, readonly) NSArray *childTemplates;

- (id)initWithViewTemplate:(NSDictionary *)viewTemplate;
- (BOOL)isEmpty;

+ (TiViewTemplate *)templateFromViewTemplate:(id)viewTemplate;

@end
