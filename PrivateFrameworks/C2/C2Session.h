//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.0.0.0.0
//
#ifndef C2Session_h
#define C2Session_h
@import Foundation;

#include "C2RequestDelegate-Protocol.h"
#include "C2RequestOptions.h"
#include "C2SessionDelegate-Protocol.h"
#include "C2SessionTaskDelegate-Protocol.h"
#include "NSURLSessionDataDelegate-Protocol.h"
#include "NSURLSessionDataDelegatePrivate-Protocol.h"
#include "NSURLSessionDelegate-Protocol.h"
#include "NSURLSessionTaskDelegate-Protocol.h"
#include "NSURLSessionTaskDelegatePrivate-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSURLSession;

@interface C2Session : NSObject<NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, C2RequestDelegate, C2SessionTaskDelegate>

@property (retain, nonatomic) NSString *originalHost;
@property (retain, nonatomic) NSString *routeHost;
@property (nonatomic) double routeLastUpdated;
@property (retain, nonatomic) NSMutableSet *didCompleteWithErrorRunningTasks;
@property (nonatomic) BOOL isComplete;
@property (retain, nonatomic) NSObject<C2SessionDelegate> *sessionDelegate;
@property (nonatomic) long long emptyTimestamp;
@property (readonly, nonatomic) NSMutableDictionary *wrappedTaskByTaskIdentifier;
@property (readonly, nonatomic) NSOperationQueue *queue;
@property (copy, nonatomic) id /* block */ testBehavior_sessionInvalidated_cfnetwork;
@property (copy, nonatomic) id /* block */ testBehavior_sessionInvalidated_shouldInvalidate;
@property (copy, nonatomic) id /* block */ testBehavior_cleanupRetainCycle;
@property (copy, nonatomic) id /* block */ testBehavior_callbackHung;
@property (readonly, nonatomic) NSString *sessionConfigurationName;
@property (readonly, nonatomic) NSURLSession *session;
@property (readonly, copy, nonatomic) C2RequestOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)portFromURL:(id)url;

/* instance methods */
- (id)initWithSessionConfigurationName:(id)name routeHost:(id)host options:(id)options sessionDelegate:(id)delegate;
- (void)dealloc;
- (id)createTaskWithOptions:(id)options delegate:(id)delegate;
- (void)_recalculateSessionDelegateQueuePriority;
- (id)addTask:(id)task withDescription:(id)description request:(id)request;
- (void)removeTask:(id)task;
- (BOOL)shouldInvalidateAndCancel;
- (void)invalidateAndCancel;
- (void)testBehavior_triggerSessionExpiry;
- (void)testBehavior_triggerCallbackHang;
- (void)C2Session:(id)session sessionTask:(id)task updatedRoute:(id)route;
- (void)cleanupRetainCycle;
- (void)C2Session:(id)session didBecomeInvalidWithError:(id)error;
- (void)C2Session:(id)session task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession didBecomeInvalidWithError:(id)error;
- (void)sessionTaskDelegateCallbackHelper:(id)helper task:(id)task block:(id /* block */)block;
- (void)URLSession:(id)urlsession task:(id)task willPerformHTTPRedirection:(id)httpredirection newRequest:(id)request completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task needNewBodyStream:(id /* block */)stream;
- (void)URLSession:(id)urlsession task:(id)task didSendBodyData:(long long)data totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send;
- (void)URLSession:(id)urlsession task:(id)task didFinishCollectingMetrics:(id)metrics;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession task:(id)task _willSendRequestForEstablishedConnection:(id)connection completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession _taskIsWaitingForConnection:(id)connection;
- (void)URLSession:(id)urlsession task:(id)task _conditionalRequirementsChanged:(BOOL)changed;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveData:(id)data;
- (void)URLSession:(id)urlsession _willRetryBackgroundDataTask:(id)task withError:(id)error;
@end

#endif /* C2Session_h */
