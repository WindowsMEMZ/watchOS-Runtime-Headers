//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef IOSSHLApplicationLaunchSuppressionAssertion_h
#define IOSSHLApplicationLaunchSuppressionAssertion_h
@import Foundation;

@class NSString;

@interface IOSSHLApplicationLaunchSuppressionAssertion : NSObject {
  /* instance variables */
  NSString *_uuid;
}

/* class methods */
+ (id)applicationLaunchSupressionAssertion;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (void)dealloc;
- (void)invalidate;
@end

#endif /* IOSSHLApplicationLaunchSuppressionAssertion_h */
