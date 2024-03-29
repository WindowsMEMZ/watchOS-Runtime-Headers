//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIHIDPathSynchronizationFilter_h
#define _UIHIDPathSynchronizationFilter_h
@import Foundation;

@class NSMutableArray;

@interface _UIHIDPathSynchronizationFilter : NSObject {
  /* instance variables */
  struct CGPoint { double x; double y; } _initialPosition;
  double _initialInputTimestamp;
  struct CGPoint { double x; double y; } _currentInputPosition;
  double _currentInputTimestamp;
  double _outputPositionTimestampInInputScale;
  NSMutableArray *_inputEvents;
  struct { double minTimeScalingFactor; double maxTimeScalingFactor; double peakThreshold; } _configuration;
  long long _state;
  double _outputPositionTimestamp;
  struct CGPoint { double x; double y; } _outputPosition;
}

/* instance methods */
@end

#endif /* _UIHIDPathSynchronizationFilter_h */
