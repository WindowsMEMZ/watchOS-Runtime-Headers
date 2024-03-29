//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFConnectionUserInteractionAssertion_h
#define AFConnectionUserInteractionAssertion_h
@import Foundation;

#include "AFSafetyBlock.h"

@interface AFConnectionUserInteractionAssertion : NSObject {
  /* instance variables */
  AFSafetyBlock *_safetyBlock;
}

/* instance methods */
- (id)initWithCompletion:(id /* block */)completion;
- (void)releaseAssertion;
@end

#endif /* AFConnectionUserInteractionAssertion_h */
