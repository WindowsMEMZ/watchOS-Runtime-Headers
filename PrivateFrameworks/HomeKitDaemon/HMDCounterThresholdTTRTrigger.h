//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCounterThresholdTTRTrigger_h
#define HMDCounterThresholdTTRTrigger_h
@import Foundation;

#include "HMMCounterObserver-Protocol.h"
#include "HMMRadarInitiating-Protocol.h"

@class NSString;

@interface HMDCounterThresholdTTRTrigger : NSObject<HMMCounterObserver> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSString *radarTitle;
@property (readonly, nonatomic) NSString *componentName;
@property (readonly, nonatomic) NSString *componentVersion;
@property (readonly, nonatomic) NSString *componentID;
@property (readonly, weak, nonatomic) NSObject<HMMRadarInitiating> *radarInitiator;
@property (readonly, nonatomic) long long activeThreshold;
@property (nonatomic) long long targetThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithThreshold:(long long)threshold ttrCategory:(id)category radarInitiator:(id)initiator;
- (id)initWithThreshold:(long long)threshold message:(id)message radarTitle:(id)title componentName:(id)name componentVersion:(id)version componentID:(id)id radarInitiator:(id)initiator;
- (void)updatedCounter:(id)counter fromOldValue:(long long)value toNewValue:(long long)value;
@end

#endif /* HMDCounterThresholdTTRTrigger_h */
