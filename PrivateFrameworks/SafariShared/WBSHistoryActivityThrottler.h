//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSHistoryActivityThrottler_h
#define WBSHistoryActivityThrottler_h
@import Foundation;

@class NSMutableArray;

@interface WBSHistoryActivityThrottler : NSObject {
  /* instance variables */
  NSMutableArray *_activityTimes;
}

@property (nonatomic) unsigned long long activityLimitPerSecond;

/* instance methods */
- (id)initWithLimitPerSecond:(unsigned long long)second;
- (BOOL)shouldRecordHistoryVisitAtTime:(double)time;
@end

#endif /* WBSHistoryActivityThrottler_h */
