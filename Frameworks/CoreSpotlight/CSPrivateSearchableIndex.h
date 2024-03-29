//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef CSPrivateSearchableIndex_h
#define CSPrivateSearchableIndex_h
@import Foundation;

#include "CSSearchableIndex.h"
#include "CSIndexConnection.h"

@class NSString;

@interface CSPrivateSearchableIndex : CSSearchableIndex

@property BOOL attemptedIndexPathResolution;
@property (retain, nonatomic) NSString *resolvedIndexPath;
@property (nonatomic) int resolvedIndexPathErrorCode;
@property (retain, nonatomic) NSString *indexPath;
@property (retain, nonatomic) CSIndexConnection *savedConnection;

/* class methods */
+ (id)defaultSearchableIndex;

/* instance methods */
- (id)initWithName:(id)name protectionClass:(id)class path:(id)path;
- (id)initWithPath:(id)path;
- (void)dealloc;
- (id)connection;
- (id)xpc_dictionary_for_command:(const char *)xpc_dictionary_for_command requiresInitialization:(BOOL)initialization;
@end

#endif /* CSPrivateSearchableIndex_h */
