//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMAudioAnalysisStereoPairDetectedEvent_h
#define HMAudioAnalysisStereoPairDetectedEvent_h
@import Foundation;

#include "HMDAppleMediaAccessory.h"

@class HMAudioAnalysisEventBulletin, NSUUID;

@interface HMAudioAnalysisStereoPairDetectedEvent : NSObject

@property (copy) HMAudioAnalysisEventBulletin *event;
@property unsigned long long state;
@property (copy) NSUUID *notificationUUID;
@property (copy) HMDAppleMediaAccessory *accessory;

/* instance methods */
- (id)initWithEventBulletin:(id)bulletin accessory:(id)accessory notificationUUID:(id)uuid;
@end

#endif /* HMAudioAnalysisStereoPairDetectedEvent_h */
