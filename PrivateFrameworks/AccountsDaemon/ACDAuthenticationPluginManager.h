//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 956.0.0.0.0
//
#ifndef ACDAuthenticationPluginManager_h
#define ACDAuthenticationPluginManager_h
@import Foundation;

#include "ACDQueueDictionary.h"

@class ACRateLimiter, NSLock, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ACDAuthenticationPluginManager : NSObject {
  /* instance variables */
  ACDQueueDictionary *_verificationHandlerQueues;
  ACDQueueDictionary *_renewalHandlerQueues;
  ACDQueueDictionary *_discoveryHandlerQueues;
  NSMutableSet *_keysForRateExceededBugSent;
  NSLock *_verificationHandlersLock;
  NSLock *_renewalHandlersLock;
  NSLock *_discoveryHandlersLock;
  NSMutableDictionary *_authenticationPluginsByType;
  NSObject<OS_dispatch_queue> *_authenticationPluginQueue;
}

@property (retain) ACRateLimiter *renewalRateLimiter;

/* instance methods */
- (id)init;
- (BOOL)isPushSupportedForAccount:(id)account;
- (void)credentialForAccount:(id)account client:(id)client store:(id)store handler:(id /* block */)handler;
- (void)verifyCredentialsForAccount:(id)account accountStore:(id)store options:(id)options handler:(id /* block */)handler;
- (void)_handleVerificationCompletionForAccount:(id)account verifiedAccount:(id)account error:(id)error store:(id)store shouldSave:(BOOL)save;
- (unsigned long long)renewalCredentialTimeout;
- (void)renewCredentialsForAccount:(id)account accountStore:(id)store options:(id)options completion:(id /* block */)completion;
- (BOOL)_renewalRequestIsWithinLimitsForAccount:(id)account accountStore:(id)store;
- (void)_handleRenewalCompletionResult:(long long)result forAccount:(id)account renewalID:(id)id accountStore:(id)store error:(id)error;
- (void)discoverPropertiesForAccount:(id)account accountStore:(id)store options:(id)options completion:(id /* block */)completion;
- (void)_handleDiscoveryCompletionResult:(id)result forAccount:(id)account discoveryID:(id)id accountStore:(id)store shouldSave:(BOOL)save error:(id)error;
- (id)_pluginForAuthenticationType:(id)type;
- (id)_authenticationTypeForAccount:(id)account;
- (id)_authCapableParentAccountForAccount:(id)account;
- (id)_descriptionForRenewalResult:(long long)result;
- (id)_sanitizeError:(id)error;
- (id)_unsanitizeOptionsDictionary:(id)dictionary;
@end

#endif /* ACDAuthenticationPluginManager_h */
