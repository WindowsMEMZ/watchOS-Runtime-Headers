//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 8.0.0.0.0
//
#ifndef IPXPCEventSubscriptionBlackhole_h
#define IPXPCEventSubscriptionBlackhole_h
@import Foundation;

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface IPXPCEventSubscriptionBlackhole : NSObject {
  /* instance variables */
  NSString *_streamName;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_xpc_event_publisher> *_publisher;
}

/* instance methods */
- (id)initWithStreamName:(id)name;
- (void)resume;
@end

#endif /* IPXPCEventSubscriptionBlackhole_h */
