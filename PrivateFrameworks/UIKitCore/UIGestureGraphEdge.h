//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIGestureGraphEdge_h
#define UIGestureGraphEdge_h
@import Foundation;

#include "UIGestureGraphElement.h"
#include "UIGestureGraphNode.h"

@interface UIGestureGraphEdge : UIGestureGraphElement

@property (readonly, nonatomic) UIGestureGraphNode *sourceNode;
@property (readonly, nonatomic) UIGestureGraphNode *targetNode;
@property (readonly, nonatomic) BOOL directed;
@property (readonly, nonatomic) BOOL loop;

/* instance methods */
- (id)initWithLabel:(id)label sourceNode:(id)node targetNode:(id)node directed:(BOOL)directed;
- (id)oppositeNode:(id)node;
- (id)commonNode:(id)node;
- (BOOL)isLoop;
- (id)description;
- (BOOL)isDirected;
@end

#endif /* UIGestureGraphEdge_h */
