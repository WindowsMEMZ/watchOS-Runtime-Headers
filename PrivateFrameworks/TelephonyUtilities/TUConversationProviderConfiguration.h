//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUConversationProviderConfiguration_h
#define TUConversationProviderConfiguration_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSSet, NSString;

@interface TUConversationProviderConfiguration : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) BOOL supportsLinks;
@property (nonatomic) BOOL supportsSharePlay;
@property (nonatomic) BOOL supportsConversationHandoff;
@property (readonly, nonatomic) BOOL supportsVideo;
@property (nonatomic) BOOL wantsLeaveOnInvalidation;
@property (copy, nonatomic) NSString *pseudonymFeatureID;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSSet *supportedMediaTypes;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithServiceName:(id)name;
- (id)initWithConfiguration:(id)configuration;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)isEqualToConversationProvider:(id)provider;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TUConversationProviderConfiguration_h */
