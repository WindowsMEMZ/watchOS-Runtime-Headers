//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFDelayAction_h
#define WFDelayAction_h
@import Foundation;

#include "WFAction.h"

@class WFAutoIncrementingProgress;
@protocol OS_dispatch_source;

@interface WFDelayAction : WFAction

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) WFAutoIncrementingProgress *delayProgress;

/* instance methods */
- (BOOL)isProgressIndeterminate;
- (void)runAsynchronouslyWithInput:(id)input;
- (void)finishRunningWithError:(id)error;
@end

#endif /* WFDelayAction_h */
