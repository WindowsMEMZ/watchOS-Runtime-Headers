//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSharingRecipientAuthorizationStoreServerInterface_Protocol_h
#define HKSharingRecipientAuthorizationStoreServerInterface_Protocol_h
@import Foundation;

@protocol HKSharingRecipientAuthorizationStoreServerInterface <NSObject>
/* instance methods */
- (void)remote_fetchSharingAuthorizationsWithCompletion:(id /* block */)completion;
- (void)remote_fetchSharingAuthorizationsMarkedForDeletionWithCompletion:(id /* block */)completion;
- (void)remote_addSharingAuthorizations:(id)authorizations completion:(id /* block */)completion;
- (void)remote_removeSharingAuthorizations:(id)authorizations completion:(id /* block */)completion;
- (void)remote_revokeWithCompletion:(id /* block */)completion;
- (void)remote_registerObservers;
- (void)remote_unregisterObservers;
@end

#endif /* HKSharingRecipientAuthorizationStoreServerInterface_Protocol_h */
