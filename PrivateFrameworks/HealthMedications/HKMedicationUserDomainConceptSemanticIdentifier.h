//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMedicationUserDomainConceptSemanticIdentifier_h
#define HKMedicationUserDomainConceptSemanticIdentifier_h
@import Foundation;

#include "HKUserDomainConceptSemanticIdentifier.h"

@class HKMedicalCoding, NSUUID;

@interface HKMedicationUserDomainConceptSemanticIdentifier : HKUserDomainConceptSemanticIdentifier

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) HKMedicalCoding *medicalCoding;

/* class methods */
+ (id)semanticIdentifierWithComponents:(id)components;

/* instance methods */
- (id)init;
- (id)initWithTypeIdentifier:(id)identifier;
- (id)initWithUUID:(id)uuid medicalCoding:(id)coding;
- (id)stringValue;
@end

#endif /* HKMedicationUserDomainConceptSemanticIdentifier_h */
