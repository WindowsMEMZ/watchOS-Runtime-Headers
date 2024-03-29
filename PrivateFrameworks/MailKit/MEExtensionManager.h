//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MEExtensionManager_h
#define MEExtensionManager_h
@import Foundation;

@interface MEExtensionManager : NSObject
/* class methods */
+ (void)reloadContentBlockerWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
+ (void)reloadVisibleMessagesWithCompletionHandler:(id /* block */)handler;
@end

#endif /* MEExtensionManager_h */
