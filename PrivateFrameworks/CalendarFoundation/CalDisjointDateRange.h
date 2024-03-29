//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef CalDisjointDateRange_h
#define CalDisjointDateRange_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSMutableSet, NSSet;

@interface CalDisjointDateRange : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSSet *distinctRanges;

/* class methods */
+ (id)disjointRangeWithDistinctRanges:(id)ranges;
+ (id)disjointRangeWithSingleRange:(id)range;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDistinctRanges:(id)ranges;
- (id)sortedDistinctRanges;
- (double)totalDuration;
- (BOOL)containsDate:(id)date;
- (BOOL)containsRange:(id)range;
- (BOOL)intersectsRange:(id)range;
- (id)addRange:(id)range;
- (id)addDisjointRange:(id)range;
- (id)subtractRange:(id)range;
- (id)subtractDisjointRange:(id)range;
- (id)intersectionWithRange:(id)range;
- (id)intersectionWithDisjointRange:(id)range;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* CalDisjointDateRange_h */
