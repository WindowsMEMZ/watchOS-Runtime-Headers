//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 198.4.0.0.0
//
#ifndef FASettingsPresetSource_h
#define FASettingsPresetSource_h
@import Foundation;

#include "FASettingsPresetConfiguration.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface FASettingsPresetSource : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) FASettingsPresetConfiguration *configuration;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier configuration:(id)configuration;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithDictionary:(id)dictionary;
- (id)description;
@end

#endif /* FASettingsPresetSource_h */
