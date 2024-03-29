//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEIKEv2AddressIdentifier_h
#define NEIKEv2AddressIdentifier_h
@import Foundation;

#include "NEIKEv2Identifier.h"

@class NWAddressEndpoint;

@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier

@property (readonly) NWAddressEndpoint *address;

/* class methods */
+ (id)copyTypeDescription;

/* instance methods */
- (id)initWithAddress:(id)address;
- (unsigned long long)identifierType;
- (id)identifierData;
- (id)stringValue;
@end

#endif /* NEIKEv2AddressIdentifier_h */
