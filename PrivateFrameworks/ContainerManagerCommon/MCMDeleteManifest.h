//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMDeleteManifest_h
#define MCMDeleteManifest_h
@import Foundation;

#include "MCMConcreteContainerIdentity.h"
#include "MCMDeleteManifest-Protocol.h"
#include "MCMUserIdentityCache.h"

@class NSString, NSURL;

@interface MCMDeleteManifest : NSObject<MCMDeleteManifest>

@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (retain, nonatomic) NSURL *readURL;
@property (readonly, nonatomic) NSURL *writeURL;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)managedPathForGlobalContainers;
+ (id)managedPathForUserContainersWithUserIdentityCache:(id)cache;
+ (id)managedPathForUserContainersWithUserIdentityCache:(id)cache forPOSIXUser:(id)posixuser;
+ (id)deleteManifestsForGlobalContainersWithUserIdentityCache:(id)cache;
+ (id)deleteManifestsForUserContainersWithUserIdentityCache:(id)cache;
+ (id)deleteManifestsForUserContainersForPOSIXUser:(id)posixuser userIdentityCache:(id)cache;
+ (id)_materializeContainerIdentityFromManifestPlist:(id)plist userIdentityCache:(id)cache error:(id *)error;
+ (id)_materializeContainerIdentityFromManifestPlistV1:(id)v1 userIdentityCache:(id)cache error:(id *)error;
+ (id)_deleteManifestsFromURL:(id)url userIdentityCache:(id)cache error:(id *)error;
+ (id)_deleteManifestsFromFileURLs:(id)urls userIdentityCache:(id)cache;
+ (id)_deleteManifestsForManagedPath:(id)path userIdentityCache:(id)cache;

/* instance methods */
- (id)initWithConcreteContainerIdentity:(id)identity userIdentityCache:(id)cache;
- (id)initFromURL:(id)url userIdentityCache:(id)cache error:(id *)error;
- (id)deleteManifestAfterWritingUsingLibraryRepairForUser:(id)user error:(id *)error;
- (id)deleteManifestAfterRemovingUsingLibraryRepairForUser:(id)user error:(id *)error;
- (id)fullDescription;
- (BOOL)isEqualToDeleteManifest:(id)manifest;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_urlForDeleteManifestWithContainerIdentity:(id)identity;
- (id)_stableFileNameForDeleteOperationPlistWithContainerIdentity:(id)identity;
@end

#endif /* MCMDeleteManifest_h */
