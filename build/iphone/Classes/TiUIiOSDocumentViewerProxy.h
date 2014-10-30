/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2014 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#if defined(USE_TI_UIIPADDOCUMENTVIEWER) || defined(USE_TI_UIIOSDOCUMENTVIEWER)

#import "TiProxy.h"

@interface TiUIiOSDocumentViewerProxy : TiProxy<UIDocumentInteractionControllerDelegate> {
@private
	UIDocumentInteractionController *controller;
}

@property(nonatomic,readwrite,assign) id url;
@property(nonatomic,readonly) id icons;
@property(nonatomic,readonly) id name;


@end


#endif