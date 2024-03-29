//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1222.300.51.0.0
//
#ifndef CHHandle_h
#define CHHandle_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CHHandle : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *normalizedValue;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *value;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)normalizedEmailAddressHandleForValue:(id)value;
+ (id)normalizedGenericHandleForValue:(id)value;
+ (id)normalizedPhoneNumberHandleForValue:(id)value isoCountryCode:(id)code;
+ (long long)handleTypeForValue:(id)value;

/* instance methods */
- (id)initWithHandle:(id)handle;
- (id)initWithType:(long long)type value:(id)value;
- (id)initWithType:(long long)type value:(id)value normalizedValue:(id)value;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToHandle:(id)handle;
- (BOOL)isTemporary;
- (BOOL)isPseudonym;
@end

#endif /* CHHandle_h */
