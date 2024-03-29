//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKTuple5_h
#define CKTuple5_h
@import Foundation;

#include "CKTuple.h"

@interface CKTuple5 : CKTuple

@property (retain, nonatomic) id v1;
@property (retain, nonatomic) id v2;
@property (retain, nonatomic) id v3;
@property (retain, nonatomic) id v4;
@property (retain, nonatomic) id v5;

/* instance methods */
- (id)initWithObject1:(id)object1 object2:(id)object2 object3:(id)object3 object4:(id)object4 object5:(id)object5;
- (id)objectAtIndexedSubscript:(unsigned long long)subscript;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CKTuple5_h */
