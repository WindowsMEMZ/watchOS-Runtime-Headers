//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMMStateTracker_h
#define HMMStateTracker_h
@import Foundation;

#include "HMMStateData.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface HMMStateTracker : NSObject

@property (nonatomic) BOOL autoStopPreviousState;
@property (retain, nonatomic) NSMutableDictionary *openStates;
@property (retain, nonatomic) NSMutableArray *closedStates;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long stateEntryTransitionTime;
@property (nonatomic) unsigned long long longestStateDuration;
@property (readonly, nonatomic) BOOL started;
@property (readonly, nonatomic) unsigned long long totalDuration;
@property (readonly, nonatomic) unsigned long long totalStateDuration;
@property (readonly, nonatomic) NSArray *states;
@property (readonly, nonatomic) HMMStateData *longestState;

/* instance methods */
- (id)initAutoStopPreviousState:(BOOL)state;
- (void)startWithTime:(unsigned long long)time;
- (void)endWithTime:(unsigned long long)time;
- (void)enterState:(id)state enterTime:(unsigned long long)time enterData:(id)data;
- (void)exitState:(id)state exitTime:(unsigned long long)time exitData:(id)data;
- (void)_exitState:(id)state exitTime:(unsigned long long)time exitData:(id)data;
- (void)updateStateDuration:(unsigned long long)duration;
- (BOOL)isStarted;
@end

#endif /* HMMStateTracker_h */
