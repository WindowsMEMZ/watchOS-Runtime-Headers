//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNEntityIdentifier_h
#define LNEntityIdentifier_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface LNEntityIdentifier : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *typeName;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, nonatomic) long long scope;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, copy, nonatomic) NSString *instanceIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithValue:(id)value typeName:(id)name;
- (id)initWithValue:(id)value scope:(long long)scope typeName:(id)name;
- (id)initWithTypeIdentifier:(id)identifier instanceIdentifier:(id)identifier;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* LNEntityIdentifier_h */
