//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNTrafficIncidentTriggerRange_h
#define MNTrafficIncidentTriggerRange_h
@import Foundation;

#include "MNTrafficIncidentTriggerPoint.h"
#include "NSSecureCoding-Protocol.h"

@interface MNTrafficIncidentTriggerRange : NSObject<NSSecureCoding>

@property (readonly, nonatomic) MNTrafficIncidentTriggerPoint *showTriggerPoint;
@property (readonly, nonatomic) MNTrafficIncidentTriggerPoint *hideTriggerPoint;
@property (readonly, nonatomic) double displayTime;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTriggerPointShow:(id)show hide:(id)hide displayTime:(double)time;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* MNTrafficIncidentTriggerRange_h */
