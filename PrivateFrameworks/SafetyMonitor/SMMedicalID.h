//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef SMMedicalID_h
#define SMMedicalID_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSSet, NSString, NSUUID;

@interface SMMedicalID : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long age;
@property (readonly, copy, nonatomic) NSString *allergiesAndRestrictions;
@property (readonly, copy, nonatomic) NSString *bloodType;
@property (readonly, nonatomic) long long height;
@property (readonly, copy, nonatomic) NSString *medicalConditions;
@property (readonly, copy, nonatomic) NSString *medicalNotes;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *primaryLanguage;
@property (readonly, nonatomic) long long weight;
@property (readonly, retain, nonatomic) NSSet *emergencyContacts;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier age:(long long)age allergiesAndRestrictions:(id)restrictions bloodType:(id)type height:(long long)height medicalConditions:(id)conditions medicalNotes:(id)notes name:(id)name primaryLanguage:(id)language weight:(long long)weight emergencyContacts:(id)contacts;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* SMMedicalID_h */
