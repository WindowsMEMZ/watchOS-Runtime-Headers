//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BPSSubject_Protocol_h
#define BPSSubject_Protocol_h
@import Foundation;

@protocol BPSSubject <BPSPublisher>
/* instance methods */
- (void)sendCompletion:(id)completion;
- (void)sendSubscription:(id)subscription;
- (void)sendValue:(id)value;
@optional
/* instance methods */
- (void)sendCompletion;
- (void)sendEvent:(id)event;
@end

#endif /* BPSSubject_Protocol_h */
