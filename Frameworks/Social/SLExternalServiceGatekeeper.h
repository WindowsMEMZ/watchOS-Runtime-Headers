//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 756.0.0.0.0
//
#ifndef SLExternalServiceGatekeeper_h
#define SLExternalServiceGatekeeper_h
@import Foundation;

#include "NSURLSessionTaskDelegate-Protocol.h"

@class NSString, NSURL;

@interface SLExternalServiceGatekeeper : NSObject<NSURLSessionTaskDelegate> {
  /* instance variables */
  NSString *_redirectHost;
  NSURL *_url;
  id /* block */ _completion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initForPermissionToAccessURL:(id)url fromURLString:(id)urlstring completion:(id /* block */)completion;
- (BOOL)_gatekeepingIsNotAvailable;
- (void)_completeWithURLToLoad:(id)load error:(id)error;
- (void)URLSession:(id)urlsession task:(id)task willPerformHTTPRedirection:(id)httpredirection newRequest:(id)request completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession didBecomeInvalidWithError:(id)error;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
@end

#endif /* SLExternalServiceGatekeeper_h */
