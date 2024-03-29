//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 126.0.0.0.0
//
#ifndef GLKEffectPropertyLight_h
#define GLKEffectPropertyLight_h
@import Foundation;

#include "GLKEffectProperty.h"
#include "GLKEffectPropertyTransform.h"

@interface GLKEffectPropertyLight : GLKEffectProperty

@property (nonatomic) union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4] } positionEye;
@property (nonatomic) union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3] } normalizedSpotDirectionEye;
@property (nonatomic) float spotCutoffDegrees;
@property (nonatomic) int positionEyeLoc;
@property (nonatomic) int ambientLoc;
@property (nonatomic) int diffuseLoc;
@property (nonatomic) int specularLoc;
@property (nonatomic) int normalizedSpotDirectionEyeLoc;
@property (nonatomic) int spotExponentLoc;
@property (nonatomic) int spotCutoffLoc;
@property (nonatomic) int constantAttenuationLoc;
@property (nonatomic) int linearAttenuationLoc;
@property (nonatomic) int quadraticAttenuationLoc;
@property (nonatomic) int normalizeLoc;
@property (nonatomic) int ambientTermLoc;
@property (nonatomic) int lightIndex;
@property (nonatomic) unsigned long long * effectDirtyUniforms;
@property (nonatomic) int lightingType;
@property (nonatomic) unsigned char positionEyeStale;
@property (readonly, nonatomic) unsigned char isSpot;
@property (readonly, nonatomic) unsigned char isAttenuated;
@property (nonatomic) unsigned char firstLight;
@property (readonly, nonatomic) struct GLKBigInt_s { unsigned long long x0; unsigned long long x1; } allVshMasks;
@property (readonly, nonatomic) struct GLKBigInt_s { unsigned long long x0; unsigned long long x1; } allFshMasks;
@property (nonatomic) unsigned char enabled;
@property (nonatomic) union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4] } position;
@property (nonatomic) union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4] } ambientColor;
@property (nonatomic) union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4] } diffuseColor;
@property (nonatomic) union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4] } specularColor;
@property (nonatomic) union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3] } spotDirection;
@property (nonatomic) float spotExponent;
@property (nonatomic) float spotCutoff;
@property (nonatomic) float constantAttenuation;
@property (nonatomic) float linearAttenuation;
@property (nonatomic) float quadraticAttenuation;
@property (retain, nonatomic) GLKEffectPropertyTransform *transform;

/* class methods */
+ (void)setStaticMasksWithVshRoot:(id)root fshRoot:(id)root;

/* instance methods */
- (id)initWithTransform:(id)transform lightingType:(int)type firstLight:(unsigned char)light;
- (void)dirtyAllUniforms;
- (void)setGLDefaults;
- (void)initializeMasks;
- (void)setShaderBindings;
- (void)setNormalize:(unsigned char)normalize;
- (BOOL)includeVshShaderTextForRootNode:(id)node;
- (BOOL)includeFshShaderTextForRootNode:(id)node;
- (void)bind;
- (id)description;
- (void)dealloc;
@end

#endif /* GLKEffectPropertyLight_h */
