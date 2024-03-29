//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMClientIdentity_h
#define MCMClientIdentity_h
@import Foundation;

#include "MCMAllows-Protocol.h"
#include "MCMClientCodeSignInfo-Protocol.h"
#include "MCMPOSIXUser.h"
#include "MCMUserIdentity.h"
#include "NSCopying-Protocol.h"

@class NSURL;

@interface MCMClientIdentity : NSObject<MCMAllows, NSCopying>

@property (readonly, nonatomic) int posixPID;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly, nonatomic) BOOL sandboxed;
@property (readonly, nonatomic) struct { unsigned int x0[8] } realAuditToken;
@property (readonly, nonatomic) struct { unsigned int x0[8] } effectiveAuditToken;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) BOOL kernel;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) NSURL *sandboxContainerURL;
@property (readonly, nonatomic) NSObject<MCMClientCodeSignInfo> *codeSignInfo;
@property (readonly, nonatomic) BOOL extension;
@property (readonly, nonatomic) BOOL cached;

/* class methods */
+ (id)anonymousPrivilegedClientIdentityWithUserIdentity:(id)identity;
+ (id)privilegedClientIdentityWithUserIdentity:(id)identity kernel:(BOOL)kernel;

/* instance methods */
- (id)init;
- (id)initInternal;
- (id)initWithPOSIXUser:(id)posixuser POSIXPID:(int)posixpid platform:(unsigned int)platform userIdentity:(id)identity effectiveAuditToken:(struct { unsigned int x0[8] })token realAuditToken:(struct { unsigned int x0[8] })token codeSignInfo:(id)info extension:(BOOL)extension sandboxed:(BOOL)sandboxed sandboxContainerURL:(id)url kernel:(BOOL)kernel;
- (struct container_client { char * x0; unsigned int x1; char * x2; unsigned int x3; unsigned int x4; struct { unsigned int x0[8] } x5; int x6; BOOL x7; BOOL x8; BOOL x9; id x10; } *)createLibsystemClient;
- (id)clientIdentityByChangingCached:(BOOL)cached;
- (BOOL)isAllowedToLookupAllContainersOfClass:(unsigned long long)class;
- (BOOL)isAllowedToLookupContainerIdentity:(id)identity;
- (BOOL)isAllowedToAccessContainerIdentity:(id)identity error:(unsigned long long *)error;
- (BOOL)isAllowedToLookupGroupContainersOfClass:(unsigned long long)class ownedByIdentifiers:(id)identifiers;
- (BOOL)isAllowedToLookupViaPrivateEntitlementWithClass:(unsigned long long)class identifier:(id)identifier;
- (BOOL)isAllowedToWipePlugInDataContainerWithIdentifier:(id)identifier;
- (BOOL)isAllowedToControlCaches;
- (BOOL)isAllowedToReplaceContainers;
- (BOOL)isAllowedToAccessInfoMetadata;
- (BOOL)isAllowedToRecreateContainerStructure;
- (BOOL)isAllowedToRegenerateDirectoryUUIDs;
- (BOOL)isAllowedToDelete;
- (BOOL)isAllowedToWipeAnyDataContainer;
- (BOOL)isAllowedToTest;
- (BOOL)isAllowedToAccessCodesignMapping;
- (BOOL)isAllowedToSetDataProtection;
- (BOOL)isAllowedToRestoreContainer;
- (BOOL)isAllowedToStartDataMigration;
- (BOOL)isAllowedToStartUserDataMigration;
- (BOOL)isAllowedToStageSharedContent;
- (BOOL)isAllowedToAccessUserAssets;
- (BOOL)isAllowedToReadReferences;
- (BOOL)isAllowedToChangeReferences;
- (BOOL)needsSandboxExtensionForContainerWithClass:(unsigned long long)class identifier:(id)identifier;
- (char *)issueSandboxExtensionWithMetadata:(id)metadata legacyExtensionPolicy:(BOOL)policy error:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)shortDescription;
- (BOOL)isSandboxed;
- (BOOL)isKernel;
- (BOOL)isExtension;
@end

#endif /* MCMClientIdentity_h */
