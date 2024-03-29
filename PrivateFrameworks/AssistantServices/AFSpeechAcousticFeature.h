//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFSpeechAcousticFeature_h
#define AFSpeechAcousticFeature_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface AFSpeechAcousticFeature : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSArray *acousticFeatureValuePerFrame;
@property (readonly, nonatomic) double frameDuration;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithAcousticFeatureValue:(id)value frameDuration:(double)duration;
@end

#endif /* AFSpeechAcousticFeature_h */
