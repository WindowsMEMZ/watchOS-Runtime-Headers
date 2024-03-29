//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHouseholdThreadNetworkStabilityLogEventFactory_h
#define HMDHouseholdThreadNetworkStabilityLogEventFactory_h
@import Foundation;

#include "HMFObject.h"
#include "HMDHouseholdDistributedMetricsLogEventFactory-Protocol.h"
#include "HMDThreadNetworkObserver.h"

@interface HMDHouseholdThreadNetworkStabilityLogEventFactory : HMFObject<HMDHouseholdDistributedMetricsLogEventFactory>

@property (readonly, nonatomic) HMDThreadNetworkObserver *threadNetworkObserver;

/* instance methods */
- (id)initWithThreadNetworkObserver:(id)observer;
- (id)logEventsPopulatedForHomeWithUUID:(id)uuid associatedWithDate:(id)date;
- (id)serializeLogEvents:(id)events;
- (id)logEventsFromDictionary:(id)dictionary;
- (id)coalescedLogEventsFromLogEvents:(id)events homeUUID:(id)uuid;
- (void)deleteCountersBeforeDate:(id)date;
- (void)deleteCountersAfterDate:(id)date;
@end

#endif /* HMDHouseholdThreadNetworkStabilityLogEventFactory_h */
