//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TITypingSessionAggregatedEventObserver_Protocol_h
#define TITypingSessionAggregatedEventObserver_Protocol_h
@import Foundation;

@protocol TITypingSessionAggregatedEventObserver <NSObject>
/* instance methods */
- (void)sessionDidEnd:(id)end aligned:(id)aligned;
@optional
/* instance methods */
- (void)tearDown;
@end

#endif /* TITypingSessionAggregatedEventObserver_Protocol_h */
