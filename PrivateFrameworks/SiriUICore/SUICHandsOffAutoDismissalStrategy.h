//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.25.1.0.0
//
#ifndef SUICHandsOffAutoDismissalStrategy_h
#define SUICHandsOffAutoDismissalStrategy_h
@import Foundation;

#include "SUICAutoDismissalStrategy.h"

@interface SUICHandsOffAutoDismissalStrategy : SUICAutoDismissalStrategy
/* instance methods */
- (double)idleTimeInterval;
- (BOOL)shouldDismiss;
@end

#endif /* SUICHandsOffAutoDismissalStrategy_h */
