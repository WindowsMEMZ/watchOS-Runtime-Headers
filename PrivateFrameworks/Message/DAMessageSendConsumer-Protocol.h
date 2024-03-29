//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef DAMessageSendConsumer_Protocol_h
#define DAMessageSendConsumer_Protocol_h
@import Foundation;

@protocol DAMessageSendConsumer <DAActionConsumer>
@optional
/* instance methods */
- (void)messageDidSendWithContext:(id)context;
- (void)messageDidSendWithContext:(id)context sentBytesCount:(unsigned long long)count receivedBytesCount:(unsigned long long)count;
@end

#endif /* DAMessageSendConsumer_Protocol_h */
