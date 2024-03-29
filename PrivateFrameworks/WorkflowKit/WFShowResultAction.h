//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFShowResultAction_h
#define WFShowResultAction_h
@import Foundation;

#include "WFAction.h"

@interface WFShowResultAction : WFAction
/* instance methods */
- (void)runAsynchronouslyWithInput:(id)input;
- (BOOL)getInputContentFromVariablesInParameterState:(id)state context:(id)context completionHandler:(id /* block */)handler;
@end

#endif /* WFShowResultAction_h */
