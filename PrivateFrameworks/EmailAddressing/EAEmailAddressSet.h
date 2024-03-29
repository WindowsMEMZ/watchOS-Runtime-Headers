//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EAEmailAddressSet_h
#define EAEmailAddressSet_h
@import Foundation;

#include "NSMutableSet.h"
#include "EFLoggable-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSMutableSet, NSString;

@interface EAEmailAddressSet : NSMutableSet<EFLoggable, NSSecureCoding>

@property (retain, nonatomic) NSMutableSet *internalSet;
@property (readonly, nonatomic) NSData *serializedRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;
+ (id)set;
+ (id)setWithCapacity:(unsigned long long)capacity;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCapacity:(unsigned long long)capacity;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithSerializedRepresentation:(id)representation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)count;
- (id)member:(id)member;
- (BOOL)intersectsSet:(id)set;
- (BOOL)isSubsetOfSet:(id)set;
- (BOOL)isEqualToSet:(id)set;
- (id)allObjects;
- (id)objectEnumerator;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id * x1; unsigned long long * x2; unsigned long long x3[5] } *)state objects:(id *)objects count:(unsigned long long)count;
- (void)addObject:(id)object;
- (void)removeObject:(id)object;
- (void)removeAllObjects;
- (void)unionSet:(id)set;
- (void)minusSet:(id)set;
- (void)intersectSet:(id)set;
- (void)setSet:(id)set;
@end

#endif /* EAEmailAddressSet_h */
