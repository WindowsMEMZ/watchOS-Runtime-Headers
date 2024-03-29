//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 40.0.3.0.0
//
#ifndef PKPhysicsFieldCustomBlock_h
#define PKPhysicsFieldCustomBlock_h
@import Foundation;

#include "PKPhysicsField.h"

@interface PKPhysicsFieldCustomBlock : PKPhysicsField {
  /* instance variables */
  id /* block */ _batchBlock;
  id /* block */ _block;
}

/* class methods */
+ (id)fieldWithCustomBlock:(id /* block */)block;
+ (id)fieldWithCustomBatchBlock:(id /* block */)block;

/* instance methods */
- (id)initWithCustomBlock:(id /* block */)block;
- (id)initWithCustomBatchBlock:(id /* block */)block;
@end

#endif /* PKPhysicsFieldCustomBlock_h */
