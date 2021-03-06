//
//  GHFileSysytem.h
//  FUSEHub
//
//  Created by orta on 06/12/2010.
//  Copyright (c) 2010 http://www.ortatherox.com. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "GHBlobParser.h"

@class GHFile;

@interface GHFileSystem : NSObject <GHBlob> {
  GHFile *root;
  NSString * temporaryDirectory;
  BOOL mounted;
  NSString * activity;
}

@property () BOOL mounted;
@property (retain) NSString * activity;

- (void)addItemToStore:(NSString*) path withUser:(NSString*) user andRepo:(NSString*)repo;
- (GHFile *)findNodeAtPath:(NSString *) path;

- (void) getUser:(NSString*) user;
- (void) getUser:(NSString*) user andRepo:(NSString*)repo;
- (void) addUser:(NSString*) user;

- (void) print;

@end
