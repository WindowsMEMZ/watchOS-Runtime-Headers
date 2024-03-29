//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef _TtCC9ChronoKit29InteractiveWidgetActionRunnerP33_1C4DBC0C4C60E41750913BD55B2D37FB8Delegate_h
#define _TtCC9ChronoKit29InteractiveWidgetActionRunnerP33_1C4DBC0C4C60E41750913BD55B2D37FB8Delegate_h
@import Foundation;

#include "WFWorkflowRunnerClientDelegate-Protocol.h"

@interface ChronoKit.InteractiveWidgetActionRunner.(Delegate in _1C4DBC0C4C60E41750913BD55B2D37FB) : NSObject<WFWorkflowRunnerClientDelegate> { // (Swift)
  /* instance variables */
   completion;
}

/* instance methods */
- (void)workflowRunnerClient:(id)client didFinishRunningWorkflowWithError:(id)error cancelled:(BOOL)cancelled;
- (id)init;
@end

#endif /* _TtCC9ChronoKit29InteractiveWidgetActionRunnerP33_1C4DBC0C4C60E41750913BD55B2D37FB8Delegate_h */
