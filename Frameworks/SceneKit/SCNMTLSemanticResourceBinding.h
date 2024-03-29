//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNMTLSemanticResourceBinding_h
#define SCNMTLSemanticResourceBinding_h
@import Foundation;

#include "SCNMTLResourceBinding.h"

@interface SCNMTLSemanticResourceBinding : SCNMTLResourceBinding {
  /* instance variables */
  struct { id /* block */ x0; unsigned int x1; unsigned int x2; } * _semantics;
}

@property (nonatomic) long long semanticsCount;
@property (nonatomic) long long bufferSize;

/* instance methods */
- (void)dealloc;
@end

#endif /* SCNMTLSemanticResourceBinding_h */
