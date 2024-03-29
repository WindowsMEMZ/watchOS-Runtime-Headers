//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDFreezeQuantitySampleSeriesOperation_h
#define HDFreezeQuantitySampleSeriesOperation_h
@import Foundation;

#include "HDJournalableOperation.h"

@class NSDate, NSDictionary, NSUUID;

@interface HDFreezeQuantitySampleSeriesOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSUUID *frozenIdentifier;
@property (readonly, nonatomic) long long freezeResult;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier metadata:(id)metadata endDate:(id)date;
- (BOOL)performWithProfile:(id)profile transaction:(id)transaction error:(id *)error;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HDFreezeQuantitySampleSeriesOperation_h */
