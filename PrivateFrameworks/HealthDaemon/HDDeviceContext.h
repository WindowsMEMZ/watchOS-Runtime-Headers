//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDDeviceContext_h
#define HDDeviceContext_h
@import Foundation;

#include "HDSyncIdentity.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface HDDeviceContext : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *currentOSName;
@property (readonly, nonatomic) struct { long long x0; long long x1; long long x2; } currentOSVersion;
@property (readonly, copy, nonatomic) NSString *productTypeName;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, copy, nonatomic) HDSyncIdentity *syncIdentity;

/* class methods */
+ (id)localProductTypeEnumWithError:(id *)error;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initForLocalDeviceWithType:(long long)type syncIdentity:(id)identity;
- (id)initWithType:(long long)type productTypeName:(id)name currentOSName:(id)osname currentOSVersion:(struct { long long x0; long long x1; long long x2; })osversion modificationDate:(id)date syncIdentity:(id)identity;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HDDeviceContext_h */
