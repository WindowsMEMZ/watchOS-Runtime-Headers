//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKOSVersionRequirementRange_h
#define PKOSVersionRequirementRange_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKOSVersionRequirement.h"

@interface PKOSVersionRequirementRange : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) PKOSVersionRequirement *minimum;
@property (readonly, nonatomic) PKOSVersionRequirement *maximum;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)initWithMinimumVersion:(id)version maximumVersion:(id)version;
- (id)asDictionary;
- (BOOL)versionMeetsRequirements:(id)requirements deviceClass:(id)class;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToOSVersionRequirementRange:(id)range;
@end

#endif /* PKOSVersionRequirementRange_h */
