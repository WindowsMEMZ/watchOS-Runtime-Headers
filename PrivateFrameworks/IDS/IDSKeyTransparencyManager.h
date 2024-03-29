//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSKeyTransparencyManager_h
#define IDSKeyTransparencyManager_h
@import Foundation;

@class NSDictionary;

@interface IDSKeyTransparencyManager : NSObject

@property (retain, nonatomic) NSDictionary *applicationToVerificationInfoProviders;

/* instance methods */
- (id)init;
- (id)verificationInfoProviderForApplication:(id)application;
- (id)verificationInfoProviderIdForApplication:(id)application;
- (void)getKeyTransparencyOptInEligiblityForApplication:(id)application withCompletion:(id /* block */)completion;
- (void)sendOptInUpdateForApplications:(id)applications withCompletion:(id /* block */)completion;
- (void)sendOptInUpdateForApplicationsOptInState:(id)state withCompletion:(id /* block */)completion;
- (void)sendOptInUpdateRequest:(id)request withCompletion:(id /* block */)completion;
- (void)fetchKTRegistrationStatusWithCompletion:(id /* block */)completion;
- (void)registrationDataNeedsUpdate;
- (void)peerVerificationFinishedWithResults:(id)results;
- (void)cacheClearRequest:(id)request;
@end

#endif /* IDSKeyTransparencyManager_h */
