//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSHomeKitManager_h
#define IDSHomeKitManager_h
@import Foundation;

#include "IDSDaemonListenerProtocol-Protocol.h"
#include "_IDSGenericCompletionHandler.h"

@class NSString;

@interface IDSHomeKitManager : NSObject<IDSDaemonListenerProtocol> {
  /* instance variables */
  _IDSGenericCompletionHandler *_getServiceUserIDsCompletion;
  _IDSGenericCompletionHandler *_getAdminAccessTokensCompletion;
  _IDSGenericCompletionHandler *_getConsentTokensCompletion;
  _IDSGenericCompletionHandler *_getUserAccessTokensCompletion;
  _IDSGenericCompletionHandler *_refreshUserAccessTokensCompletion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)getServiceUserIDsWithCompletionBlock:(id /* block */)block queue:(id)queue;
- (void)getAdminAccessTokensWithWithServiceUserID:(id)id accessoryID:(id)id pairingToken:(id)token completionBlock:(id /* block */)block queue:(id)queue;
- (void)getConsentTokensWithServiceUserID:(id)id accessoryIDs:(id)ids adminID:(id)id completionBlock:(id /* block */)block queue:(id)queue;
- (void)getUserAccessTokensWithServiceUserID:(id)id userID:(id)id userHandle:(id)handle accessoryRequests:(id)requests completionBlock:(id /* block */)block queue:(id)queue;
- (void)refreshUserAccessTokensWithServiceUserID:(id)id userID:(id)id accessoryRequests:(id)requests completionBlock:(id /* block */)block queue:(id)queue;
- (void)serviceUserIDs:(id)ids error:(id)error;
- (void)adminAccessTokens:(id)tokens error:(id)error;
- (void)consentTokens:(id)tokens error:(id)error;
- (void)userAccessTokens:(id)tokens error:(id)error;
- (void)refreshUserAccessTokens:(id)tokens error:(id)error;
@end

#endif /* IDSHomeKitManager_h */
