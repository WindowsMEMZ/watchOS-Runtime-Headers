//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBHandwritingInputSpeedModel_h
#define UIKBHandwritingInputSpeedModel_h
@import Foundation;

@class NSMutableArray;

@interface UIKBHandwritingInputSpeedModel : NSObject {
  /* instance variables */
  NSMutableArray *_recordedIntervals;
  NSMutableArray *_recordedSpeeds;
  double _lastStrokeTimeStamp;
  double _lastTouchTimeStamp;
  struct CGPoint { double x; double y; } _lastTouchLocation;
  NSMutableArray *_pointsCurrentStroke;
  BOOL _duringStroke;
}

@property (readonly, nonatomic) BOOL autoConfirmationEnabled;
@property (readonly, nonatomic) double minTimeout;
@property (readonly, nonatomic) double maxTimeout;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } handwritingFrame;

/* instance methods */
- (id)init;
- (void)beginStroke;
- (void)addPoint:(struct CGPoint { double x0; double x1; })point timestamp:(double)timestamp;
- (void)endStroke;
- (void)endCharacter;
- (double)speedForCurrentStroke;
- (double)smoothValueFromArray:(id)array;
- (double)timeoutForNextPage;
- (void)updatePreferences;
@end

#endif /* UIKBHandwritingInputSpeedModel_h */
