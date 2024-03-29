//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTTranslationSession_h
#define _LTTranslationSession_h
@import Foundation;

#include "_LTRateLimiter.h"
#include "_LTSafariLatencyLoggingRequest.h"
#include "_LTSpeechTranslationDelegate-Protocol.h"
#include "_LTTextTranslationService-Protocol.h"
#include "_LTTranslator.h"

@class NSMutableDictionary, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

@interface _LTTranslationSession : NSObject<_LTSpeechTranslationDelegate> {
  /* instance variables */
  NSMutableDictionary *_outstandingRequests;
  _LTSafariLatencyLoggingRequest *_logging;
  NSString *_sessionID;
  BOOL _waitingForService;
}

@property (retain, nonatomic) _LTTranslator *translator;
@property (retain, nonatomic) NSObject<_LTTextTranslationService> *service;
@property (retain, nonatomic) _LTRateLimiter *rateLimiter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *translationQueue;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSUUID *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTranslator:(id)translator selfLoggingInvocationId:(id)id;
- (id)initForFutureServiceWithSessionID:(id)id selfLoggingInvocationId:(id)id;
- (void)_commonInitWithSuggestedSessionID:(id)id;
- (void)prepareWithService:(id)service;
- (void)_ensureServiceConnection:(id /* block */)connection useDedicatedTextMachPort:(BOOL)port;
- (void)translate:(id)translate;
- (void)translate:(id)translate useDedicatedTextMachPort:(BOOL)port;
- (void)provideFeedback:(id)feedback;
- (void)markFirstParagraphComplete;
- (void)markProgressDone;
- (void)markPageLoaded;
- (void)markPageComplete;
- (void)paragraphTranslation:(id)translation result:(id)result error:(id)error;
@end

#endif /* _LTTranslationSession_h */
