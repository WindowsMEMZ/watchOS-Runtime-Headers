//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNCompoundPropertyQuery_h
#define LNCompoundPropertyQuery_h
@import Foundation;

#include "LNPropertyQuery.h"

@class NSArray;

@interface LNCompoundPropertyQuery : LNPropertyQuery

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSArray *comparisons;

/* class methods */
+ (id)andComparisons:(id)comparisons;
+ (id)orComparisons:(id)comparisons;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithType:(unsigned long long)type comparisons:(id)comparisons;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* LNCompoundPropertyQuery_h */
