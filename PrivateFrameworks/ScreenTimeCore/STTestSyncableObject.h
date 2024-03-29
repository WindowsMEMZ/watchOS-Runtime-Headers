//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STTestSyncableObject_h
#define STTestSyncableObject_h
@import Foundation;

#include "STUniquedManagedObject.h"
#include "STSerializableMappedObject-Protocol.h"
#include "STUniquelySerializableManagedObject-Protocol.h"

@class NSSet, NSString;

@interface STTestSyncableObject : STUniquedManagedObject<STSerializableMappedObject, STUniquelySerializableManagedObject>

@property (@dynamic, nonatomic) BOOL enabled;
@property (copy, @dynamic, nonatomic) NSString *identifier;
@property (retain, @dynamic, nonatomic) NSSet *subobjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)representation inContext:(id)context error:(id *)error;
+ (id)serializableClassName;

/* instance methods */
- (void)didChangeValueForKey:(id)key;
- (id)computeUniqueIdentifier;
- (id)dictionaryRepresentation;
- (BOOL)updateWithDictionaryRepresentation:(id)representation;
@end

#endif /* STTestSyncableObject_h */
