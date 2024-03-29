//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSleepPeriodArrayBuilder_h
#define HDSleepPeriodArrayBuilder_h
@import Foundation;

@class NSDate, NSMutableArray;

@interface HDSleepPeriodArrayBuilder : NSObject {
  /* instance variables */
  NSMutableArray *_periods;
  NSMutableArray *_segments;
  NSDate *_minDate;
  NSDate *_maxDate;
}

/* instance methods */
- (id)init;
- (void)addOrderedSegment:(id)segment;
- (id)finish;
@end

#endif /* HDSleepPeriodArrayBuilder_h */
