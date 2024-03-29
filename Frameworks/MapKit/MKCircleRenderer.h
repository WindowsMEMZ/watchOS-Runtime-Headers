//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKCircleRenderer_h
#define MKCircleRenderer_h
@import Foundation;

#include "MKOverlayPathRenderer.h"
#include "MKCircle.h"
#include "NSSecureCoding-Protocol.h"

@class VKVectorOverlayCircle;

@interface MKCircleRenderer : MKOverlayPathRenderer<NSSecureCoding> {
  /* instance variables */
  VKVectorOverlayCircle *_vectorData;
}

@property (readonly, nonatomic) MKCircle *circle;
@property (nonatomic) double strokeStart;
@property (nonatomic) double strokeEnd;

/* class methods */
+ (Class)_mapkitLeafClass;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCircle:(id)circle;
- (void)createPath;
- (void)strokePath:(struct CGPath *)path inContext:(struct CGContext *)context;
- (void)_performInitialConfiguration;
- (void)setLineWidth:(double)width;
- (void)setFillColor:(id)color;
- (void)setStrokeColor:(id)color;
- (void)setAlpha:(double)alpha;
- (BOOL)_canProvideVectorGeometry;
- (id)_vectorData;
- (BOOL)overlayCanProvideVectorData:(id)data;
- (id)vectorDataForOverlay:(id)overlay;
- (void)_updateRenderColors;
- (id)initWithCoder:(id)coder;
- (void)_decodePropertiesWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* MKCircleRenderer_h */
