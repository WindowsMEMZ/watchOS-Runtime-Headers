//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSBinaryTransitionStateMachineBlockDelegate_h
#define CSLSBinaryTransitionStateMachineBlockDelegate_h
@import Foundation;

#include "CSLSBinaryTransitionStateMachineDelegate-Protocol.h"

@class NSString;

@interface CSLSBinaryTransitionStateMachineBlockDelegate : NSObject<CSLSBinaryTransitionStateMachineDelegate> {
  /* instance variables */
  id /* block */ _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (void)dealloc;
- (void)invalidate;
- (void)stateMachine:(id)machine didEnterState:(unsigned long long)state;
@end

#endif /* CSLSBinaryTransitionStateMachineBlockDelegate_h */
