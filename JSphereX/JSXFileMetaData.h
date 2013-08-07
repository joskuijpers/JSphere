//
//  JSXProjectMetaData.h
//  JSphereX
//
//  Created by Jos Kuijpers on 8/7/13.
//  Copyright (c) 2013 Jarvix. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSXFile.h"

@interface JSXFileMetaData : JSXFile

@property (copy) NSNumber *formatVersion;
@property (copy) NSString *gameName;
@property (copy) NSString *gameDescription;
@property (copy) NSString *author;
@property (assign) NSRect gameScreenSize;
@property (copy) NSString *mainScript;

@end
