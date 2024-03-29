//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFLinkShortcutsToggleCellularPlanAction_h
#define WFLinkShortcutsToggleCellularPlanAction_h
@import Foundation;

#include "WFOverridableLinkAction.h"

@interface WFLinkShortcutsToggleCellularPlanAction : WFOverridableLinkAction
/* instance methods */
- (void)getContentDestinationWithCompletionHandler:(id /* block */)handler;
- (id)smartPromptWithContentDescription:(id)description contentDestination:(id)destination workflowName:(id)name;
- (id)smartPromptSubtitleWithPreviousContentDescription:(id)description contentDestination:(id)destination workflowName:(id)name;
@end

#endif /* WFLinkShortcutsToggleCellularPlanAction_h */
