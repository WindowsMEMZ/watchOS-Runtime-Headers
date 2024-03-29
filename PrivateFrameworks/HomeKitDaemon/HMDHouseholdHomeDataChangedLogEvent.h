//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHouseholdHomeDataChangedLogEvent_h
#define HMDHouseholdHomeDataChangedLogEvent_h
@import Foundation;

#include "HMMHomeLogEvent.h"
#include "HMMCoreAnalyticsLogging-Protocol.h"

@class NSDictionary, NSString, NSUUID;

@interface HMDHouseholdHomeDataChangedLogEvent : HMMHomeLogEvent<HMMCoreAnalyticsLogging>

@property (nonatomic) unsigned long long count;
@property (readonly, nonatomic) long long changeType;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) NSString *propertyName;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initAsInsertEventForModelName:(id)name count:(unsigned long long)count homeUUID:(id)uuid;
- (id)initAsUpdateEventForModelName:(id)name propertyName:(id)name count:(unsigned long long)count homeUUID:(id)uuid;
- (id)initAsBecamePrimaryEventWithCount:(unsigned long long)count homeUUID:(id)uuid;
- (id)initWithChangeType:(long long)type count:(unsigned long long)count modelName:(id)name propertyName:(id)name homeUUID:(id)uuid;
- (id)initWithDictionary:(id)dictionary;
- (id)serializedLogEvent;
- (void)incrementCountWithValue:(unsigned long long)value;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HMDHouseholdHomeDataChangedLogEvent_h */
