//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef __SHManagedSession_h
#define __SHManagedSession_h
@import Foundation;

#include "SHCatalog.h"
#include "SHManagedSessionCustomCatalogDriver.h"
#include "SHMatcherRequest.h"
#include "SHPreparableMatcher-Protocol.h"
#include "SHSession.h"
#include "SHSessionDelegate_Internal-Protocol.h"

@class NSString, NSUUID;
@protocol SHManagedSessionDelegate;

@interface __SHManagedSession : NSObject<SHSessionDelegate_Internal>

@property (readonly, nonatomic) NSUUID *sharedRequestID;
@property (readonly, nonatomic) SHSession *session;
@property (readonly, nonatomic) NSObject<SHPreparableMatcher> *shazamServiceConnection;
@property (readonly, nonatomic) SHManagedSessionCustomCatalogDriver *sessionDriver;
@property (retain, nonatomic) SHMatcherRequest *inflightRequest;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (weak, nonatomic) NSObject<SHManagedSessionDelegate> *delegate;
@property (nonatomic) BOOL sendNotifications;
@property (nonatomic) BOOL enableLiveActivity;
@property (readonly, nonatomic) SHCatalog *catalog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPartnerName:(id)name;
- (id)init;
- (id)initWithCatalog:(id)catalog;
- (id)initWithCatalog:(id)catalog matcher:(id)matcher sessionDriver:(id)driver serviceConnection:(id)connection;
- (void)matchAmbientAudioSnippet;
- (void)matchAmbientAudioSnippetUntilDeadline:(id)deadline;
- (void)cancel;
- (BOOL)isUsingCustomCatalog:(id)catalog;
- (void)stopMatchingAmbientAudioSnippet;
- (void)ensureCallerHasRecordTCCWithCompletionHandler:(id /* block */)handler;
- (void)prepareWithCompletionHandler:(id /* block */)handler;
- (void)singleMatchWithCompletionHandler:(id /* block */)handler;
- (void)matchWithCallback:(id /* block */)callback;
- (void)prepareMatchWithPreparedCallback:(id /* block */)callback withCompletionHandler:(id /* block */)handler;
- (void)session:(id)session didFindMatch:(id)match;
- (void)session:(id)session didNotFindMatchForSignature:(id)signature error:(id)error;
- (BOOL)session:(id)session shouldAttemptToMatchSignature:(id)signature;
- (void)session:(id)session didProduceResponse:(id)response;
- (void)finishedSession:(id)session;
- (void)didCalculateSpectralData:(id)data;
@end

#endif /* __SHManagedSession_h */
