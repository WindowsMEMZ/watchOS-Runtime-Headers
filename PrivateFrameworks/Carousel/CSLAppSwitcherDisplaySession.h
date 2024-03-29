//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLAppSwitcherDisplaySession_h
#define CSLAppSwitcherDisplaySession_h
@import Foundation;

#include "CSLAppSwitcherDisplaySessionConfiguration.h"
#include "CSLAppSwitcherDisplaySessionDismissedState.h"
#include "CSLAppSwitcherDisplaySessionInitialState.h"
#include "CSLAppSwitcherDisplaySessionScrollingState.h"
#include "CSLAppSwitcherDisplaySessionSettledState.h"
#include "CSLAppSwitcherDisplaySessionState.h"
#include "CSLSceneVisibilityAssertion.h"

@interface CSLAppSwitcherDisplaySession : NSObject {
  /* instance variables */
  CSLAppSwitcherDisplaySessionInitialState *_initialState;
  CSLAppSwitcherDisplaySessionDismissedState *_dismissedState;
  CSLAppSwitcherDisplaySessionScrollingState *_scrollingState;
  CSLAppSwitcherDisplaySessionSettledState *_settledState;
  CSLSceneVisibilityAssertion *_visibilityAssertion;
}

@property (readonly, nonatomic) CSLAppSwitcherDisplaySessionConfiguration *configuration;
@property (retain, nonatomic) CSLAppSwitcherDisplaySessionState *currentState;
@property (nonatomic) BOOL allowsVisibilityAssertions;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)beginSession;
- (void)endSession;
- (void)switcherDidBeginScrolling;
- (void)switcherDidEndScrolling;
- (void)settleFromInitialState;
- (void)switcherDidUpdateItems;
- (void)transitionToState:(id)state;
- (void)acquireAssertionForBundleID:(id)id;
- (void)relinquishAllAssertions;
@end

#endif /* CSLAppSwitcherDisplaySession_h */
