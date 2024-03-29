//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVDiscoveryAccountInfo_h
#define CoreDAVDiscoveryAccountInfo_h
@import Foundation;

#include "CoreDAVAccountInfoProvider-Protocol.h"

@class NSData, NSDictionary, NSError, NSSet, NSString, NSURL;

@interface CoreDAVDiscoveryAccountInfo : NSObject<CoreDAVAccountInfoProvider>

@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *serverRoot;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *user;
@property (nonatomic) long long port;
@property (retain, nonatomic) NSData *identityPersist;
@property (retain, nonatomic) NSString *scheme;
@property (retain, nonatomic) NSURL *principalURL;
@property (retain, nonatomic) NSString *accountID;
@property (retain, nonatomic) NSDictionary *serverHeaders;
@property (retain, nonatomic) NSSet *serverComplianceClasses;
@property (retain, nonatomic) NSString *userAgentHeader;
@property (nonatomic) BOOL shouldFailAllTasks;
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSObject<CoreDAVAccountInfoProvider> *backingAccountInfoProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccountInfoProvider:(id)provider;
- (id)url;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id /* block */)block;
- (id)additionalHeaderValues;
- (void)clientTokenRequestedByServer;
- (id)clientToken;
- (id)clientCertificateInfoProvider;
- (id)oauthInfoProvider;
- (BOOL)handleTrustChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (BOOL)handleCertificateError:(id)error;
- (BOOL)shouldTurnModalOnBadPassword;
- (BOOL)shouldRetryUnauthorizedTask:(id)task;
- (BOOL)shouldTryRenewingCredential;
- (BOOL)renewCredential;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space;
- (BOOL)handleShouldUseCredentialStorage;
- (BOOL)shouldHandleHTTPCookiesForURL:(id)url;
- (BOOL)shouldSendClientInfoHeaderForURL:(id)url;
- (struct __CFURLStorageSession *)copyStorageSession;
- (BOOL)shouldUseOpportunisticSockets;
- (id)getAppleIDSession;
- (id)customConnectionProperties;
@end

#endif /* CoreDAVDiscoveryAccountInfo_h */
