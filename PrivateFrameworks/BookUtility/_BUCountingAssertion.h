//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef _BUCountingAssertion_h
#define _BUCountingAssertion_h
@import Foundation;

#include "BUAssertion-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface _BUCountingAssertion : NSObject<BUAssertion> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  id /* block */ _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQueue:(id)queue block:(id /* block */)block;
- (void)dealloc;
- (void)invalidate;
@end

#endif /* _BUCountingAssertion_h */
