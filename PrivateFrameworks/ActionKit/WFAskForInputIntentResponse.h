//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFAskForInputIntentResponse_h
#define WFAskForInputIntentResponse_h
@import Foundation;

#include "INIntentResponse.h"
#include "WFAskForInputResult.h"

@interface WFAskForInputIntentResponse : INIntentResponse

@property (nonatomic) long long code;
@property (copy, @dynamic, nonatomic) WFAskForInputResult *result;

/* instance methods */
- (id)initWithCode:(long long)code userActivity:(id)activity;
@end

#endif /* WFAskForInputIntentResponse_h */
