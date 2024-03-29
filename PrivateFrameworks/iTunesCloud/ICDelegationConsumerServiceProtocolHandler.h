//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICDelegationConsumerServiceProtocolHandler_h
#define ICDelegationConsumerServiceProtocolHandler_h
@import Foundation;

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ICDelegationConsumerServiceProtocolHandler : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_calloutQueue;
  NSOperationQueue *_operationQueue;
}

/* instance methods */
- (id)init;
- (void)getResponseForFinishDelegationRequest:(id)request withSessionIDToRequestInfoMap:(id)map completionHandler:(id /* block */)handler;
- (void)getResponseForStartDelegationRequest:(id)request requestContext:(id)context withCompletionHandler:(id /* block */)handler;
@end

#endif /* ICDelegationConsumerServiceProtocolHandler_h */
