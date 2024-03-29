//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMVisionFeatureColorInfo_h
#define AXMVisionFeatureColorInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface AXMVisionFeatureColorInfo : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSArray *mainColors;
@property (retain, nonatomic) NSArray *mainColorWeights;
@property (nonatomic) double remainingColorWeight;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)setMainColors:(id)colors weights:(id)weights;
- (void)enumerateMainColors:(id /* block */)colors;
@end

#endif /* AXMVisionFeatureColorInfo_h */
