//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFCameraAdjustments_h
#define PFCameraAdjustments_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class AVApplePortraitMetadata, NSString;

@interface PFCameraAdjustments : NSObject<NSCopying, NSMutableCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *effectFilterName;
@property (readonly, copy, nonatomic) NSString *portraitEffectFilterName;
@property (readonly, nonatomic) AVApplePortraitMetadata *portraitMetadata;
@property (readonly, nonatomic) BOOL depthEnabled;
@property (readonly, nonatomic) unsigned long long cinematicVideoRenderingVersion;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRect;
@property (readonly, nonatomic) BOOL hasCrop;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAdjustments:(id)adjustments;
- (id)initWithEffectFilter:(id)filter cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)canBeRenderedByCapturePipelineWithVideoComplement:(BOOL)complement;
- (BOOL)isDepthEnabled;
@end

#endif /* PFCameraAdjustments_h */
