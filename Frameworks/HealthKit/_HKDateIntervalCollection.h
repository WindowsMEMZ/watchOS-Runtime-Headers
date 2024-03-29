//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKDateIntervalCollection_h
#define _HKDateIntervalCollection_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSDateComponents;

@interface _HKDateIntervalCollection : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  double _approximateIntervalDuration;
  long long _maxComponent;
  BOOL _canUseFastDateMath;
  double _canonicalIntervalDuration;
}

@property (readonly, copy, nonatomic) NSDate *anchorDate;
@property (readonly, copy, nonatomic) NSDateComponents *intervalComponents;
@property (nonatomic) BOOL enableRiskyFastMathOptimization;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAnchorDate:(id)date intervalComponents:(id)components;
- (id)dateIntervalAtIndex:(long long)index;
- (id)_dateByAddingInterval:(long long)interval toDate:(id)date calendar:(id)calendar workComponents:(id)components;
- (id)dateIntervalContainingDate:(id)date index:(long long *)index;
- (id)dateIntervalForIntervalsContainingInterval:(id)interval;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* _HKDateIntervalCollection_h */
