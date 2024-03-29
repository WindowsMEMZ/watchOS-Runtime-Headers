//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.9.1.0.0
//
#ifndef SCDAAdvertisementContextManager_h
#define SCDAAdvertisementContextManager_h
@import Foundation;

@class AFSettingsConnection;
@protocol OS_dispatch_queue;

@interface SCDAAdvertisementContextManager : NSObject {
  /* instance variables */
  AFSettingsConnection *_settingsConnection;
  NSObject<OS_dispatch_queue> *_queue;
}

/* instance methods */
- (id)initWithQueue:(id)queue;
- (id)_settingsConnection;
- (void)_resetSettingsConnection;
- (void)pushMyriadAdvertisementContext:(id)context completionHandler:(id /* block */)handler;
- (void)triggerABCForType:(id)type subType:(id)type context:(id)context;
- (void)reset;
@end

#endif /* SCDAAdvertisementContextManager_h */
