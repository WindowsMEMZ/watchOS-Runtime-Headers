//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPAppLaunchMonitorRegistrationContext_h
#define PPAppLaunchMonitorRegistrationContext_h
@import Foundation;

@class NSNumber;
@protocol OS_dispatch_queue;

@interface PPAppLaunchMonitorRegistrationContext : NSObject {
  /* instance variables */
  NSNumber *_token;
  NSObject<OS_dispatch_queue> *_queue;
  id /* block */ _handler;
}

/* instance methods */
@end

#endif /* PPAppLaunchMonitorRegistrationContext_h */
