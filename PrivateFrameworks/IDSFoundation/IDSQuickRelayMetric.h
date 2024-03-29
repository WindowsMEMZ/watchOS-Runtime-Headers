//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSQuickRelayMetric_h
#define IDSQuickRelayMetric_h
@import Foundation;

#include "CUTCoreAnalyticsMetric-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface IDSQuickRelayMetric : NSObject<CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSNumber *type;
@property (readonly, nonatomic) NSNumber *subType;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) NSNumber *resultCode;
@property (readonly, nonatomic) NSNumber *providerType;
@property (readonly, nonatomic) NSNumber *transportType;
@property (readonly, nonatomic) NSNumber *interfaceType;
@property (readonly, nonatomic) NSNumber *skeEnabled;
@property (readonly, nonatomic) NSNumber *isInitiator;
@property (readonly, nonatomic) NSNumber *protocolVersion;
@property (readonly, nonatomic) NSNumber *retryCount;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSString *subServiceName;
@property (readonly, nonatomic) NSNumber *participantCount;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithType:(id)type eventSubType:(id)type duration:(id)duration resultCode:(id)code providerType:(id)type transportType:(id)type interfaceType:(id)type skeEnabled:(id)enabled isInitiator:(id)initiator protocolVersion:(id)version retryCount:(id)count serviceName:(id)name subServiceName:(id)name participantCount:(id)count;
@end

#endif /* IDSQuickRelayMetric_h */
