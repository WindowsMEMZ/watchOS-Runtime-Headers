//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVAccountInfoProvider_Protocol_h
#define CoreDAVAccountInfoProvider_Protocol_h
@import Foundation;

@protocol CoreDAVAccountInfoProvider <NSObject>
/* instance methods */
- (id)scheme;
- (id)host;
- (long long)port;
- (id)serverRoot;
- (id)user;
- (id)password;
- (id)identityPersist;
- (id)principalURL;
- (id)accountID;
- (id)serverComplianceClasses;
- (id)userAgentHeader;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id /* block */)block;
- (BOOL)handleCertificateError:(id)error;
- (BOOL)shouldFailAllTasks;
@optional
/* instance methods */
- (id)additionalHeaderValues;
- (id)customConnectionProperties;
- (id)clientCertificateInfoProvider;
- (id)oauthInfoProvider;
- (BOOL)handleTrustChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space;
- (BOOL)shouldRetryUnauthorizedTask:(id)task;
- (BOOL)handleShouldUseCredentialStorage;
- (void)noteHomeSetOnDifferentHost:(id)host;
- (BOOL)shouldHandleHTTPCookiesForURL:(id)url;
- (BOOL)shouldSendClientInfoHeaderForURL:(id)url;
- (BOOL)shouldTurnModalOnBadPassword;
- (BOOL)shouldTryRenewingCredential;
- (BOOL)renewCredential;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)elements forTask:(id)task;
- (void)noteFailedNetworkRequestForTask:(id)task;
- (void)noteFailedProtocolRequestForTask:(id)task;
- (void)noteTimeSpentInNetworking:(double)networking forTask:(id)task;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)elements;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (void)noteTimeSpentInNetworking:(double)networking;
- (struct __CFURLStorageSession *)copyStorageSession;
- (BOOL)shouldUseOpportunisticSockets;
- (BOOL)shouldCompressRequests;
- (void)clientTokenRequestedByServer;
- (id)clientToken;
- (void)webLoginRequestedAtURL:(id)url reasonString:(id)string inQueue:(id)queue completionBlock:(id /* block */)block;
- (id)getAppleIDSession;
@end

#endif /* CoreDAVAccountInfoProvider_Protocol_h */
