//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRUnitTestingClusterNestedStructList_h
#define MTRUnitTestingClusterNestedStructList_h
@import Foundation;

#include "MTRUnitTestingClusterSimpleStruct.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSNumber;

@interface MTRUnitTestingClusterNestedStructList : NSObject<NSCopying>

@property (copy, nonatomic) NSNumber *a;
@property (copy, nonatomic) NSNumber *b;
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *c;
@property (copy, nonatomic) NSArray *d;
@property (copy, nonatomic) NSArray *e;
@property (copy, nonatomic) NSArray *f;
@property (copy, nonatomic) NSArray *g;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* MTRUnitTestingClusterNestedStructList_h */
