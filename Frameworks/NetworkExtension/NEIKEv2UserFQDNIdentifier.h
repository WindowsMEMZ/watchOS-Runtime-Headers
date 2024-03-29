//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEIKEv2UserFQDNIdentifier_h
#define NEIKEv2UserFQDNIdentifier_h
@import Foundation;

#include "NEIKEv2Identifier.h"

@interface NEIKEv2UserFQDNIdentifier : NEIKEv2Identifier
/* class methods */
+ (id)copyTypeDescription;

/* instance methods */
- (id)initWithUserFQDN:(id)fqdn;
- (unsigned long long)identifierType;
@end

#endif /* NEIKEv2UserFQDNIdentifier_h */
