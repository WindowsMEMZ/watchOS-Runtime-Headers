//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCPersonalizationTopicConfig_h
#define FCPersonalizationTopicConfig_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface FCPersonalizationTopicConfig : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSString *topicID;
@property (nonatomic) double scoreMultiplier;
@property (nonatomic) double tagWeight;
@property (nonatomic) BOOL capAtBaseline;
@property (nonatomic) long long limitInGroup;
@property (nonatomic) BOOL shouldLimitInGroup;
@property (nonatomic) double publisherTopicWeight;
@property (nonatomic) BOOL useHalfLifeCoefficientOverride;
@property (nonatomic) double halfLifeCoefficientOverride;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithConfigDictionary:(id)dictionary;
- (id)initWithConfigDictionary:(id)dictionary defaultConfig:(id)config;
- (id)initWithTopicID:(id)id scoreMultiplier:(double)multiplier tagWeight:(double)weight capAtBaseline:(BOOL)baseline limitInGroup:(long long)group shouldLimitInGroup:(BOOL)group publisherTopicWeight:(double)weight useHalfLifeCoefficientOverride:(BOOL)override halfLifeCoefficientOverride:(double)override;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FCPersonalizationTopicConfig_h */
