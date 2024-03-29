//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef __HMFDispatchExecutorMessageHandler_h
#define __HMFDispatchExecutorMessageHandler_h
@import Foundation;

#include "__HMFMessageHandler.h"

@interface __HMFDispatchExecutorMessageHandler : __HMFMessageHandler

@property (readonly) SEL selector;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (BOOL)invokeWithMessage:(id)message;
@end

#endif /* __HMFDispatchExecutorMessageHandler_h */
