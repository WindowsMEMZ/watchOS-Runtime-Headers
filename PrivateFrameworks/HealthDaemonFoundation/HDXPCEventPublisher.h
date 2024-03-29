//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDXPCEventPublisher_h
#define HDXPCEventPublisher_h
@import Foundation;

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface HDXPCEventPublisher : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_xpc_event_publisher> *_publisher;
  NSMutableArray *_pendingEvents;
  NSMutableArray *_pendingSubscribers;
  NSMutableDictionary *_subscribers;
  const char * _requiredEntitlement;
}

/* instance methods */
- (id)initWithStream:(const char *)stream entitlement:(const char *)entitlement;
- (void)broadcastEvent:(id)event;
@end

#endif /* HDXPCEventPublisher_h */
