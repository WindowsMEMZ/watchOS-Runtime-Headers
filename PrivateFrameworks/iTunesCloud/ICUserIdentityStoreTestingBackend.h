//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICUserIdentityStoreTestingBackend_h
#define ICUserIdentityStoreTestingBackend_h
@import Foundation;

#include "ICLocalStoreAccountProperties.h"
#include "ICUserIdentityStoreBackend-Protocol.h"
#include "ICUserIdentityStoreBackendDelegate-Protocol.h"

@class NSMutableDictionary, NSNumber, NSString;

@interface ICUserIdentityStoreTestingBackend : NSObject<ICUserIdentityStoreBackend> {
  /* instance variables */
  NSNumber *_activeAccountDSID;
  NSNumber *_activeLockerAccountDSID;
  NSMutableDictionary *_identityProperties;
  ICLocalStoreAccountProperties *_localStoreAccountProperties;
}

@property (weak, nonatomic) NSObject<ICUserIdentityStoreBackendDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultActiveAccountDSID;
+ (void)setDefaultActiveAccountDSID:(id)dsid;
+ (id)defaultActiveLockerAccountDSID;
+ (void)setDefaultActiveLockerAccountDSID:(id)dsid;
+ (id)defaultStorefrontIdentifier;
+ (void)setDefaultStorefrontIdentifier:(id)identifier;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)activeAccountDSIDWithError:(id *)error;
- (BOOL)updateActiveAccountDSID:(id)dsid error:(id *)error;
- (id)activeLockerAccountDSIDWithError:(id *)error;
- (BOOL)updateActiveLockerAccountDSID:(id)dsid error:(id *)error;
- (BOOL)disableLockerAccountDSID:(id)dsid error:(id *)error;
- (id)identityPropertiesForDSID:(id)dsid error:(id *)error;
- (BOOL)setIdentityProperties:(id)properties forDSID:(id)dsid error:(id *)error;
- (id)identityPropertiesForPrimaryICloudAccountWithError:(id *)error;
- (void)removeIdentityForDSID:(id)dsid completion:(id /* block */)completion;
- (BOOL)replaceIdentityProperties:(id)properties forDSID:(id)dsid error:(id *)error;
- (void)synchronize;
- (id)verificationContextForAccountEstablishmentWithError:(id *)error;
- (id)verificationContextForDSID:(id)dsid error:(id *)error;
- (id)localStoreAccountPropertiesWithError:(id *)error;
- (BOOL)setLocalStoreAccountProperties:(id)properties error:(id *)error;
- (id)allStoreAccountDSIDsWithError:(id *)error;
- (id)allManageableStoreAccountDSIDsWithError:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)_propertiesToSaveForProperties:(id)properties;
@end

#endif /* ICUserIdentityStoreTestingBackend_h */
