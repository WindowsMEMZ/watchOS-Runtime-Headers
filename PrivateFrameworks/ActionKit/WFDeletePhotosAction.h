//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFDeletePhotosAction_h
#define WFDeletePhotosAction_h
@import Foundation;

#include "WFHandleCustomIntentAction.h"

@interface WFDeletePhotosAction : WFHandleCustomIntentAction
/* instance methods */
- (void)resolveSlot:(id)slot withProcessedValue:(id)value parameter:(id)parameter input:(id)input completion:(id /* block */)completion;
- (BOOL)inputPassthrough;
- (BOOL)populatesInputFromInputParameter;
- (id)contentDestinationWithError:(id *)error;
@end

#endif /* WFDeletePhotosAction_h */
