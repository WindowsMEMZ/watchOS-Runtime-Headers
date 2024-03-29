//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef _NSCoreManagedObjectID_h
#define _NSCoreManagedObjectID_h
@import Foundation;

#include "NSManagedObjectID.h"

@interface _NSCoreManagedObjectID : NSManagedObjectID
/* class methods */
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;
+ (char *)generatedNameSuffix;
+ (void)initialize;
+ (Class)classWithStore:(id)store andEntity:(id)entity;
+ (BOOL)_usesTaggedPointers;
+ (unsigned int)allocateBatch:(id *)batch count:(unsigned int)count;
+ (id)allocWithZone:(struct _NSZone *)zone;
+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
+ (long long)version;
+ (id)retain;
+ (id)_retain_1;
+ (void)release;
+ (void)_release_1;
+ (id)managedObjectIDFromUTF8String:(const char *)string length:(unsigned long long)length;
+ (id)managedObjectIDFromURIRepresentation:(id)urirepresentation;
+ (void)setObjectStoreIdentifier:(id)identifier;
+ (void)_setStoreInfo1:(id)info1;
+ (id)_storeInfo1;
+ (void)_storeDeallocated;

/* instance methods */
- (id)retain;
- (void)release;
- (id)entity;
- (id)entityName;
- (id)persistentStore;
- (BOOL)isTemporaryID;
- (id)_storeIdentifier;
- (id)_storeInfo1;
- (BOOL)_isPersistentStoreAlive;
- (unsigned long long)retainCount;
- (id)URIRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* _NSCoreManagedObjectID_h */
