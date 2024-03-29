//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDistributedTimestampClockVector_h
#define CKDistributedTimestampClockVector_h
@import Foundation;

#include "CKDistributedTimestampAttributedVector.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface CKDistributedTimestampClockVector : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) CKDistributedTimestampAttributedVector *backingVector;

/* class methods */
+ (void)initialize;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)allSiteIdentifiers;
- (id)allModifiers;
- (unsigned char)clockTypeForModifier:(id)modifier;
- (id)clockTypesForAllModifiers;
- (unsigned long long)timestampCount;
- (unsigned long long)timestampCountForSiteIdentifier:(id)identifier;
- (BOOL)includesTimestamp:(id)timestamp;
- (unsigned char)clockTypeForTimestamp:(id)timestamp;
- (long long)compareToVector:(id)vector;
- (BOOL)isGreaterThanOrEqualToVector:(id)vector;
- (BOOL)hasTimestampsNotInVector:(id)vector;
- (unsigned char)vectorExpansionState;
- (void)intersectVector:(id)vector;
- (void)minusVector:(id)vector;
- (void)unionVector:(id)vector;
- (void)addClockValuesInIndexSet:(id)set forSiteIdentifier:(id)identifier;
- (void)addClockValuesInIndexSet:(id)set withClockType:(unsigned char)type forSiteIdentifier:(id)identifier;
- (void)removeClockValuesInIndexSet:(id)set forSiteIdentifier:(id)identifier;
- (void)_checkInvariantsAgainstVector:(id)vector;
- (void)_checkInvariantsAgainstClockValues:(id)values withSiteIdentifier:(id)identifier ofType:(unsigned char)type;
- (void)_maintainInvariants;
- (id)clockValuesForSiteIdentifier:(id)identifier;
- (void)enumerateClockValuesForSiteIdentifier:(id)identifier usingBlock:(id /* block */)block;
- (void)enumerateAllClockValuesUsingBlock:(id /* block */)block;
- (id)vectorFilteredBySiteIdentifiers:(id)identifiers;
- (id)vectorFilteredByModifier:(id)modifier;
- (id)vectorFilteredByClockType:(unsigned char)type;
- (id)vectorFillingInImplicitClockValuesUsingSiteIdentifiers:(id)identifiers;
- (id)clockVector;
- (id)descriptionWithStringSiteIdentifiers:(BOOL)identifiers usingSuperscripts:(BOOL)superscripts;
- (id)description;
- (id)debugDescription;
@end

#endif /* CKDistributedTimestampClockVector_h */
