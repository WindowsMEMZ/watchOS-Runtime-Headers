//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDiMessageIDSDelegateHandlerRegistry_h
#define IMDiMessageIDSDelegateHandlerRegistry_h
@import Foundation;

#include "IMBaseCommandHandlerRegistry.h"

@interface IMDiMessageIDSDelegateHandlerRegistry : IMBaseCommandHandlerRegistry
/* instance methods */
- (BOOL)canAddCommand:(id)command;
- (id)noopHandlerForCommand:(id)command;
@end

#endif /* IMDiMessageIDSDelegateHandlerRegistry_h */
