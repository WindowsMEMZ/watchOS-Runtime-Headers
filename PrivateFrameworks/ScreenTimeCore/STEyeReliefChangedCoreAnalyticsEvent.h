//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STEyeReliefChangedCoreAnalyticsEvent_h
#define STEyeReliefChangedCoreAnalyticsEvent_h
@import Foundation;

#include "STCoreAnalyticsEvent-Protocol.h"

@class NSDictionary, NSString;

@interface STEyeReliefChangedCoreAnalyticsEvent : NSObject<STCoreAnalyticsEvent>

@property (readonly) BOOL eyeReliefEnabled;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

/* class methods */
+ (id)description;

/* instance methods */
- (id)initWithEyeReliefEnabled:(BOOL)enabled;
@end

#endif /* STEyeReliefChangedCoreAnalyticsEvent_h */
