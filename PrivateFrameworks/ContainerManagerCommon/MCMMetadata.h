//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMMetadata_h
#define MCMMetadata_h
@import Foundation;

#include "MCMMetadataMinimal.h"
#include "MCMConcreteContainerIdentityForLibsystem.h"
#include "MCMContainerPath.h"
#include "MCMFSNode.h"
#include "MCMMetadata-Protocol.h"
#include "MCMUserIdentity.h"

@class NSDictionary, NSNumber, NSString, NSURL, NSUUID;

@interface MCMMetadata : MCMMetadataMinimal<MCMMetadata>

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *userManagedAssetsDirName;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) MCMFSNode *fsNode;
@property (readonly, nonatomic) MCMContainerPath *containerPath;
@property (readonly, nonatomic) NSNumber *schemaVersion;
@property (readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *containerIdentity;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) BOOL existed;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContainerIdentity:(id)identity containerPath:(id)path schemaVersion:(id)version userIdentityCache:(id)cache;
- (id)initWithContainerIdentity:(id)identity info:(id)info containerPath:(id)path userManagedAssetsDirName:(id)name schemaVersion:(id)version dataProtectionClass:(int)class userIdentityCache:(id)cache;
- (id)initWithContainerIdentity:(id)identity info:(id)info containerPath:(id)path userManagedAssetsDirName:(id)name schemaVersion:(id)version dataProtectionClass:(int)class fsNode:(id)node userIdentityCache:(id)cache;
- (id)initByReadingAndValidatingMetadataAtFileURL:(id)url containerPath:(id)path userIdentity:(id)identity containerClass:(unsigned long long)class userIdentityCache:(id)cache error:(id *)error;
- (BOOL)_initFromMetadataInDictionary:(id)dictionary containerPath:(id)path userIdentity:(id)identity containerClass:(unsigned long long)class fsNode:(id)node fileURL:(id)url userIdentityCache:(id)cache error:(id *)error;
- (BOOL)writeMetadataToDiskWithError:(id *)error;
- (BOOL)writeMetadataToFileURL:(id)url options:(unsigned long long)options error:(id *)error;
- (BOOL)verifyWithError:(id *)error;
- (id)metadataBySettingInfoValue:(id)value forKey:(id)key;
- (struct container_object_s *)createLibsystemContainerWithError:(id *)error;
- (id)metadataByChangingDataProtectionClass:(int)class;
- (id)metadataBySettingUserManagedAssetsDirName:(id)name;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)_clearPersistedStatus;
- (BOOL)_persisted;
- (BOOL)_writeFileURL:(id)url dictionary:(id)dictionary options:(unsigned long long)options error:(id *)error;
@end

#endif /* MCMMetadata_h */
