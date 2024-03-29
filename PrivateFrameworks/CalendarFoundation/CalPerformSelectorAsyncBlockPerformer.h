//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef CalPerformSelectorAsyncBlockPerformer_h
#define CalPerformSelectorAsyncBlockPerformer_h
@import Foundation;

#include "CalAsyncBlockPerformer-Protocol.h"

@interface CalPerformSelectorAsyncBlockPerformer : NSObject<CalAsyncBlockPerformer>
/* instance methods */
- (id)performAsync:(id /* block */)async;
- (id)performAfterDelay:(double)delay block:(id /* block */)block;
@end

#endif /* CalPerformSelectorAsyncBlockPerformer_h */
