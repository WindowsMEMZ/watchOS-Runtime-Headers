//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AARequester_h
#define AARequester_h
@import Foundation;

#include "NSOperation.h"
#include "AARequest.h"
#include "AAResponse.h"
#include "NSURLConnectionDelegate-Protocol.h"

@class AKAppleIDSession, NSHTTPURLResponse, NSMutableData, NSString, NSURLConnection;
@protocol OS_dispatch_queue;

@interface AARequester : NSOperation<NSURLConnectionDelegate> {
  /* instance variables */
  AARequest *_request;
  AAResponse *_response;
  NSURLConnection *_urlConnection;
  id /* block */ _handler;
  NSMutableData *_data;
  NSHTTPURLResponse *_httpResponse;
  Class _responseClass;
  BOOL _isFinished;
  AKAppleIDSession *_appleIDSession;
  BOOL _shouldRetry;
  BOOL _isCanceled;
}

@property (nonatomic) BOOL isExecuting;
@property BOOL finished;
@property BOOL canceled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRequest:(id)request handler:(id /* block */)handler;
- (void)cancel;
- (void)start;
- (void)_kickOffRequest:(id)request;
- (void)_callHandler;
- (void)__unsafe_callHandler;
- (void)connection:(id)connection willSendRequestForAuthenticationChallenge:(id)challenge;
- (void)connection:(id)connection didReceiveResponse:(id)response;
- (void)connection:(id)connection didReceiveData:(id)data;
- (void)connectionDidFinishLoading:(id)loading;
- (void)connection:(id)connection didFailWithError:(id)error;
- (BOOL)isFinished;
- (BOOL)isCanceled;
@end

#endif /* AARequester_h */
