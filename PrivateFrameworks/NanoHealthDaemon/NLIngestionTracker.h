//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLIngestionTracker_h
#define NLIngestionTracker_h
@import Foundation;

#include "NLIngestionTrackerDelegate-Protocol.h"

@class NSDate;

@interface NLIngestionTracker : NSObject {
  /* instance variables */
  double _sumx;
  double _sumxx;
  double _minDelay;
  double _maxDelay;
  NSDate *_startDate;
  NSDate *_endDate;
  long long _count;
  long long _reportIndex;
  BOOL _inSession;
}

@property (weak, nonatomic) NSObject<NLIngestionTrackerDelegate> *delegate;
@property (readonly, nonatomic) long long dataTypeCode;

/* instance methods */
- (id)initWithSampleType:(id)type;
- (void)reset;
- (void)appendSamples:(id)samples atTime:(double)time inSession:(BOOL)session;
- (void)_reportAndReset;
@end

#endif /* NLIngestionTracker_h */
