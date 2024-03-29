//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIPDFPageContentTiledLayer_h
#define UIPDFPageContentTiledLayer_h
@import Foundation;

#include "CATiledLayer.h"
#include "CALayerDelegate-Protocol.h"
#include "UIPDFSelectionLayer-Protocol.h"

@class CALayer, NSString;

@interface UIPDFPageContentTiledLayer : CATiledLayer<UIPDFSelectionLayer, CALayerDelegate> {
  /* instance variables */
  CALayer *_selectionLayer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)setSelectionNeedsDisplay;
- (void)setNeedsDisplay;
- (void)layoutSublayers;
- (void)drawLayer:(id)layer inContext:(struct CGContext *)context;
@end

#endif /* UIPDFPageContentTiledLayer_h */
