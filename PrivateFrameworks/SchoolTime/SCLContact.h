//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLContact_h
#define SCLContact_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface SCLContact : NSObject<NSCopying, NSMutableCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *value;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)_initWithContactIdentifier:(id)identifier type:(unsigned long long)type value:(id)value;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SCLContact_h */
