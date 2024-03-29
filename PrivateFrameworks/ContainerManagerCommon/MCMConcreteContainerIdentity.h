//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMConcreteContainerIdentity_h
#define MCMConcreteContainerIdentity_h
@import Foundation;

#include "MCMContainerIdentity.h"

@class NSUUID;

@interface MCMConcreteContainerIdentity : MCMContainerIdentity

@property (readonly, nonatomic) NSUUID *uuid;

/* class methods */
+ (id)containerIdentityWithUUID:(id)uuid userIdentity:(id)identity identifier:(id)identifier containerClass:(unsigned long long)class platform:(unsigned int)platform transient:(BOOL)transient error:(unsigned long long *)error;
+ (id)containerIdentityWithUUID:(id)uuid userIdentity:(id)identity identifier:(id)identifier containerClass:(unsigned long long)class platform:(unsigned int)platform error:(unsigned long long *)error;
+ (id)concreteContainerIdentityFromPlist:(id)plist userIdentityCache:(id)cache error:(unsigned long long *)error;

/* instance methods */
- (id)init;
- (id)initWithUUID:(id)uuid userIdentity:(id)identity identifier:(id)identifier containerClass:(unsigned long long)class platform:(unsigned int)platform transient:(BOOL)transient error:(unsigned long long *)error;
- (id)initWithPlist:(id)plist userIdentityCache:(id)cache error:(unsigned long long *)error;
- (id)initWithContainerIdentity:(id)identity UUID:(id)uuid error:(unsigned long long *)error;
- (id)initWithVersion1PlistDictionary:(id)dictionary containerIdentity:(id)identity error:(unsigned long long *)error;
- (id)initWithLibsystemContainer:(struct container_object_s *)container defaultUserIdentity:(id)identity userIdentityCache:(id)cache error:(unsigned long long *)error;
- (id)plist;
- (struct container_object_s *)createLibsystemContainerWithContainerPathIdentifier:(id)identifier existed:(BOOL)existed error:(unsigned long long *)error;
- (id)containerIdentity;
- (id)description;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqualToConcreteContainerIdentity:(id)identity;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* MCMConcreteContainerIdentity_h */
