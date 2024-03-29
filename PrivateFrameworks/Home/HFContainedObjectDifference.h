//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFContainedObjectDifference_h
#define HFContainedObjectDifference_h
@import Foundation;

#include "HFDifference.h"
#include "HFComparisonResult.h"

@interface HFContainedObjectDifference : HFDifference

@property (retain, nonatomic) HFComparisonResult *containedObjectResult;

/* class methods */
+ (id)containedObjectDifferenceWithKey:(id)key comparisonResult:(id)result;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)descriptionBuilder;
@end

#endif /* HFContainedObjectDifference_h */
