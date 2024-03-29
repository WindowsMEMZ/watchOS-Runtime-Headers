//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFPairedUnlockDailyEvent_h
#define SFPairedUnlockDailyEvent_h
@import Foundation;

#include "SFCoreAnalyticsEvent-Protocol.h"

@class NSDictionary, NSString;

@interface SFPairedUnlockDailyEvent : NSObject<SFCoreAnalyticsEvent>

@property (nonatomic) long long successfulAttempts;
@property (nonatomic) long long failedAttempts;
@property (nonatomic) long long totalAttempts;
@property (nonatomic) long long passcodeUnlocks;
@property (nonatomic) long long totalUnlocks;
@property (nonatomic) BOOL phoneAutoUnlockEnabled;
@property (copy, nonatomic) NSString *phoneHardwareModel;
@property (copy, nonatomic) NSString *phoneSoftwareVersion;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventName;

/* instance methods */
- (void)submitEvent;
@end

#endif /* SFPairedUnlockDailyEvent_h */
