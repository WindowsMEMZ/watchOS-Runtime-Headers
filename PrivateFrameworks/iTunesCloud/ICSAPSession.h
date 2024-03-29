//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICSAPSession_h
#define ICSAPSession_h
@import Foundation;

#include "ICFPSAPContext.h"
#include "ICStoreRequestContext.h"

@class NSOperationQueue, NSURL;
@protocol OS_dispatch_queue;

@interface ICSAPSession : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_calloutQueue;
  NSOperationQueue *_operationQueue;
  NSURL *_certificateURL;
  NSURL *_setupURL;
  ICFPSAPContext *_sapContext;
  NSOperationQueue *_prepareFairPlayContextOperationQueue;
  ICStoreRequestContext *_requestContext;
}

@property (readonly, nonatomic) NSOperationQueue *_prepareFairPlayContextOperationQueue;
@property (retain, nonatomic) ICFPSAPContext *_sapContext;
@property (readonly, copy, nonatomic) NSURL *_certificateURL;
@property (readonly, copy, nonatomic) ICStoreRequestContext *_requestContext;
@property (readonly, copy, nonatomic) NSURL *_setupURL;
@property (readonly, nonatomic) unsigned int sapVersion;

/* class methods */
+ (id)sharedSAPSessionWithVersion:(unsigned int)version URLBag:(id)urlbag requestContext:(id)context;

/* instance methods */
- (id)_initWithVersion:(unsigned int)version certificateURL:(id)url setupURL:(id)url requestContext:(id)context;
- (void)signData:(id)data withCompletionHandler:(id /* block */)handler;
- (void)verifySignatureData:(id)data forData:(id)data withCompletionHandler:(id /* block */)handler;
- (void)_setSAPContext:(id)sapcontext;
@end

#endif /* ICSAPSession_h */
