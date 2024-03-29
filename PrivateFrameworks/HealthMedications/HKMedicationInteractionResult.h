//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMedicationInteractionResult_h
#define HKMedicationInteractionResult_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class HKConceptIdentifier, NSSet;

@interface HKMedicationInteractionResult : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) HKConceptIdentifier *firstIdentifier;
@property (readonly, copy, nonatomic) HKConceptIdentifier *secondIdentifier;
@property (readonly, nonatomic) unsigned long long interactionType;
@property (readonly, copy, nonatomic) NSSet *interactions;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithFirstConceptIdentifier:(id)identifier secondConceptIdentifier:(id)identifier interactionType:(unsigned long long)type interactions:(id)interactions;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)conceptIdentifiers;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* HKMedicationInteractionResult_h */
