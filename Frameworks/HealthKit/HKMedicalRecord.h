//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMedicalRecord_h
#define HKMedicalRecord_h
@import Foundation;

#include "HKSample.h"
#include "HKCodedSample-Protocol.h"
#include "HKConcept.h"
#include "HKConceptIndexable-Protocol.h"
#include "HKFHIRIdentifier.h"
#include "HKMedicalRecordCodings-Protocol.h"
#include "HKMedicalRecordOriginIdentifier.h"
#include "HKMedicalType.h"
#include "HKSemanticDate.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSLocale, NSString, NSUUID;

@interface HKMedicalRecord : HKSample<HKMedicalRecordCodings, HKConceptIndexable, HKCodedSample, NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSArray *medicalRecordCodings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, nonatomic) long long recordCategoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, @dynamic) NSDate *startDate;
@property (readonly, @dynamic) NSDate *endDate;
@property (readonly, copy, nonatomic) HKMedicalType *medicalType;
@property (readonly, copy, nonatomic) NSString *note;
@property (readonly, nonatomic) BOOL enteredInError;
@property (readonly, copy, nonatomic) NSDate *modifiedDate;
@property (readonly, copy, nonatomic) HKMedicalRecordOriginIdentifier *originIdentifier;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) long long extractionVersion;
@property (readonly, copy, nonatomic) HKSemanticDate *sortDate;
@property (readonly, nonatomic) HKConcept *primaryConcept;
@property (retain, nonatomic) NSString *country;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, copy, nonatomic) HKFHIRIdentifier *FHIRIdentifier;
@property (readonly, nonatomic) unsigned long long medicalRecordOriginType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)indexableKeyPathsWithPrefix:(id)prefix;
+ (id)indexableConceptKeyPaths;
+ (id)cachedConceptRelationshipKeyPaths;
+ (BOOL)groupsByUserDomainConcept;
+ (id)defaultDisplayString;
+ (id)_newMedicalRecordWithType:(id)type note:(id)note enteredInError:(BOOL)error modifiedDate:(id)date originIdentifier:(id)identifier locale:(id)locale extractionVersion:(long long)version device:(id)device metadata:(id)metadata sortDate:(id)date country:(id)country state:(unsigned long long)state config:(id /* block */)config;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsEquivalence;
+ (id)_sortDateIntervalFromStartDateComponents:(id)components endDateComponents:(id)components error:(out id *)error;
+ (BOOL)_isConcreteObjectClass;

/* instance methods */
- (id)codingsForKeyPath:(id)path error:(id *)error;
- (BOOL)applyConcepts:(id)concepts forKeyPath:(id)path error:(id *)error;
- (id)fallbackDisplayString;
- (id)_init;
- (id)attachmentObjectIdentifier;
- (id)attachmentSchemaIdentifier;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEquivalent:(id)equivalent;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)_setNote:(id)note;
- (void)_setEnteredInError:(BOOL)error;
- (void)_setModifiedDate:(id)date;
- (void)_setOriginIdentifier:(id)identifier;
- (void)_setLocale:(id)locale;
- (void)_setExtractionVersion:(long long)version;
- (void)_setSortDate:(id)date;
- (void)_setPrimaryConcept:(id)concept;
- (void)_setCountry:(id)country;
- (void)_setState:(unsigned long long)state;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })configuration;
@end

#endif /* HKMedicalRecord_h */
