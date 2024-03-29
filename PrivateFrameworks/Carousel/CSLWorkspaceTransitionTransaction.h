//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLWorkspaceTransitionTransaction_h
#define CSLWorkspaceTransitionTransaction_h
@import Foundation;

#include "IOSSHLTransaction.h"
#include "CSLWorkspaceTransitionRequest.h"

@class CSLPIBacklightAssertion;

@interface CSLWorkspaceTransitionTransaction : IOSSHLTransaction

@property (retain, nonatomic) CSLPIBacklightAssertion *backlightAssertion;
@property (readonly, nonatomic) CSLWorkspaceTransitionRequest *request;

/* instance methods */
- (id)initWithTransitionRequest:(id)request;
- (void)_didInterruptWithReason:(id)reason;
- (void)_willBegin;
- (void)_willComplete;
- (void)_didComplete;
- (id)transitionDestination;
- (id)_customizedDescriptionProperties;
@end

#endif /* CSLWorkspaceTransitionTransaction_h */
