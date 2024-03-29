//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKAppleIDServerUIEventHandler_Protocol_h
#define AKAppleIDServerUIEventHandler_Protocol_h
@import Foundation;

@protocol AKAppleIDServerUIEventHandler <NSObject>
/* instance methods */
- (void)reauthenticateWithContext:(id)context withCompletion:(id /* block */)completion;
- (void)fetchUserInformationForAltDSID:(id)dsid completion:(id /* block */)completion;
- (void)updateAccountUsernameForAltDSID:(id)dsid withHarvestedData:(id)data;
- (void)startCDPRepairWithContext:(id)context withAdditionalData:(id)data completion:(id /* block */)completion;
- (void)updateStateWithExternalAuthenticationResponse:(id)response forContext:(id)context withAuthController:(id)controller completion:(id /* block */)completion;
- (void)postCDPFollowUpForError:(id)error;
@end

#endif /* AKAppleIDServerUIEventHandler_Protocol_h */
