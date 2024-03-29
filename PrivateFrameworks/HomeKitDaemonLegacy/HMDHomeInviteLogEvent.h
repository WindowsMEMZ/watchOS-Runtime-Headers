//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHomeInviteLogEvent_h
#define HMDHomeInviteLogEvent_h
@import Foundation;

#include "HMMLogEvent.h"
#include "HMMCoreAnalyticsLogging-Protocol.h"

@class NSDictionary, NSString, NSUUID;

@interface HMDHomeInviteLogEvent : HMMLogEvent<HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) BOOL received;
@property (readonly, nonatomic) BOOL filtered;
@property (readonly, nonatomic) BOOL suppressedNotification;
@property (readonly, nonatomic) BOOL accepted;
@property (readonly, nonatomic) BOOL declined;
@property (readonly, nonatomic) BOOL ignored;
@property (readonly, nonatomic) BOOL expired;
@property (readonly, nonatomic) BOOL isFMFDevice;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)updateWithState:(long long)state isFMFDevice:(BOOL)fmfdevice;
+ (id)updateWithInvitationState:(long long)state isFMFDevice:(BOOL)fmfdevice;

/* instance methods */
- (id)initWithHomeInviteLogEventState:(long long)state isFMFDevice:(BOOL)fmfdevice;
@end

#endif /* HMDHomeInviteLogEvent_h */
