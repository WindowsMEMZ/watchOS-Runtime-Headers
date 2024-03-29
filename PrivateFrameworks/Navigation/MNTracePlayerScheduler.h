//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNTracePlayerScheduler_h
#define MNTracePlayerScheduler_h
@import Foundation;

#include "MNTracePlayerSchedulerDelegate-Protocol.h"
#include "MNTracePlayerTimelineStream.h"

@class NSMutableArray, NSTimer;

@interface MNTracePlayerScheduler : NSObject {
  /* instance variables */
  NSTimer *_timer;
  double _lastTimerScheduleTime;
  NSMutableArray *_timelineStreams;
  MNTracePlayerTimelineStream *_nextTimelineStream;
}

@property (weak, nonatomic) NSObject<MNTracePlayerSchedulerDelegate> *delegate;
@property (nonatomic) double speedMultiplier;
@property (nonatomic) double position;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)addTimelineStream:(id)stream;
- (void)removeTimelineStream:(id)stream;
- (void)removeAllTimelineStreams;
- (void)resume;
- (void)pause;
- (void)_update;
- (void)_timerUpdated:(id)updated;
@end

#endif /* MNTracePlayerScheduler_h */
