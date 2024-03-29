//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITapRecognizer_h
#define UITapRecognizer_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "UITapRecognizerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, NSSet;

@interface UITapRecognizer : NSObject<NSSecureCoding> {
  /* instance variables */
  struct CGPoint { double x; double y; } _location;
  struct CGPoint { double x; double y; } _startPoint;
  struct CGPoint { double x; double y; } _digitizerLocation;
  double _startTime;
  long long _strongestDirectionalAxis;
  double _strongestDirectionalForce;
  int _currentNumberOfTouches;
  int _currentNumberOfTaps;
  int _numberOfTouchesForCurrentTap;
  unsigned int x :1 _timerOn;
  unsigned int x :1 _multitouchTimerOn;
  unsigned int x :1 _noNewTouches;
  unsigned int x :1 _hasPointerTouch;
}

@property (weak, nonatomic) NSObject<UITapRecognizerDelegate> *delegate;
@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) BOOL continuousTapRecognition;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) long long buttonMaskRequired;
@property (nonatomic) double allowableMovement;
@property (nonatomic) double allowableSeparation;
@property (nonatomic) double allowableTouchTimeSeparation;
@property (nonatomic) double maximumSingleTapDuration;
@property (nonatomic) double maximumTapDuration;
@property (nonatomic) double minimumTapDuration;
@property (nonatomic) double maximumIntervalBetweenSuccessiveTaps;
@property (nonatomic) BOOL countsOnlyActiveTouches;
@property (nonatomic) long long exclusiveDirectionalAxis;
@property (readonly, nonatomic) NSArray *touches;
@property (readonly, nonatomic) NSSet *activeTouches;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)dealloc;
- (void)_reset;
- (void)clearTapTimer;
- (void)startTapTimer:(double)timer;
- (void)tooSlow:(id)slow;
- (void)clearMultitouchTimer;
- (void)startMultitouchTimer:(double)timer;
- (void)multitouchExpired:(id)expired;
- (double)_effectiveAllowableMovement;
- (BOOL)activeTouchesExceedAllowableSeparation;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)_beginInteraction;
- (void)_interactionEndedTouch:(BOOL)touch;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)pressesBegan:(id)began withEvent:(id)event;
- (void)pressesChanged:(id)changed withEvent:(id)event;
- (void)pressesEnded:(id)ended withEvent:(id)event;
- (void)pressesCancelled:(id)cancelled withEvent:(id)event;
- (struct CGPoint { double x0; double x1; })_locationInSceneReferenceSpace;
- (struct CGPoint { double x0; double x1; })locationInView:(id)view;
- (struct CGPoint { double x0; double x1; })locationInView:(id)view focusSystem:(id)system;
- (struct CGPoint { double x0; double x1; })_digitizerLocation;
- (void)_updateDigitizerLocationForEvent:(id)event;
@end

#endif /* UITapRecognizer_h */
