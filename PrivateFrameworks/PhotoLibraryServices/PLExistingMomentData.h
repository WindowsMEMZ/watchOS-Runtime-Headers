//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLExistingMomentData_h
#define PLExistingMomentData_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDate, NSDateInterval;

@interface PLExistingMomentData : NSObject

@property (readonly, nonatomic) NSObject<NSCopying> *objectID;
@property (readonly, nonatomic) unsigned long long numberOfAssets;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDateInterval *dateInterval;

/* instance methods */
- (id)initWithMoment:(id)moment;
- (void)registerAsset:(id)asset;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* PLExistingMomentData_h */
