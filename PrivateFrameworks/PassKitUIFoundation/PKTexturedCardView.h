//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKTexturedCardView_h
#define PKTexturedCardView_h
@import Foundation;

#include "UIView.h"
#include "PKInvalidatable-Protocol.h"
#include "PKMotionManagerClientProtocol-Protocol.h"

@class NSString;

@interface PKTexturedCardView : UIView<PKMotionManagerClientProtocol, PKInvalidatable> {
  /* instance variables */
  BOOL _draw;
  BOOL _effectivePaused;
  BOOL _effectiveMotionEnabled;
  struct {  } _lastRotation;
  BOOL _limitZAngle;
  BOOL _invertOrientation;
}

@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL motionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL invalidated;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (BOOL)isInvalidated;
- (void)invalidate;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_handleDeviceOrientationChanged:(id)changed;
- (void)motionManager:(id)manager didReceiveMotion:(id)motion;
- (BOOL)isPaused;
- (BOOL)isMotionEnabled;
@end

#endif /* PKTexturedCardView_h */
