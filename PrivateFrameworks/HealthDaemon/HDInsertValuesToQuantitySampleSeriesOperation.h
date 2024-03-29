//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDInsertValuesToQuantitySampleSeriesOperation_h
#define HDInsertValuesToQuantitySampleSeriesOperation_h
@import Foundation;

#include "HDJournalableOperation.h"

@class HKQuantitySample, NSArray, NSUUID;

@interface HDInsertValuesToQuantitySampleSeriesOperation : HDJournalableOperation {
  /* instance variables */
  NSUUID *_legacySeriesIdentifier;
  BOOL _didAwakeFromJournal;
}

@property (readonly, copy, nonatomic) HKQuantitySample *series;
@property (readonly, copy, nonatomic) NSArray *values;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSeries:(id)series values:(id)values;
- (BOOL)performWithProfile:(id)profile transaction:(id)transaction error:(id *)error;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HDInsertValuesToQuantitySampleSeriesOperation_h */
