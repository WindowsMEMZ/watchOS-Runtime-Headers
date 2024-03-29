//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSApplicationLaunchSuppressionAssertion_h
#define CSLSApplicationLaunchSuppressionAssertion_h
@import Foundation;

@class NSString, NSXPCConnection;

@interface CSLSApplicationLaunchSuppressionAssertion : NSObject {
  /* instance variables */
  NSXPCConnection *_connection;
  NSString *_uid;
}

/* class methods */
+ (id)applicationLaunchSupressionAssertion;

/* instance methods */
- (id)init;
- (void)_takeAssertion;
- (void)dealloc;
- (void)invalidate;
@end

#endif /* CSLSApplicationLaunchSuppressionAssertion_h */
