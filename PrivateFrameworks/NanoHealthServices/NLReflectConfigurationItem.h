//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLReflectConfigurationItem_h
#define NLReflectConfigurationItem_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface NLReflectConfigurationItem : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *intro;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *prompt;
@property (readonly, copy, nonatomic) NSString *closure;
@property (readonly, nonatomic) NSArray *experienceTypeInclusions;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier prompt:(id)prompt closure:(id)closure experienceTypeInclusions:(id)inclusions;
- (id)initWithIdentifier:(id)identifier intro:(id)intro prompt:(id)prompt closure:(id)closure experienceTypeInclusions:(id)inclusions;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* NLReflectConfigurationItem_h */
