//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INUIAppIntentForwardingActionExecutor_h
#define INUIAppIntentForwardingActionExecutor_h
@import Foundation;

#include "INIntentDeliveringDelegate-Protocol.h"

@class NSString, UIApplication;

@interface INUIAppIntentForwardingActionExecutor : NSObject<INIntentDeliveringDelegate> {
  /* instance variables */
  id _handlerForIntent;
}

@property (retain, nonatomic) UIApplication *application;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithApplication:(id)application;
- (void)executeAction:(id)action completionHandler:(id /* block */)handler;
- (void)intentDeliverer:(id)deliverer deliverIntent:(id)intent withBlock:(id /* block */)block;
@end

#endif /* INUIAppIntentForwardingActionExecutor_h */
