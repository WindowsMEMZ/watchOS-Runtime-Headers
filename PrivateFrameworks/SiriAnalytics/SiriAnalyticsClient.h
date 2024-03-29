//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef SiriAnalyticsClient_h
#define SiriAnalyticsClient_h
@import Foundation;

#include "SiriAnalyticsClientMessageStream.h"

@interface SiriAnalyticsClient : NSObject

@property (readonly, nonatomic) SiriAnalyticsClientMessageStream *defaultMessageStream;

/* instance methods */
- (BOOL)clientMessageStream:(id)stream shouldEmitMessage:(id)message timestamp:(unsigned long long)timestamp isolatedStreamUUID:(id)uuid;
@end

#endif /* SiriAnalyticsClient_h */
