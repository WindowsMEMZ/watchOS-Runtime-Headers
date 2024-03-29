//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKComplicationMetrics_h
#define NTKComplicationMetrics_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface NTKComplicationMetrics : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsets;
@property (readonly, nonatomic) BOOL opaque;
@property (readonly, nonatomic) double scaleFactor;

/* class methods */
+ (id)metricsWithSize:(struct CGSize { double x0; double x1; })size safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets cornerRadius:(double)radius opaque:(BOOL)opaque;
+ (id)metricsWithSize:(struct CGSize { double x0; double x1; })size safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets cornerRadius:(double)radius opaque:(BOOL)opaque scaleFactor:(double)factor;
+ (id)defaultMetricsForFamily:(long long)family device:(id)device;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* NTKComplicationMetrics_h */
