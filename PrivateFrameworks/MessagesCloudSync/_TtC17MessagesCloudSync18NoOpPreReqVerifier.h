//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef _TtC17MessagesCloudSync18NoOpPreReqVerifier_h
#define _TtC17MessagesCloudSync18NoOpPreReqVerifier_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "_TtP17MessagesCloudSync20SyncPreReqsVerifying_-Protocol.h"

@class NSError *;

@interface MessagesCloudSync.NoOpPreReqVerifier : Swift._SwiftObject<MessagesCloudSync.SyncPreReqsVerifying> // (Swift)
/* instance methods */
- (void)verifyAllPreReqsWithRequireEnablement:(BOOL)enablement completionHandler:(id /* block */)handler;
@end

#endif /* _TtC17MessagesCloudSync18NoOpPreReqVerifier_h */
