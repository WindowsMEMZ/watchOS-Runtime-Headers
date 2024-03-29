//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDErrorAggregationLogEvent_h
#define HMDErrorAggregationLogEvent_h
@import Foundation;

#include "HMMLogEvent.h"
#include "HMMCoreAnalyticsLogging-Protocol.h"

@class NSDictionary, NSString, NSUUID;

@interface HMDErrorAggregationLogEvent : HMMLogEvent<HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) NSDictionary *coreAnalyticsSerializedEvent;
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
+ (id)createSummaryEventForRequestGroup:(id)group totalErrorCount:(id)count totalEventCount:(id)count;
+ (id)createErrorEventForRequestGroup:(id)group errorString:(id)string errorCount:(id)count;
+ (BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

/* instance methods */
- (id)initWithEventGroupName:(id)name errorString:(id)string errorCount:(id)count eventCount:(id)count;
@end

#endif /* HMDErrorAggregationLogEvent_h */
