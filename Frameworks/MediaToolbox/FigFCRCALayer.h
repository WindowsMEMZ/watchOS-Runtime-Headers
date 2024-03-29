//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3090.15.3.1.0
//
#ifndef FigFCRCALayer_h
#define FigFCRCALayer_h
@import Foundation;

#include "FigBaseCALayer.h"

@interface FigFCRCALayer : FigBaseCALayer {
  /* instance variables */
  struct OpaqueFigCaptionRendererCALayerInternal { id x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; void * x2; undefined * x3; undefined * x4; undefined * x5; id x6; unsigned char x7; } * layerInternal;
}

/* instance methods */
- (id)actionForLayer:(id)layer forKey:(id)key;
- (id)init;
- (void)dealloc;
- (void)setVideoBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)clear:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clear;
- (void)setCallbacks:(id)callbacks userEvent:(undefined *)event viewportChanged:(undefined *)changed drawInContext:(undefined *)context;
- (void)compose;
- (void)layoutSublayers;
@end

#endif /* FigFCRCALayer_h */
