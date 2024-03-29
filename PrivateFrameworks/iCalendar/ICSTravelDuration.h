//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1158.1.1.0.0
//
#ifndef ICSTravelDuration_h
#define ICSTravelDuration_h
@import Foundation;

#include "ICSProperty.h"
#include "ICSDuration.h"

@class NSString;

@interface ICSTravelDuration : ICSProperty

@property (retain, nonatomic) NSString *transparency;
@property (retain, nonatomic) ICSDuration *duration;

/* instance methods */
- (void)_ICSStringWithOptions:(unsigned long long)options appendingToString:(id)string additionalParameters:(id)parameters;
- (BOOL)alwaysHasParametersToSerialize;
@end

#endif /* ICSTravelDuration_h */
