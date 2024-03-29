//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKPlayerCredentialController_h
#define GKPlayerCredentialController_h
@import Foundation;

#include "GKSignInVisibilityManager.h"
#include "GKThreadsafeDictionary.h"

@class ACAccountStore, NSString;

@interface GKPlayerCredentialController : NSObject

@property (retain, nonatomic) ACAccountStore *store;
@property (retain, nonatomic) GKThreadsafeDictionary *primaryCredentialCache;
@property (retain, nonatomic) NSString *gameBundleId;
@property (retain, nonatomic) GKThreadsafeDictionary *allCredentialsCache;
@property (retain, nonatomic) GKSignInVisibilityManager *signInVisibilityManager;
@property (nonatomic) BOOL lastSaveFailed;

/* class methods */
+ (id)accessQueue;
+ (id)sharedController;
+ (void)migrateOldAccountInformation;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)accessQueue;
- (id)_transactAndWait:(id /* block */)wait;
- (void)_transact:(id /* block */)_transact complete:(id /* block */)complete;
- (void)invalidateCredentialCaches;
- (void)accountStoreDidChange:(id)change;
- (void)accountStoreEmailDidChange:(id)change;
- (void)setCredential:(id)credential completionHandler:(id /* block */)handler;
- (void)setPrimaryCredential:(id)credential completionHandler:(id /* block */)handler;
- (void)getAltDSIDFromIDMSForCredential:(id)credential completionHandler:(id /* block */)handler;
- (void)removeAllCredentialsForEnvironment:(long long)environment completionHandler:(id /* block */)handler;
- (void)removeCredential:(id)credential completionHandler:(id /* block */)handler;
- (void)replaceCredential:(id)credential withCredential:(id)credential completionHandler:(id /* block */)handler;
- (id)credentialForPlayer:(id)player environment:(long long)environment;
- (id)credentialForUsername:(id)username environment:(long long)environment;
- (id)allCredentialsForEnvironment:(long long)environment;
- (id)pushCredentialForEnvironment:(long long)environment;
- (id)primaryCredentialForEnvironment:(long long)environment;
- (id)primaryCredentialForEnvironment:(long long)environment accountStore:(id)store;
- (id)suggestedUsername;
@end

#endif /* GKPlayerCredentialController_h */
