//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKOrganDonationConnectionManager_h
#define HKOrganDonationConnectionManager_h
@import Foundation;

#include "HKOrganDonationConnectionManagerDelegate-Protocol.h"
#include "NSURLSessionDataDelegate-Protocol.h"

@class HKAnalyticsEventSubmissionManager, HKHealthStore, NSMapTable, NSString, NSTimer, NSURLSession;

@interface HKOrganDonationConnectionManager : NSObject<NSURLSessionDataDelegate> {
  /* instance variables */
  BOOL _accessTokenStatus;
  long long _tokenRefreshRetryCount;
  NSMapTable *_taskQueue;
  long long _managerState;
}

@property (retain, nonatomic) NSURLSession *defaultSession;
@property (retain, nonatomic) NSString *refreshToken;
@property (retain, nonatomic) NSString *accessToken;
@property (weak, nonatomic) NSTimer *accessTokenInvalidationTimer;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKAnalyticsEventSubmissionManager *analyticsEventSubmissionManager;
@property (weak, nonatomic) NSObject<HKOrganDonationConnectionManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_host;
+ (id)_gatewayHost;
+ (id)_scheme;
+ (id)_port;
+ (long long)_hostConfiguration;
+ (BOOL)_organDonationDisabled;
+ (BOOL)hasStoredRegistrant;
+ (BOOL)isOrganDonationRegistrationAvailable;
+ (void)openDonateLifeMicroSiteInSafari;
+ (long long)registrationSubmissionHostConfiguration;
+ (void)refreshOrganDonationFeatureAvailability;
+ (id)_tokenWithIdentifier:(id)identifier shouldReturnData:(BOOL)data;
+ (id)_keychainQueryDictionaryForIdentifier:(id)identifier;
+ (void)organDonationSignificantDate:(id /* block */)date;
+ (id)storeDemoModeModifiedDate;
+ (BOOL)shouldShowStoreDemoOrganDonation;

/* instance methods */
- (id)initWithHealthStore:(id)store;
- (void)cleanUp;
- (void)_transitionToState:(long long)state;
- (void)submitRegistrant:(id)registrant completion:(id /* block */)completion;
- (void)_refreshAccessTokenIfNeeded;
- (void)refreshBearerTokenWithRefreshToken:(id)token completion:(id /* block */)completion;
- (void)reloadRegistrantWithCompletion:(id /* block */)completion;
- (void)updateRegistrantWithParams:(id)params completion:(id /* block */)completion;
- (void)deleteRegistrantWithCompletion:(id /* block */)completion;
- (void)openRegisterMeSiteInSafariIfAuthenticated;
- (void)_scheduleAccessTokenDependentRequest:(id)request withCompletion:(id /* block */)completion;
- (id)_urlWithPath:(id)path;
- (void)submitOrganDonationEventWithErrorType:(int)type;
- (id)_jsonObjectWithData:(id)data response:(id)response;
- (id)_genericJSONDataTaskWithRequest:(id)request completionHandler:(id /* block */)handler;
- (id)_jsonBodyPostRequestWithURL:(id)url method:(id)method postData:(id)data bearerToken:(id)token;
- (id)_getRequestWithURL:(id)url bearerToken:(id)token;
- (void)_sendQueuedTokenDependentRequests;
- (void)_flushTokenDependentRequestsWithStatus:(long long)status;
- (void)_updateAccessTokenAndScheduleInvalidationTimer:(id)timer expiresIn:(double)in;
- (void)_invalidateAccessToken:(id)token;
- (void)_handleURLTaskError:(id)error withCompletion:(id /* block */)completion;
- (void)_handleServerErrorWithResponse:(id)response originRequest:(id)request payload:(id)payload completion:(id /* block */)completion;
- (void)_upsertTokenInKeychain:(id)keychain identifier:(id)identifier;
- (void)_deleteTokenWithIdentifier:(id)identifier;
- (id)_registrationJWTWithRegistrant:(id)registrant;
- (id)_refreshBearerTokenJWTWithRefreshToken:(id)token;
- (id)_jwtWithPayload:(id)payload grantType:(id)type;
- (id)_base64URLEncoding:(id)urlencoding;
- (id)jwtHeader;
- (id)payload;
- (id)jwtPayloadWithRegistrant:(id)registrant;
@end

#endif /* HKOrganDonationConnectionManager_h */
