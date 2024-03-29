//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CAAnimationDelegateBlockHelper_h
#define CAAnimationDelegateBlockHelper_h
@import Foundation;

#include "CAAnimationDelegate-Protocol.h"

@class NSString;

@interface CAAnimationDelegateBlockHelper : NSObject<CAAnimationDelegate>

@property (copy, nonatomic) id /* block */ animationDidStartBlock;
@property (copy, nonatomic) id /* block */ animationDidStopBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (void)animationDidStart:(id)start;
- (void)animationDidStop:(id)stop finished:(BOOL)finished;
@end

#endif /* CAAnimationDelegateBlockHelper_h */
