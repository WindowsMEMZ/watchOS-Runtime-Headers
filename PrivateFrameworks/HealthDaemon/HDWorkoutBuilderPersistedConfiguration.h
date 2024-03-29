//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDWorkoutBuilderPersistedConfiguration_h
#define HDWorkoutBuilderPersistedConfiguration_h
@import Foundation;

#include "HDDeviceEntity.h"
#include "HDSourceEntity.h"
#include "NSCopying-Protocol.h"

@class HKQuantity, HKWorkoutConfiguration, NSString, NSUUID;

@interface HDWorkoutBuilderPersistedConfiguration : NSObject<NSCopying>

@property (copy, nonatomic) NSUUID *builderIdentifier;
@property (copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (retain, nonatomic) HDSourceEntity *sourceEntity;
@property (copy, nonatomic) NSString *sourceVersion;
@property (retain, nonatomic) HDDeviceEntity *deviceEntity;
@property (nonatomic) unsigned long long goalType;
@property (copy, nonatomic) HKQuantity *goal;
@property (nonatomic) BOOL shouldCollectWorkoutEvents;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
@end

#endif /* HDWorkoutBuilderPersistedConfiguration_h */
