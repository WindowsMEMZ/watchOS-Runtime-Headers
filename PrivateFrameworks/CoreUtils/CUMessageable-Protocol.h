//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CUMessageable_Protocol_h
#define CUMessageable_Protocol_h
@import Foundation;

@protocol CUMessageable 
/* instance methods */
- (void)registerEventID:(id)id options:(id)options handler:(id /* block */)handler;
- (void)deregisterEventID:(id)id;
- (void)sendEventID:(id)id event:(id)event options:(id)options completion:(id /* block */)completion;
- (void)registerRequestID:(id)id options:(id)options handler:(id /* block */)handler;
- (void)deregisterRequestID:(id)id;
- (void)sendRequestID:(id)id request:(id)request options:(id)options responseHandler:(id /* block */)handler;
@end

#endif /* CUMessageable_Protocol_h */
