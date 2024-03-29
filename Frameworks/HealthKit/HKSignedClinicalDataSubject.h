//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSignedClinicalDataSubject_h
#define HKSignedClinicalDataSubject_h
@import Foundation;

#include "HKMedicalDate.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface HKSignedClinicalDataSubject : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) HKMedicalDate *birthDate;
@property (readonly, copy, nonatomic) NSString *gender;
@property (readonly, copy, nonatomic) NSArray *emailAddresses;
@property (readonly, copy, nonatomic) NSArray *phoneNumbers;
@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, copy, nonatomic) NSArray *addresses;
@property (readonly, copy, nonatomic) NSString *maritalStatus;
@property (readonly, copy, nonatomic) NSString *race;
@property (readonly, copy, nonatomic) NSString *ethnicity;
@property (readonly, copy, nonatomic) NSString *birthSex;

/* class methods */
+ (id)subjectWithFullName:(id)name birthDate:(id)date gender:(id)gender emailAddresses:(id)addresses phoneNumbers:(id)numbers;
+ (id)subjectWithFullName:(id)name birthDate:(id)date gender:(id)gender emailAddresses:(id)addresses phoneNumbers:(id)numbers identifiers:(id)identifiers addresses:(id)addresses maritalStatus:(id)status race:(id)race ethnicity:(id)ethnicity birthSex:(id)sex;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFullName:(id)name birthDate:(id)date gender:(id)gender emailAddresses:(id)addresses phoneNumbers:(id)numbers identifiers:(id)identifiers addresses:(id)addresses maritalStatus:(id)status race:(id)race ethnicity:(id)ethnicity birthSex:(id)sex;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)debugDescription;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HKSignedClinicalDataSubject_h */
