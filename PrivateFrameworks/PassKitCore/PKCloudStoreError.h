//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKCloudStoreError_h
#define PKCloudStoreError_h
@import Foundation;

#include "NSError.h"

@interface PKCloudStoreError : NSError
/* class methods */
+ (id)errorWithDomain:(id)domain code:(long long)code userInfo:(id)info;
+ (BOOL)_isCloudKitErrorDomain:(id)domain;

/* instance methods */
- (id)initWithDomain:(id)domain code:(long long)code userInfo:(id)info;
- (id)initWithError:(id)error;
- (id)errorForPartialErrorWithObject:(id)object;
- (BOOL)isChangeTokenExpired;
- (BOOL)isZoneNotFoundError;
- (BOOL)isPartialError;
- (BOOL)isPartialErrorWithUnkownItems;
- (BOOL)isUnrecoverableDecryptionError;
- (BOOL)isManateeNotAvailableError;
- (BOOL)isNetworkUnavailable;
- (BOOL)isAccountUnavailable;
- (BOOL)isKeychainSyncingInProgress;
- (BOOL)isPCSError;
- (BOOL)isInitializationTimeOutError;
- (BOOL)isUnknownItemError;
- (BOOL)isParticipantMayNeedVerificationError;
- (BOOL)isConflictDetected;
- (BOOL)isAuthenticationOrQuotaError;
- (id)allZoneIDs;
- (id)_objectsOfClassTypeFromPartialErrors:(Class)errors;
- (long long)_code;
- (id)_partialErrorsDictionary;
- (id)_allPartialErrors;
@end

#endif /* PKCloudStoreError_h */
