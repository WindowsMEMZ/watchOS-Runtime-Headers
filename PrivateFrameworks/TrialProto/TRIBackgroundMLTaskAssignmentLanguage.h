//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIBackgroundMLTaskAssignmentLanguage_h
#define TRIBackgroundMLTaskAssignmentLanguage_h
@import Foundation;

#include "TRIPBMessage.h"
#include "TRIPBUInt32Array.h"

@class NSMutableArray, NSString;

@interface TRIBackgroundMLTaskAssignmentLanguage : TRIPBMessage

@property (retain, @dynamic, nonatomic) TRIPBUInt32Array *bucketArray;
@property (readonly, @dynamic, nonatomic) unsigned long long bucketArray_Count;
@property (retain, @dynamic, nonatomic) NSMutableArray *predicateArray;
@property (readonly, @dynamic, nonatomic) unsigned long long predicateArray_Count;
@property (copy, @dynamic, nonatomic) NSString *factorPackId;
@property (@dynamic, nonatomic) BOOL hasFactorPackId;
@property (copy, @dynamic, nonatomic) NSString *factorPackSetId;
@property (@dynamic, nonatomic) BOOL hasFactorPackSetId;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIBackgroundMLTaskAssignmentLanguage_h */
