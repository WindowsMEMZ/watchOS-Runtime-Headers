//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTXConnectionRemoteReceiveQueueCalls_Protocol_h
#define DTXConnectionRemoteReceiveQueueCalls_Protocol_h
@import Foundation;

@protocol DTXConnectionRemoteReceiveQueueCalls <DTXAllowedRPC>
/* instance methods */
- (void)_requestChannelWithCode:(unsigned int)code identifier:(id)identifier;
- (void)_notifyOfPublishedCapabilities:(id)capabilities;
- (void)_channelCanceled:(unsigned int)canceled;
- (void)_setTracerState:(unsigned int)state;
- (void)_notifyCompressionHint:(unsigned int)hint forChannelCode:(unsigned int)code;
@end

#endif /* DTXConnectionRemoteReceiveQueueCalls_Protocol_h */
