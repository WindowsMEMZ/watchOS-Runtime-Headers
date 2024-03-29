//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMSourceNode_h
#define AXMSourceNode_h
@import Foundation;

#include "AXMVisionEngineNode.h"
#include "NSSecureCoding-Protocol.h"

@class NSMutableArray;

@interface AXMSourceNode : AXMVisionEngineNode<NSSecureCoding> {
  /* instance variables */
  NSMutableArray *_nodeQueue_resultHandlers;
}

@property (nonatomic) BOOL shouldProcessRemotely;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)nodeInitialize;
- (id)resultHandlers;
- (void)addResultHandler:(id /* block */)handler;
- (void)_nodeQueue_addResultHandler:(id /* block */)handler;
- (void)removeResultHandler:(id /* block */)handler;
- (void)_nodeQueue_removeResultHandler:(id /* block */)handler;
- (void)removeAllResultHandlers;
- (void)_nodeQueue_removeAllResultHandlers;
- (void)produceImage:(id)image;
- (void)triggerWithContext:(id)context cacheKey:(id)key resultHandler:(id /* block */)handler;
@end

#endif /* AXMSourceNode_h */
