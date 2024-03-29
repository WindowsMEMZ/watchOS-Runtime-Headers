//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef DMFControlSessionIdentifier_h
#define DMFControlSessionIdentifier_h
@import Foundation;

#include "DMFControlGroupIdentifier.h"
#include "DMFControlGroupIdentifier.h"

@interface DMFControlSessionIdentifier : DMFControlGroupIdentifier

@property (readonly, nonatomic) unsigned int leaderIP;
@property (readonly, nonatomic) unsigned short port;
@property (readonly, nonatomic) DMFControlGroupIdentifier *groupIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)stringValue;
- (id)initWithOrganizationUUID:(id)uuid groupID:(unsigned short)id;
- (id)initWithOrganizationUUID:(id)uuid groupID:(unsigned short)id leaderIP:(unsigned int)ip;
- (id)initWithString:(id)string;
- (id)initWithOrganizationUUID:(id)uuid groupID:(unsigned short)id leaderIP:(unsigned int)ip port:(unsigned short)port;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToControlSessionIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* DMFControlSessionIdentifier_h */
