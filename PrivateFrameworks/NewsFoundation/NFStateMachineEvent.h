//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NFStateMachineEvent_h
#define NFStateMachineEvent_h
@import Foundation;

#include "NFStateMachineState.h"

@class NSSet, NSString;

@interface NFStateMachineEvent : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *states;
@property (retain, nonatomic) NFStateMachineState *destinationState;
@property (copy, nonatomic) id /* block */ fireBlock;

/* instance methods */
- (id)initWithName:(id)name transitionFromStates:(id)states toState:(id)state;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)onFire:(id /* block */)fire;
- (id)fired:(id)fired withOwner:(id)owner;
@end

#endif /* NFStateMachineEvent_h */
