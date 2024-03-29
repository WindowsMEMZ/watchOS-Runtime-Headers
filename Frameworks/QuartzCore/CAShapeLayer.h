//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1110.5.0.0.0
//
#ifndef CAShapeLayer_h
#define CAShapeLayer_h
@import Foundation;

#include "CALayer.h"

@class NSArray, NSString;

@interface CAShapeLayer : CALayer

@property struct CGPath * path;
@property struct CGColor * fillColor;
@property (copy) NSString *fillRule;
@property struct CGColor * strokeColor;
@property double strokeStart;
@property double strokeEnd;
@property double lineWidth;
@property double miterLimit;
@property (copy) NSString *lineCap;
@property (copy) NSString *lineJoin;
@property double lineDashPhase;
@property (copy) NSArray *lineDashPattern;

/* class methods */
+ (id)defaultValueForKey:(id)key;
+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;

/* instance methods */
- (void)didChangeValueForKey:(id)key;
- (id)implicitAnimationForKeyPath:(id)path;
- (void)_renderForegroundInContext:(struct CGContext *)context;
- (void *)_copyRenderLayer:(void *)layer layerFlags:(unsigned int)flags commitFlags:(unsigned int *)flags;
- (void)_colorSpaceDidChange;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)property;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)flags;
@end

#endif /* CAShapeLayer_h */
