//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 417.0.4.0.0
//
#ifndef NISpatialBrowsingConfiguration_h
#define NISpatialBrowsingConfiguration_h
@import Foundation;

#include "NIConfiguration.h"

@class NSString;

@interface NISpatialBrowsingConfiguration : NIConfiguration

@property long long updatesPolicy;
@property BOOL responder;
@property (copy) NSString *deviceIdentifier;
@property double maxNearbyObjectAge;

/* class methods */
+ (id)responderConfigurationWithIdentifier:(id)identifier;
+ (id)new;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)descriptionInternal;
- (BOOL)isResponder;
@end

#endif /* NISpatialBrowsingConfiguration_h */
