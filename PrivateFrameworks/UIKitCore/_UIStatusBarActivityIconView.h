//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarActivityIconView_h
#define _UIStatusBarActivityIconView_h
@import Foundation;

#include "_UIStatusBarImageView.h"
#include "_UIStatusBarPersistentAnimation-Protocol.h"

@class CAShapeLayer, NSString;

@interface _UIStatusBarActivityIconView : _UIStatusBarImageView<_UIStatusBarPersistentAnimation> {
  /* instance variables */
  BOOL _ringing;
  double _ringingIconScale;
}

@property (retain, nonatomic) CAShapeLayer *innerRingShapeLayer;
@property (retain, nonatomic) CAShapeLayer *outerRingShapeLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)_setupRingingLayersForStyleAttributes:(id)attributes;
- (void)_teardownRingingLayers;
- (void)layoutSubviews;
- (void)applyStyleAttributes:(id)attributes;
- (id)actionForLayer:(id)layer forKey:(id)key;
- (void)resumePersistentAnimation;
- (void)setRinging:(BOOL)ringing forUpdate:(id)update;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
@end

#endif /* _UIStatusBarActivityIconView_h */
