//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSCloudKitGroupServer_h
#define IDSCloudKitGroupServer_h
@import Foundation;

#include "IDSCKDatabase.h"

@protocol OS_dispatch_queue;

@interface IDSCloudKitGroupServer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSCKDatabase *database;

/* instance methods */
- (id)initWithDatabase:(id)database queue:(id)queue;
- (void)saveGroup:(id)group inContext:(id)context completion:(id /* block */)completion;
- (void)fetchGroupWithID:(id)id inContext:(id)context completion:(id /* block */)completion;
- (void)fetchGroupsWithStableGroupID:(id)id inContext:(id)context completion:(id /* block */)completion;
- (void)q_groupFromRecord:(id)record inContext:(id)context completion:(id /* block */)completion;
@end

#endif /* IDSCloudKitGroupServer_h */
