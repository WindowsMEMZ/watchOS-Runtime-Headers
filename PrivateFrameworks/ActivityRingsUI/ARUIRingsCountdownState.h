//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 211.1.0.0.0
//
#ifndef ARUIRingsCountdownState_h
#define ARUIRingsCountdownState_h
@import Foundation;

#include "ARUIRingsRenderState.h"

@interface ARUIRingsCountdownState : ARUIRingsRenderState
/* instance methods */
- (id)renderPipelineDescriptorFromLibrary:(id)library;
- (id)name;
- (BOOL)shouldRunStateForRing:(id)ring;
@end

#endif /* ARUIRingsCountdownState_h */
