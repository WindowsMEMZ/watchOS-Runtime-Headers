//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDDateRange_h
#define _CDDateRange_h
@import Foundation;

#include "_CDDateRangeProtocol-Protocol.h"

@class NSDate;

@interface _CDDateRange : NSObject<_CDDateRangeProtocol>

@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly) double duration;

/* class methods */
+ (id)periodWithStart:(id)start duration:(double)duration;
+ (id)periodWithEnd:(id)end duration:(double)duration;
+ (id)periodWithStart:(id)start end:(id)end;

/* instance methods */
- (id)initWithStart:(id)start andEnd:(id)end;
- (BOOL)contains:(id)contains;
- (id)description;
@end

#endif /* _CDDateRange_h */
