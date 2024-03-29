//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKTimePeriodWithSecondsNumberFormatter_h
#define HKTimePeriodWithSecondsNumberFormatter_h
@import Foundation;

#include "HKNumberFormatter-Protocol.h"

@class NSString;

@interface HKTimePeriodWithSecondsNumberFormatter : NSObject<HKNumberFormatter>

@property (nonatomic) BOOL allowMillisecondPrecision;
@property (nonatomic) unsigned long long secondsRoundingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (BOOL)returnsUnitWithValueForDisplay;
- (id)stringFromNumber:(id)number displayType:(id)type unitController:(id)controller;
@end

#endif /* HKTimePeriodWithSecondsNumberFormatter_h */
