//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMManagedPathRegistry_h
#define MCMManagedPathRegistry_h
@import Foundation;

#include "MCMManagedPath.h"
#include "MCMPOSIXUser.h"

@class NSSet;

@interface MCMManagedPathRegistry : NSObject

@property (readonly, nonatomic) BOOL privileged;
@property (readonly, nonatomic) MCMManagedPath *containermanagerLibraryIntermediate;
@property (readonly, nonatomic) MCMManagedPath *containermanagerCachesIntermediate;
@property (readonly, nonatomic) MCMPOSIXUser *daemonUser;
@property (readonly, nonatomic) NSSet *paths;
@property (readonly, nonatomic) MCMManagedPath *home;
@property (readonly, nonatomic) MCMManagedPath *library;
@property (readonly, nonatomic) MCMManagedPath *containermanagerLibrary;
@property (readonly, nonatomic) MCMManagedPath *containermanagerPendingUpdates;
@property (readonly, nonatomic) MCMManagedPath *containermanagerReplaceOperations;
@property (readonly, nonatomic) MCMManagedPath *containermanagerDeleteOperations;
@property (readonly, nonatomic) MCMManagedPath *caches;
@property (readonly, nonatomic) MCMManagedPath *containermanagerCaches;
@property (readonly, nonatomic) MCMManagedPath *containermanagerDeathrow;
@property (readonly, nonatomic) MCMManagedPath *logs;
@property (readonly, nonatomic) MCMManagedPath *containermanagerLogs;

/* instance methods */
- (id)initWithDaemonUser:(id)user privileged:(BOOL)privileged;
- (id)orderedPathsFromPaths:(id)paths;
- (id)managedPathForURL:(id)url;
- (void)_addPaths:(id)paths;
- (void)_initPathPropertiesWithDaemonUser:(id)user;
@end

#endif /* MCMManagedPathRegistry_h */
