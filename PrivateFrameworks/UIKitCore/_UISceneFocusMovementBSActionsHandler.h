//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UISceneFocusMovementBSActionsHandler_h
#define _UISceneFocusMovementBSActionsHandler_h
@import Foundation;

#include "_UISceneBSActionHandler-Protocol.h"

@class NSMutableDictionary, NSString;

@interface _UISceneFocusMovementBSActionsHandler : NSObject<_UISceneBSActionHandler> {
  /* instance variables */
  NSMutableDictionary *_pendingFocusMovementActions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)_respondToActions:(id)actions forFBSScene:(id)fbsscene inUIScene:(id)uiscene fromTransitionContext:(id)context;
- (void)_focusSystemSceneComponentDidPerformInitialSetupNotification:(id)notification;
@end

#endif /* _UISceneFocusMovementBSActionsHandler_h */
