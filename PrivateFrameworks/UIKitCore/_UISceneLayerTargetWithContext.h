//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UISceneLayerTargetWithContext_h
#define _UISceneLayerTargetWithContext_h
@import Foundation;

#include "UISceneLayerTarget-Protocol.h"

@class NSString;

@interface _UISceneLayerTargetWithContext : NSObject<UISceneLayerTarget> {
  /* instance variables */
  id _context;
  unsigned long long _equalityType;
  id /* block */ _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContext:(id)context equalityType:(unsigned long long)type matchingBlock:(id /* block */)block;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)matchesLayer:(id)layer;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* _UISceneLayerTargetWithContext_h */
