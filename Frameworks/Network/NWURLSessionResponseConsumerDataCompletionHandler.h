//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3762.60.29.0.0
//
#ifndef NWURLSessionResponseConsumerDataCompletionHandler_h
#define NWURLSessionResponseConsumerDataCompletionHandler_h
@import Foundation;

#include "NWURLSessionResponseConsumer-Protocol.h"

@class NSString, NSURLResponse;
@protocol OS_dispatch_data;

@interface NWURLSessionResponseConsumerDataCompletionHandler : NSObject<NWURLSessionResponseConsumer> {
  /* instance variables */
  id /* block */ _completionHandler;
  NSURLResponse *_currentResponse;
  NSObject<OS_dispatch_data> *_data;
}

@property (readonly) NSURLResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)task:(id)task deliverResponse:(id)response completionHandler:(id /* block */)handler;
- (void)task:(id)task deliverData:(id)data complete:(BOOL)complete error:(id)error completionHandler:(id /* block */)handler;
@end

#endif /* NWURLSessionResponseConsumerDataCompletionHandler_h */
