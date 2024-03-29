//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 930.0.0.0.0
//
#ifndef _TtC13TeaFoundation27BridgedCallbackRegistration_h
#define _TtC13TeaFoundation27BridgedCallbackRegistration_h
@import Foundation;

#include "TFCallbackRegistration-Protocol.h"

@interface TeaFoundation.BridgedCallbackRegistration : NSObject<TFCallbackRegistration> { // (Swift)
  /* instance variables */
   callback;
}

/* instance methods */
- (void)whenResolvingClass:(Class)class scope:(id)scope callbackBlock:(id /* block */)block;
- (void)whenResolvingProtocol:(id)protocol scope:(id)scope callbackBlock:(id /* block */)block;
- (id)init;
@end

#endif /* _TtC13TeaFoundation27BridgedCallbackRegistration_h */
