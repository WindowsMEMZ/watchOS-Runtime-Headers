//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PSIGroupAggregateItem_h
#define PSIGroupAggregateItem_h
@import Foundation;

#include "PSIGroup.h"
#include "PSIQueryToken.h"

@class NSArray, NSValue;

@interface PSIGroupAggregateItem : NSObject

@property (retain, nonatomic) PSIQueryToken *searchToken;
@property (retain, nonatomic) NSValue *rangeMatchingToken;
@property (retain, nonatomic) PSIGroup *group;
@property (retain, nonatomic) NSArray *assetIds;
@property (retain, nonatomic) NSArray *collectionIds;

/* instance methods */
- (void)reset;
@end

#endif /* PSIGroupAggregateItem_h */
