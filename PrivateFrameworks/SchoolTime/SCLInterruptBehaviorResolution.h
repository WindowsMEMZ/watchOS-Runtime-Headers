//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLInterruptBehaviorResolution_h
#define SCLInterruptBehaviorResolution_h
@import Foundation;

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SCLInterruptBehaviorResolution : NSObject {
  /* instance variables */
  NSString *_clientIdentifier;
  NSXPCConnection *_connection;
  NSObject<OS_dispatch_queue> *_connectionQueue;
}

/* class methods */
+ (id)resolutionForClientIdentifier:(id)identifier;

/* instance methods */
- (id)initWithClientIdentifier:(id)identifier;
- (id)resolveBehaviorForEvent:(id)event error:(out id *)error;
- (id)serverConnection;
- (void)setServerConnection:(id)connection;
@end

#endif /* SCLInterruptBehaviorResolution_h */
