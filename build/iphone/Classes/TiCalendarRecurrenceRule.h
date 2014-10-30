/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2014 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#import "TiProxy.h"
#ifdef USE_TI_CALENDAR

#import <EventKit/EventKit.h>

@class CalendarModule;

@interface TiCalendarRecurrenceRule : TiProxy {
@private
    
    EKRecurrenceRule* rule;
}


-(id)_initWithPageContext:(id<TiEvaluator>)context rule:(EKRecurrenceRule*)rule_ ;
-(EKRecurrenceRule*)ruleForRecurrence;
@end

#endif