//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKPersistentSharee_h
#define EKPersistentSharee_h
@import Foundation;

#include "EKPersistentObject.h"

@interface EKPersistentSharee : EKPersistentObject
/* class methods */
+ (id)defaultPropertiesToLoad;
+ (id)relations;
+ (Class)meltedClass;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (int)entityType;
- (id)UUID;
- (void)setUUID:(id)uuid;
- (id)displayName;
- (void)setDisplayName:(id)name;
- (id)address;
- (void)setAddress:(id)address;
- (id)firstName;
- (void)setFirstName:(id)name;
- (id)lastName;
- (void)setLastName:(id)name;
- (id)externalID;
- (void)setExternalID:(id)id;
- (int)shareeStatusRaw;
- (void)setShareeStatusRaw:(int)raw;
- (int)shareeAccessLevelRaw;
- (void)setShareeAccessLevelRaw:(int)raw;
- (void)setOwner:(id)owner;
- (id)owner;
- (BOOL)shareeMuteRemoval;
- (void)setShareeMuteRemoval:(BOOL)removal;
- (id)description;
@end

#endif /* EKPersistentSharee_h */
