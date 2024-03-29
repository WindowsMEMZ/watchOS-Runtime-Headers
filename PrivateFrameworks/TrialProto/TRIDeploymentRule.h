//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIDeploymentRule_h
#define TRIDeploymentRule_h
@import Foundation;

#include "TRIPBMessage.h"

@class NSMutableArray, NSString;

@interface TRIDeploymentRule : TRIPBMessage

@property (copy, @dynamic, nonatomic) NSString *name;
@property (@dynamic, nonatomic) BOOL hasName;
@property (copy, @dynamic, nonatomic) NSString *treatmentId;
@property (@dynamic, nonatomic) BOOL hasTreatmentId;
@property (retain, @dynamic, nonatomic) NSMutableArray *predicateArray;
@property (readonly, @dynamic, nonatomic) unsigned long long predicateArray_Count;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIDeploymentRule_h */
