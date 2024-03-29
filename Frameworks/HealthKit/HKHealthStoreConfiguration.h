//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHealthStoreConfiguration_h
#define HKHealthStoreConfiguration_h
@import Foundation;

#include "HKProfileIdentifier.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface HKHealthStoreConfiguration : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *sourceBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceVersion;
@property (readonly, copy, nonatomic) NSString *debugIdentifier;
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, nonatomic) unsigned int applicationSDKVersion;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSourceBundleIdentifier:(id)identifier sourceVersion:(id)version debugIdentifier:(id)identifier profileIdentifier:(id)identifier applicationSDKVersion:(unsigned int)sdkversion;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HKHealthStoreConfiguration_h */
