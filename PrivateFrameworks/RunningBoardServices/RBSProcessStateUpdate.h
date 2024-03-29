//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSProcessStateUpdate_h
#define RBSProcessStateUpdate_h
@import Foundation;

#include "RBSProcessExitEvent.h"
#include "RBSProcessHandle.h"
#include "RBSProcessState.h"

@interface RBSProcessStateUpdate : NSObject

@property (readonly, nonatomic) RBSProcessHandle *process;
@property (readonly, nonatomic) RBSProcessState *state;
@property (readonly, nonatomic) RBSProcessState *previousState;
@property (readonly, nonatomic) RBSProcessExitEvent *exitEvent;

/* class methods */
+ (id)updateWithState:(id)state previousState:(id)state exitEvent:(id)event;

/* instance methods */
- (id)description;
@end

#endif /* RBSProcessStateUpdate_h */
