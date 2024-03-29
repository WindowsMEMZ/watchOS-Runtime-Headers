//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.0.0.0.0
//
#ifndef RKPaymentIdentifier_h
#define RKPaymentIdentifier_h
@import Foundation;

@interface RKPaymentIdentifier : NSObject
/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)amountsFromMessage:(id)message;
- (id)copyAttributedTokensForText:(id)text;
@end

#endif /* RKPaymentIdentifier_h */
