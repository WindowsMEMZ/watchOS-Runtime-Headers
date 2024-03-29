//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64561.91.2.0.0
//
#ifndef VMUDepthGraph_h
#define VMUDepthGraph_h
@import Foundation;

#include "VMUProcessObjectGraph.h"

@interface VMUDepthGraph : NSObject {
  /* instance variables */
  VMUProcessObjectGraph *_graph;
  unsigned int * _depthMap;
}

/* instance methods */
- (id)initWithGraph:(id)graph;
- (void)dealloc;
- (unsigned int)depthOfNode:(unsigned int)node;
- (long long)markNodes:(void *)nodes atDepth:(unsigned int)depth;
- (void)_processNodes:(void *)nodes withDepth:(unsigned int)depth;
- (void)_buildNextDepth:(id)depth into:(id)into depth:(unsigned int)depth;
- (void)_buildDepthMap;
@end

#endif /* VMUDepthGraph_h */
