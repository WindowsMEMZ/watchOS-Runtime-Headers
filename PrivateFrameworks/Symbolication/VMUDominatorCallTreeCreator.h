//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64561.91.2.0.0
//
#ifndef VMUDominatorCallTreeCreator_h
#define VMUDominatorCallTreeCreator_h
@import Foundation;

#include "VMUCallTreeRoot.h"
#include "VMUClassPatternMatcher.h"
#include "VMUDebugTimer.h"
#include "VMUDominatorGraph.h"
#include "VMUProcessObjectGraph.h"

@class NSNumber;

@interface VMUDominatorCallTreeCreator : NSObject {
  /* instance variables */
  VMUDebugTimer *_debugTimer;
  void * _visitedNodes;
  BOOL _showRegionVirtualSize;
  BOOL _groupByType;
}

@property (retain) VMUProcessObjectGraph *processObjectGraph;
@property (retain) VMUDominatorGraph *dominatorGraph;
@property (retain) VMUCallTreeRoot *callTreeRoot;
@property (retain) NSNumber *desiredAddress;
@property (retain) VMUClassPatternMatcher *desiredClassesPattern;

/* instance methods */
- (void)removeJunkEdges;
- (void *)removeJunkNodes;
- (unsigned long long)sizeForNodeName:(unsigned int)name nodeInfo:(struct { unsigned long long x0; unsigned int x1 :60; unsigned int x2 :4; id x3; })info;
- (id)callTreeWithGraph:(id)graph groupByType:(BOOL)type showRegionVirtualSize:(BOOL)size debugTimer:(id)timer;
- (void)buildCallTreeWithRootNodeNames:(id)names;
- (id)remainingNodeNames;
- (id)_addNodeWithNodeName:(unsigned int)name nodeInfo:(struct { unsigned long long x0; unsigned int x1 :60; unsigned int x2 :4; id x3; })info callTreeParentNode:(id)node parentNodeName:(unsigned int)name parentNodeType:(unsigned int)type reference:(struct { struct  * x0; struct { unsigned long long x0; unsigned int x1; unsigned long long x2; } x1; struct  * x2; } *)reference;
- (void)buildCallTreeWithNodeName:(unsigned int)name callTreeParentNode:(id)node parentNodeName:(unsigned int)name parentNodeType:(unsigned int)type reference:(struct { struct  * x0; struct { unsigned long long x0; unsigned int x1; unsigned long long x2; } x1; struct  * x2; } *)reference rootNodeFilter:(id /* block */)filter;
- (id)referenceDecriptionForSourceNodeAddress:(unsigned long long)address referenceInfo:(struct { unsigned long long x0; unsigned int x1; unsigned long long x2; })info;
- (id)groupByTypeNameForNode:(unsigned int)node;
- (id)groupByNodeNameForNode:(unsigned int)node parentNodeName:(unsigned int)name parentNodeType:(unsigned int)type reference:(const struct { struct  * x0; struct { unsigned long long x0; unsigned int x1; unsigned long long x2; } x1; struct  * x2; } *)reference;
@end

#endif /* VMUDominatorCallTreeCreator_h */
