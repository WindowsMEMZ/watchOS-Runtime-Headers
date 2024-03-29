//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMLocationManagerUtils_h
#define IMLocationManagerUtils_h
@import Foundation;

@interface IMLocationManagerUtils : NSObject
/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)sendCurrentLocationMessageWithChat:(id)chat withLocationManager:(id)manager withSourceApplicationIdentifier:(id)identifier foregroundAssertionForBundleIdentifier:(id)identifier completion:(id /* block */)completion;
@end

#endif /* IMLocationManagerUtils_h */
