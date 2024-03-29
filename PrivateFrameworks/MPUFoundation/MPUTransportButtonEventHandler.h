//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.200.1.0.0
//
#ifndef MPUTransportButtonEventHandler_h
#define MPUTransportButtonEventHandler_h
@import Foundation;

@class UIControl;
@protocol OS_dispatch_source;

@interface MPUTransportButtonEventHandler : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_source> *_longPressTimer;
  BOOL _longPress;
  BOOL _shouldFakeEnabled;
}

@property (weak, nonatomic) UIControl *button;
@property (nonatomic) double minimumLongPressDuration;
@property (nonatomic) BOOL supportsTapWhenDisabled;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)beginTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)cancelTrackingWithEvent:(id)event;
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;
- (id)performHitTestingBlock:(id /* block */)block;
- (BOOL)shouldFakeEnabled;
- (BOOL)shouldForceTrackingEnabled;
- (void)_longPressTimerAction;
- (void)_clearLongPressTimer;
@end

#endif /* MPUTransportButtonEventHandler_h */
