//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HMPresenceEvent_HFAdditions_h
#define HMPresenceEvent_HFAdditions_h
@import Foundation;

@interface HMPresenceEvent (HFAdditions) <HFLocationBasedEvent>
/* class methods */
+ (unsigned long long)hf_locationEventTypeForPresenceEventType:(unsigned long long)type;
+ (unsigned long long)hf_presenceDisableReasonsForHome:(id)home;

/* instance methods */
- (id)hf_stateDumpBuilderWithContext:(id)context;
- (unsigned long long)hf_activationGranularity;
- (unsigned long long)hf_eventType;
@end

#endif /* HMPresenceEvent_HFAdditions_h */
