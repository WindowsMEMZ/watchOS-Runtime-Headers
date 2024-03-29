//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKOSVersionRequirement_h
#define PKOSVersionRequirement_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface PKOSVersionRequirement : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSString *iphone;
@property (readonly, nonatomic) NSString *ipad;
@property (readonly, nonatomic) NSString *ipod;
@property (readonly, nonatomic) NSString *appletv;
@property (readonly, nonatomic) NSString *mac;
@property (readonly, nonatomic) NSString *watch;
@property (readonly, nonatomic) NSString *vision;
@property (readonly, nonatomic) NSString *specifiediphone;

/* class methods */
+ (id)fromDeviceVersion;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)asDictionary;
- (long long)compare:(id)compare deviceClass:(id)class;
- (id)versionForDeviceClass:(id)class;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToOSVersionRequirement:(id)requirement;
@end

#endif /* PKOSVersionRequirement_h */
