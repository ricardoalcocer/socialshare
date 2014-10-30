/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2014 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 *
 * Special thanks to Steve Tramer for implementing this.
 */

#ifdef USE_TI_NETWORK

#import <Foundation/Foundation.h>
#import "TiProxy.h"
#import <Foundation/NSNetServices.h>

// NSNetServiceBrowser delegate
@interface TiNetworkBonjourBrowserProxy : TiProxy<NSNetServiceBrowserDelegate> {
    NSNetServiceBrowser* browser;
    NSString* serviceType;
    NSString* domain;
    
    NSMutableArray* services;
    
    BOOL searching;
    NSString* error;
    NSCondition* searchCondition;
}

-(void)search:(id)unused;
-(void)stopSearch:(id)unused;

@property(readonly, nonatomic) NSString* serviceType;
@property(readonly, nonatomic) NSString* domain;
@property(readonly, nonatomic, getter=isSearching) NSNumber* searching;

@end

#endif