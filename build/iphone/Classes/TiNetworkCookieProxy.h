/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2014 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */

#import "TiProxy.h"

@interface TiNetworkCookieProxy : TiProxy
{
    NSMutableDictionary *_cookieDict;
}

@property(nonatomic) BOOL isHTTPOnly;
-(id)initWithCookie:(NSHTTPCookie*)cookie andPageContext:(id<TiEvaluator>)context;
-(NSHTTPCookie*)newCookie;
@end