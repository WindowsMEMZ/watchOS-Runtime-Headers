//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKAccountOwner_h
#define HKAccountOwner_h
@import Foundation;

#include "HKMedicalRecord.h"
#include "HKAccountOwnerType.h"
#include "HKMedicalDate.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface HKAccountOwner : HKMedicalRecord<NSSecureCoding, NSCopying>

@property (readonly, copy) HKAccountOwnerType *accountOwnerType;
@property (readonly, copy) HKMedicalDate *birthDate;
@property (readonly, copy) NSString *name;

/* class methods */
+ (id)accountOwnerWithType:(id)type note:(id)note enteredInError:(BOOL)error modifiedDate:(id)date originIdentifier:(id)identifier locale:(id)locale extractionVersion:(long long)version device:(id)device metadata:(id)metadata country:(id)country state:(unsigned long long)state name:(id)name birthDate:(id)date;
+ (id)accountOwnerWithType:(id)type note:(id)note enteredInError:(BOOL)error modifiedDate:(id)date originIdentifier:(id)identifier locale:(id)locale extractionVersion:(long long)version device:(id)device metadata:(id)metadata sortDate:(id)date country:(id)country state:(unsigned long long)state name:(id)name birthDate:(id)date;
+ (id)_newAccountOwnerWithType:(id)type note:(id)note enteredInError:(BOOL)error modifiedDate:(id)date originIdentifier:(id)identifier locale:(id)locale extractionVersion:(long long)version device:(id)device metadata:(id)metadata sortDate:(id)date country:(id)country state:(unsigned long long)state name:(id)name birthDate:(id)date config:(id /* block */)config;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsEquivalence;
+ (BOOL)_isConcreteObjectClass;

/* instance methods */
- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEquivalent:(id)equivalent;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)_setName:(id)name;
- (void)_setBirthDate:(id)date;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })configuration;
@end

#endif /* HKAccountOwner_h */
