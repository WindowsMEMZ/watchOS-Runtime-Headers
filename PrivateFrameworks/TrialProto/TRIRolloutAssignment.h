//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIRolloutAssignment_h
#define TRIRolloutAssignment_h
@import Foundation;

#include "TRIPBMessage.h"

@class NSMutableArray, NSString;

@interface TRIRolloutAssignment : TRIPBMessage

@property (retain, @dynamic, nonatomic) NSMutableArray *predicateArray;
@property (readonly, @dynamic, nonatomic) unsigned long long predicateArray_Count;
@property (retain, @dynamic, nonatomic) NSMutableArray *factorPackIdArray;
@property (readonly, @dynamic, nonatomic) unsigned long long factorPackIdArray_Count;
@property (copy, @dynamic, nonatomic) NSString *factorPackSetId;
@property (@dynamic, nonatomic) BOOL hasFactorPackSetId;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIRolloutAssignment_h */
