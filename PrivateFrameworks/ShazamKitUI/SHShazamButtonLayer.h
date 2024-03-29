//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHShazamButtonLayer_h
#define SHShazamButtonLayer_h
@import Foundation;

#include "SHPaletteLayer.h"
#include "CAAnimationDelegate-Protocol.h"
#include "SHShazamButtonViewDelegate-Protocol.h"

@class CALayer, CAShapeLayer, NSString;

@interface SHShazamButtonLayer : SHPaletteLayer<CAAnimationDelegate>

@property (retain, nonatomic) CALayer *backgroundLayer;
@property (retain, nonatomic) CALayer *shapeLayer;
@property (retain, nonatomic) CAShapeLayer *topTransparentLayer;
@property (retain, nonatomic) CAShapeLayer *bottomTransparentLayer;
@property (retain, nonatomic) CAShapeLayer *topSolidLayer;
@property (retain, nonatomic) CAShapeLayer *bottomSolidLayer;
@property (retain, nonatomic) CAShapeLayer *topBorder;
@property (nonatomic) BOOL initialAnimationPerformed;
@property (weak, nonatomic) NSObject<SHShazamButtonViewDelegate> *buttonDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)setup;
- (void)layoutSublayers;
- (void)skipIntroAnimation;
- (void)performSDrawingIntroAnimation;
- (void)performSDrawingAnimationWithDuration:(double)duration delay:(double)delay;
- (void)performFadeInIntroAnimation:(double)animation delay:(double)delay;
- (void)removeTransparentShape;
- (void)drawTransparentShape;
- (void)removeTransparentShapeWithDuration:(double)duration delay:(double)delay completion:(id /* block */)completion;
- (void)drawSolidShape;
- (void)drawSolidShapeWithDuration:(double)duration delay:(double)delay completion:(id /* block */)completion;
- (id)strokeLayerWithPath:(struct CGPath *)path color:(struct CGColor *)color;
- (struct CGPath *)topStrokeLongPath;
- (struct CGPath *)bottomStrokeLongPath;
- (struct CGPath *)topStrokePath;
- (struct CGPath *)bottomStrokePath;
@end

#endif /* SHShazamButtonLayer_h */
