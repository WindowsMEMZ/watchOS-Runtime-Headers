//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPowerAssertion_h
#define PLPowerAssertion_h
@import Foundation;

@interface PLPowerAssertion : NSObject
/* class methods */
+ (void)performNoTimeoutPowerAssertionTaskWithName:(id)name humanReadableReason:(id)reason block:(id /* block */)block;
+ (void)performPowerAssertionTaskWithName:(id)name humanReadableReason:(id)reason timeout:(double)timeout timeoutAction:(struct __CFString *)action block:(id /* block */)block;
+ (unsigned int)takePowerAssertionWithName:(id)name humanReadableReason:(id)reason timeout:(double)timeout timeoutAction:(struct __CFString *)action;
+ (void)removePowerAssertionForAssertionID:(unsigned int)id;
@end

#endif /* PLPowerAssertion_h */
