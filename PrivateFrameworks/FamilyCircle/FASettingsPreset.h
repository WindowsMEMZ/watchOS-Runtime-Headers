//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 198.4.0.0.0
//
#ifndef FASettingsPreset_h
#define FASettingsPreset_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface FASettingsPreset : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long minAge;
@property (readonly, nonatomic) long long maxAge;
@property (readonly, copy, nonatomic) NSArray *sources;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier minAge:(long long)age maxAge:(long long)age sources:(id)sources;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithDictionary:(id)dictionary;
- (id)sourceWithIdentifier:(id)identifier;
- (id)description;
@end

#endif /* FASettingsPreset_h */
