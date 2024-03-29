//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.2.3.0.0
//
#ifndef CPCompoundGraphicMaker_h
#define CPCompoundGraphicMaker_h
@import Foundation;

#include "CPChunk.h"
#include "CPCluster.h"
#include "CPDisposable-Protocol.h"

@interface CPCompoundGraphicMaker : NSObject<CPDisposable> {
  /* instance variables */
  CPChunk *parentChunk;
  BOOL shapesAreVectorGraphics;
  unsigned int shapeCount;
  id * shapes;
  double pageSpread;
  CPCluster *cluster;
  unsigned int groupInfoCount;
  struct { unsigned int x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; } * groupInfoArray;
  BOOL disposed;
}

/* class methods */
+ (BOOL)makeCompoundGraphicsInZonesOf:(id)of;

/* instance methods */
- (id)initWithGraphicsIn:(id)in ofClass:(Class)class;
- (void)dispose;
- (void)finalize;
- (void)dealloc;
- (BOOL)findClusterLevel;
- (void)addGroupInfoWithIndex:(unsigned int)index bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)makeCompoundGraphicFromShapesAtIndex:(unsigned int)index count:(unsigned int)count;
- (void)coalesceShapeGroups;
- (BOOL)makeCompoundGraphicsFromShapeGroups;
- (BOOL)groupOverlappingGraphics;
- (BOOL)makeCompoundGraphics;
@end

#endif /* CPCompoundGraphicMaker_h */
