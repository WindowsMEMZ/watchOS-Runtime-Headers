//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKRecoveryAttempter_h
#define GKRecoveryAttempter_h
@import Foundation;

@interface GKRecoveryAttempter : NSObject {
  /* instance variables */
  id /* block */ _attemptRecovery;
}

/* class methods */
+ (id)recoveryAttempterUsingHandler:(id /* block */)handler;

/* instance methods */
- (void)attemptRecoveryFromError:(id)error optionIndex:(unsigned long long)index delegate:(id)delegate didRecoverSelector:(SEL)selector contextInfo:(void *)info;
- (BOOL)attemptRecoveryFromError:(id)error optionIndex:(unsigned long long)index;
@end

#endif /* GKRecoveryAttempter_h */
