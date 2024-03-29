//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef _NSCoreDataTaggedObjectID_h
#define _NSCoreDataTaggedObjectID_h
@import Foundation;

#include "_NSScalarObjectID.h"

@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID
/* class methods */
+ (void)initialize;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)zone;
+ (Class)classWithStore:(id)store andEntity:(id)entity;
+ (unsigned int)allocateBatch:(id *)batch count:(unsigned int)count;
+ (id)managedObjectIDFromURIRepresentation:(id)urirepresentation;
+ (void)setObjectStoreIdentifier:(id)identifier;
+ (id)_storeInfo1;
+ (void)_setStoreInfo1:(id)info1;
+ (void)_storeDeallocated;
+ (BOOL)_usesTaggedPointers;

/* instance methods */
- (id)initWithPK64:(long long)pk64;
- (id)initWithObject:(id)object;
- (id)retain;
- (void)release;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copy;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)entity;
- (id)entityName;
- (id)persistentStore;
- (BOOL)isTemporaryID;
- (long long)_referenceData64;
- (id)_storeIdentifier;
- (BOOL)_isPersistentStoreAlive;
- (id)_retainedURIString;
- (id)_storeInfo1;
@end

#endif /* _NSCoreDataTaggedObjectID_h */
