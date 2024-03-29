//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 470.14.3.0.0
//
#ifndef FigCaptureVideoPreviewSinkConfiguration_h
#define FigCaptureVideoPreviewSinkConfiguration_h
@import Foundation;

#include "FigCaptureSinkConfiguration.h"
#include "FigCaptureSemanticStyle.h"

@class NSArray;

@interface FigCaptureVideoPreviewSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL depthDataDeliveryEnabled;
@property (nonatomic) BOOL filterRenderingEnabled;
@property (copy, nonatomic) NSArray *filters;
@property (nonatomic) float simulatedAperture;
@property (nonatomic) float portraitLightingEffectStrength;
@property (nonatomic) BOOL semanticStyleRenderingEnabled;
@property (retain, nonatomic) FigCaptureSemanticStyle *semanticStyle;
@property (nonatomic) BOOL primaryCaptureRectModificationEnabled;
@property (nonatomic) double primaryCaptureRectAspectRatio;
@property (nonatomic) struct CGPoint { double x0; double x1; } primaryCaptureRectCenter;
@property (nonatomic) long long primaryCaptureRectUniqueID;
@property (nonatomic) BOOL zoomPIPOverlayEnabled;
@property (nonatomic) BOOL portraitAutoSuggestEnabled;

/* instance methods */
- (id)init;
- (id)initWithXPCEncoding:(id)xpcencoding;
- (id)copyXPCEncoding;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)dealloc;
- (int)sinkType;
@end

#endif /* FigCaptureVideoPreviewSinkConfiguration_h */
