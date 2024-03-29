//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1490.0.4.0.0
//
#ifndef __NSCFURLProxySessionConnection_h
#define __NSCFURLProxySessionConnection_h
@import Foundation;

#include "__NSCFURLSessionConnection.h"
#include "NSCachedURLResponse.h"
#include "NSURLRequest.h"
#include "NSURLSessionDataDelegate-Protocol.h"
#include "NSURLSessionDataDelegatePrivate-Protocol.h"
#include "NSURLSessionDelegate_Internal-Protocol.h"
#include "NSURLSessionTask.h"
#include "NSURLSessionTaskDelegatePrivate-Protocol.h"

@class NSArray, NSString;

@interface __NSCFURLProxySessionConnection : __NSCFURLSessionConnection<NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegatePrivate, NSURLSessionDelegate_Internal> {
  /* instance variables */
  NSURLSessionTask *_proxyTask;
  NSURLSessionTask *_cacheTask;
  BOOL _shouldCancelOnCacheTaskCompletion;
  BOOL _clientWantsCacheOnly;
  BOOL _completedLocalCacheLookup;
  BOOL _requestIsUncacheable;
  BOOL _handledNeedNewBodyStream;
  NSCachedURLResponse *_cachedResponseForConditionalRequest;
  NSURLRequest *_conditionalRequest;
  NSArray *_cachedResponseDataArray;
  NSString *_originalUploadFilePath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTask:(id)task delegate:(id)delegate delegateQueue:(id)queue;
- (void)dealloc;
- (void)cancel;
- (void)suspend;
- (void)resume;
- (void)setPoolPriority:(long long)priority;
- (void)setPriorityHint:(float)hint incremental:(BOOL)incremental;
- (void)expectedProgressTargetChanged;
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)version;
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)version;
- (void)setIsDownload:(BOOL)download;
- (void)URLSession:(id)urlsession didBecomeInvalidWithError:(id)error;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task willPerformHTTPRedirection:(id)httpredirection newRequest:(id)request completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession dataTask:(id)task _didReceiveData:(id)data completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task didSendBodyData:(long long)data totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send;
- (void)URLSession:(id)urlsession task:(id)task needNewBodyStream:(id /* block */)stream;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession task:(id)task _isWaitingForConnectionWithReason:(long long)reason;
- (void)URLSession:(id)urlsession task:(id)task _willSendRequestForEstablishedConnection:(id)connection completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task _conditionalRequirementsChanged:(BOOL)changed;
- (void)URLSession:(id)urlsession task:(id)task didFinishCollectingMetrics:(id)metrics;
- (void)URLSession:(id)urlsession task:(id)task didReceiveInformationalResponse:(id)response;
- (void)_URLSession:(id)urlsession task:(id)task getAuthHeadersForResponse:(id)response completionHandler:(id /* block */)handler;
@end

#endif /* __NSCFURLProxySessionConnection_h */
