//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEAppPushProvider_h
#define NEAppPushProvider_h
@import Foundation;

#include "NEProvider.h"

@class NSDictionary;

@interface NEAppPushProvider : NEProvider

@property (retain) NSDictionary *providerConfiguration;

/* instance methods */
- (void)startWithCompletionHandler:(id /* block */)handler;
- (void)start;
- (void)stopWithReason:(long long)reason completionHandler:(id /* block */)handler;
- (void)reportIncomingCallWithUserInfo:(id)info;
- (void)reportPushToTalkMessageWithUserInfo:(id)info;
- (void)handleTimerEvent;
- (id)init;
@end

#endif /* NEAppPushProvider_h */
