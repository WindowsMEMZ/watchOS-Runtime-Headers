//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIUIAssignment_h
#define TRIUIAssignment_h
@import Foundation;

#include "TRIPBMessage.h"
#include "TRIUIAssignment_ExplicitBuckets.h"

@class NSString;

@interface TRIUIAssignment : TRIPBMessage

@property (readonly, @dynamic, nonatomic) int bucketingOneOfCase;
@property (@dynamic, nonatomic) unsigned int numBuckets;
@property (retain, @dynamic, nonatomic) TRIUIAssignment_ExplicitBuckets *explicitBuckets;
@property (copy, @dynamic, nonatomic) NSString *treatmentId;
@property (@dynamic, nonatomic) BOOL hasTreatmentId;
@property (@dynamic, nonatomic) BOOL control;
@property (@dynamic, nonatomic) BOOL hasControl;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIUIAssignment_h */
