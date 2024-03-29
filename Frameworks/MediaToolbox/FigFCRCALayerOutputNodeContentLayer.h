//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3090.15.3.1.0
//
#ifndef FigFCRCALayerOutputNodeContentLayer_h
#define FigFCRCALayerOutputNodeContentLayer_h
@import Foundation;

#include "FigBaseCALayer.h"

@interface FigFCRCALayerOutputNodeContentLayer : FigBaseCALayer {
  /* instance variables */
  struct OpaqueFigCaptionRendererCALayerOutputNodeContentLayerInternal { id x0; struct CGImage * x1; } * layerInternal;
}

/* instance methods */
- (id)actionForLayer:(id)layer forKey:(id)key;
- (id)init;
- (void)dealloc;
@end

#endif /* FigFCRCALayerOutputNodeContentLayer_h */
