//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCModelRadioGetTracksRequestStep_h
#define MPCModelRadioGetTracksRequestStep_h
@import Foundation;

#include "MPCModelRadioGetTracksStep.h"

@interface MPCModelRadioGetTracksRequestStep : MPCModelRadioGetTracksStep
/* instance methods */
- (id)nextStepWithResponse:(id)response error:(id)error;
- (void)performWithCompletionHandler:(id /* block */)handler;
@end

#endif /* MPCModelRadioGetTracksRequestStep_h */
