//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKIdentityElement_h
#define PKIdentityElement_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface PKIdentityElement : NSObject<NSCopying>
/* class methods */
+ (id)givenNameElement;
+ (id)familyNameElement;
+ (id)portraitElement;
+ (id)addressElement;
+ (id)issuingAuthorityElement;
+ (id)ageElement;
+ (id)dateOfBirthElement;
+ (id)sexElement;
+ (id)documentIssueDateElement;
+ (id)documentExpirationDateElement;
+ (id)documentDHSComplianceStatusElement;
+ (id)documentNumberElement;
+ (id)drivingPrivilegesElement;
+ (id)ageThresholdElementWithAge:(long long)age;

/* instance methods */
- (id)init;
- (id)_init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* PKIdentityElement_h */
