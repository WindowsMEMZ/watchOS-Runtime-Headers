//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INAppIntentDispatcher_h
#define INAppIntentDispatcher_h
@import Foundation;

#include "INIntentDeliveringDelegate-Protocol.h"

@class NSString;

@interface INAppIntentDispatcher : NSObject<INIntentDeliveringDelegate>

@property (weak, nonatomic) NSObject<INIntentDeliveringDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)dispatchIntentForwardingAction:(id)action completionHandler:(id /* block */)handler;
@end

#endif /* INAppIntentDispatcher_h */
