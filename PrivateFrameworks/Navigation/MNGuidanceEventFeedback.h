//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNGuidanceEventFeedback_h
#define MNGuidanceEventFeedback_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSString, NSUUID;

@interface MNGuidanceEventFeedback : NSObject<NSCopying, NSSecureCoding>

@property (retain, nonatomic) NSUUID *uniqueID;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) unsigned long long stepID;
@property (nonatomic) unsigned long long enrouteNoticeIndex;
@property (nonatomic) unsigned long long eventIndex;
@property (nonatomic) unsigned long long type;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double maneuverTime;
@property (nonatomic) double startDistance;
@property (nonatomic) double endDistance;
@property (nonatomic) double vehicleSpeed;
@property (nonatomic) unsigned long long trafficColor;
@property (nonatomic) unsigned long long selectedPrimaryStringIndex;
@property (nonatomic) unsigned long long selectedSecondaryStringIndex;
@property (retain, nonatomic) NSArray *junctionViewImageIDs;
@property (copy, nonatomic) NSString *enrouteNoticeIdentifier;
@property (nonatomic) int trafficCameraType;
@property (copy, nonatomic) NSString *eventDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithEvent:(id)event;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* MNGuidanceEventFeedback_h */
