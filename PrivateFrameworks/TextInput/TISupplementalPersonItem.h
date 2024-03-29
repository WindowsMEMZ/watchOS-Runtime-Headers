//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TISupplementalPersonItem_h
#define TISupplementalPersonItem_h
@import Foundation;

#include "TISupplementalItem.h"

@class NSPersonNameComponents, NSString;

@interface TISupplementalPersonItem : TISupplementalItem

@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *phoneticGivenName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *phoneticMiddleName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *phoneticFamilyName;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSString *phoneticOrganizationName;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *previousFamilyName;
@property (readonly, nonatomic) NSPersonNameComponents *personNameComponents;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithContact:(id)contact;
- (id)initWithPersonNameComponents:(id)components;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* TISupplementalPersonItem_h */
