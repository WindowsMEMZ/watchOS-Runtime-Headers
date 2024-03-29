//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 707.0.47.0.0
//
#ifndef SRSpeechExpression_h
#define SRSpeechExpression_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface SRSpeechExpression : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) double mood;
@property (readonly, nonatomic) double valence;
@property (readonly, nonatomic) double activation;
@property (readonly, nonatomic) double dominance;

/* class methods */
+ (id)new;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithVersion:(id)version timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range confidence:(double)confidence mood:(double)mood valence:(double)valence activation:(double)activation dominance:(double)dominance;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* SRSpeechExpression_h */
