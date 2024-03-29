//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef _MKCartographicMapConfiguration_h
#define _MKCartographicMapConfiguration_h
@import Foundation;

#include "MKMapConfiguration.h"

@interface _MKCartographicMapConfiguration : MKMapConfiguration

@property (readonly, nonatomic) struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; BOOL x6; } cartographicConfiguration;
@property (nonatomic) BOOL showsHiking;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCartographicConfiguration:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; BOOL x6; })configuration;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToCartographicMapConfiguration:(id)configuration;
- (void)_addObserver:(id)observer options:(unsigned long long)options context:(void *)context;
- (void)_removeObserver:(id)observer context:(void *)context;
- (BOOL)_showsHiking;
- (void)_setShowsHiking:(BOOL)hiking;
@end

#endif /* _MKCartographicMapConfiguration_h */
