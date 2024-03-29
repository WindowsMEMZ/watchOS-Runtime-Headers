//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSharingAuthorizationManagerObserver_Protocol_h
#define HDSharingAuthorizationManagerObserver_Protocol_h
@import Foundation;

@protocol HDSharingAuthorizationManagerObserver 
/* instance methods */
- (void)sharingAuthorizationManager:(id)manager didAddSharingAuthorizations:(id)authorizations recipientIdentifier:(id)identifier;
- (void)sharingAuthorizationManager:(id)manager didRemoveSharingAuthorizations:(id)authorizations recipientIdentifier:(id)identifier;
- (void)sharingAuthorizationManager:(id)manager didRevokeRecipientWithIdentifier:(id)identifier;
@end

#endif /* HDSharingAuthorizationManagerObserver_Protocol_h */
