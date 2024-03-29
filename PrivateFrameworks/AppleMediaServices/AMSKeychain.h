//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSKeychain_h
#define AMSKeychain_h
@import Foundation;

@interface AMSKeychain : NSObject
/* class methods */
+ (undefined *)secItemAddFunc;
+ (void)setSecItemAddFunc:(undefined *)func;
+ (undefined *)secItemCopyMatchingFunc;
+ (void)setSecItemCopyMatchingFunc:(undefined *)func;
+ (id)certificateChainStringsForOptions:(id)options error:(id *)error;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } *)copyPrivateKeyWithContext:(id)context options:(id)options error:(id *)error;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } *)copyCertificatePrivateKeyWithContext:(id)context account:(id)account options:(id)options error:(id *)error;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } *)copyPrivateKeyWithContext:(id)context account:(id)account options:(id)options error:(id *)error;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } *)copyPublicKeyForAccount:(id)account options:(id)options error:(id *)error;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } *)copyPublicKeyForOptions:(id)options error:(id *)error;
+ (BOOL)deleteCertificateChainWithOptions:(id)options error:(id *)error;
+ (BOOL)storePrimaryCert:(struct __SecCertificate *)cert intermediateCert:(struct __SecCertificate *)cert privateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } *)key options:(id)options error:(id *)error;
+ (BOOL)performForwardKeyMigrationForDSID:(id)dsid forceMigration:(BOOL)migration;
+ (id)resumptionHeaders;
+ (void)stashResumptionHeaders:(id)headers;
+ (BOOL)stashResumptionHeaders:(id)headers error:(id *)error;
+ (BOOL)deleteKeyPairWithOptions:(id)options error:(id *)error;
+ (id)legacyAttestationForOptions:(id)options error:(id *)error;
+ (id)certificateKeychainLabelsForOptions:(id)options;
+ (id)keychainLabelForOptions:(id)options;
+ (struct __SecAccessControl *)copyAccessControlRefWithAccount:(id)account options:(id)options error:(id *)error;
+ (struct __SecAccessControl *)createAccessControlRefWithOptions:(id)options error:(id *)error;
+ (id)_extendedConstraintsWithOptions:(id)options;
+ (id)_primaryConstraints;
+ (id)_primaryConstraintsForMac;
+ (id)_primaryConstraintsForReality;
+ (id)_primaryConstraintsForWatch;
+ (id)_primaryConstraintsWithOptions:(id)options;
+ (id)_certificatePrivateKeyLabelForOptions:(id)options;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } *)_copyLegacyPrivateKeyForOptions:(id)options error:(id *)error;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } *)_copyLegacyPublicKeyForOptions:(id)options error:(id *)error;
+ (void)_deleteResumptionHeaders;
+ (BOOL)_generateLegacyKeypairForOptions:(id)options error:(id *)error;
+ (id)_legacyAttestationForOptions:(id)options error:(id *)error;
+ (id)_resumptionHeadersQuery;
+ (id)publicKeyHeaderWithAccount:(id)account options:(id)options signatureResult:(id)result;
@end

#endif /* AMSKeychain_h */
