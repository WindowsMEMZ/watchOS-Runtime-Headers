//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSharedSummaryCloudSyncManagerServer_h
#define HDSharedSummaryCloudSyncManagerServer_h
@import Foundation;

#include "HDStandardTaskServer.h"
#include "HKSharedSummaryCloudSyncManagerServerInterface-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface HDSharedSummaryCloudSyncManagerServer : HDStandardTaskServer<HKSharedSummaryCloudSyncManagerServerInterface> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)taskIdentifier;
+ (id)requiredEntitlements;

/* instance methods */
- (id)initWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate;
- (void)remote_fetchAccountInfoWithCompletion:(id /* block */)completion;
- (void)remote_pushWithCompletion:(id /* block */)completion;
- (void)remote_pullWithCompletion:(id /* block */)completion;
- (id)exportedInterface;
- (id)remoteInterface;
@end

#endif /* HDSharedSummaryCloudSyncManagerServer_h */
