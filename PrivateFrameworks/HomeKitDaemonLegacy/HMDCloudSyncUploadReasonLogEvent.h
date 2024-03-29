//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCloudSyncUploadReasonLogEvent_h
#define HMDCloudSyncUploadReasonLogEvent_h
@import Foundation;

#include "HMMLogEvent.h"

@class NSString;

@interface HMDCloudSyncUploadReasonLogEvent : HMMLogEvent

@property (readonly) long long legacyPushCount;
@property (readonly) long long homeZonePushCount;
@property (readonly) long long homeManagerPushCount;
@property (readonly, nonatomic) NSString *saveReason;

/* class methods */
+ (id)uploadReason:(id)reason acceptedLegacyPush:(BOOL)push;
+ (id)uploadReason:(id)reason acceptedHomeZonePush:(BOOL)push;
+ (id)uploadReason:(id)reason acceptedHomeManagerZonePush:(BOOL)push;

/* instance methods */
- (id)initWithUploadReason:(id)reason legacyPushCount:(long long)count homeZonePushCount:(long long)count homeManagerPushCount:(long long)count;
@end

#endif /* HMDCloudSyncUploadReasonLogEvent_h */
