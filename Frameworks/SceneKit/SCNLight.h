//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNLight_h
#define SCNLight_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SCNAnimatable-Protocol.h"
#include "SCNMaterialProperty.h"
#include "SCNOrderedDictionary.h"
#include "SCNTechnique.h"

@class NSArray, NSData, NSMutableDictionary, NSString, NSURL;

@interface SCNLight : NSObject<SCNAnimatable, NSCopying, NSSecureCoding> {
  /* instance variables */
  struct __C3DLight * _light;
  unsigned int x :1 _isPresentationInstance;
  unsigned int x :1 _usesDeferredShadows;
  unsigned int x :1 _usesModulatedMode;
  unsigned int x :1 _baked;
  unsigned int x :1 _shouldBakeDirectLighting;
  unsigned int x :1 _shouldBakeIndirectLighting;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _animationsLock;
  SCNOrderedDictionary *_animations;
  NSMutableDictionary *_bindings;
  double _cascadeDebugFactor;
  float _spotFalloffExponent;
  SCNTechnique *_technique;
  NSData *_sphericalHarmonics;
}

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) id color;
@property (nonatomic) double temperature;
@property (nonatomic) double intensity;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL castsShadow;
@property (retain, nonatomic) id shadowColor;
@property (nonatomic) double shadowRadius;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowMapSize;
@property (nonatomic) unsigned long long shadowSampleCount;
@property (nonatomic) long long shadowMode;
@property (nonatomic) double shadowBias;
@property (nonatomic) BOOL automaticallyAdjustsShadowProjection;
@property (nonatomic) double maximumShadowDistance;
@property (nonatomic) BOOL forcesBackFaceCasters;
@property (nonatomic) BOOL sampleDistributedShadowMaps;
@property (nonatomic) unsigned long long shadowCascadeCount;
@property (nonatomic) double shadowCascadeSplittingFactor;
@property (nonatomic) double orthographicScale;
@property (nonatomic) double zNear;
@property (nonatomic) double zFar;
@property (nonatomic) double attenuationStartDistance;
@property (nonatomic) double attenuationEndDistance;
@property (nonatomic) double attenuationFalloffExponent;
@property (nonatomic) double spotInnerAngle;
@property (nonatomic) double spotOuterAngle;
@property (retain, nonatomic) NSURL *IESProfileURL;
@property (readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
@property (nonatomic) long long probeType;
@property (nonatomic) long long probeUpdateType;
@property (nonatomic)  probeExtents;
@property (nonatomic)  probeOffset;
@property (nonatomic) BOOL parallaxCorrectionEnabled;
@property (nonatomic)  parallaxExtentsFactor;
@property (nonatomic)  parallaxCenterOffset;
@property (readonly, nonatomic) SCNMaterialProperty *probeEnvironment;
@property (nonatomic) long long areaType;
@property (nonatomic)  areaExtents;
@property (copy, nonatomic) NSArray *areaPolygonVertices;
@property (nonatomic) BOOL drawsArea;
@property (nonatomic) BOOL doubleSided;
@property (readonly, nonatomic) SCNMaterialProperty *gobo;
@property (nonatomic) unsigned long long categoryBitMask;
@property (readonly) NSArray *animationKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)lightWithMDLLight:(id)mdllight;
+ (id)lightWithMDLLightProbe:(id)probe;
+ (id)light;
+ (id)lightWithLightRef:(struct __C3DLight *)ref;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithLightRef:(struct __C3DLight *)ref;
- (id)initPresentationLightWithLightRef:(struct __C3DLight *)ref;
- (struct __C3DLight *)lightRef;
- (void)dealloc;
- (void)setIdentifier:(id)identifier;
- (id)identifier;
- (void)_syncEntityObjCModel;
- (void)_syncObjCModel;
- (id)presentationLight;
- (id)presentationInstance;
- (BOOL)isPausedOrPausedByInheritance;
- (struct __C3DScene *)sceneRef;
- (id)scene;
- (void *)__CFObject;
- (id)copyAnimationChannelForKeyPath:(id)path property:(id)property;
- (struct __C3DAnimationManager *)animationManager;
- (BOOL)__removeAnimation:(id)animation forKey:(id)key;
- (void)addAnimationPlayer:(id)player forKey:(id)key;
- (void)addAnimation:(id)animation forKey:(id)key;
- (void)addAnimation:(id)animation;
- (void)removeAllAnimations;
- (void)removeAllAnimationsWithBlendOutDuration:(double)duration;
- (void)removeAnimationForKey:(id)key;
- (void)removeAnimationForKey:(id)key blendOutDuration:(double)duration;
- (void)_syncObjCAnimations;
- (id)animationForKey:(id)key;
- (id)_scnAnimationForKey:(id)key;
- (void)_copyAnimationsFrom:(id)from;
- (id)animationPlayerForKey:(id)key;
- (void)_pauseAnimation:(BOOL)animation forKey:(id)key pausedByNode:(BOOL)node;
- (void)pauseAnimationForKey:(id)key;
- (void)resumeAnimationForKey:(id)key;
- (void)removeAnimationForKey:(id)key fadeOutDuration:(double)duration;
- (void)setSpeed:(double)speed forAnimationKey:(id)key;
- (BOOL)isAnimationForKeyPaused:(id)paused;
- (id)_scnBindings;
- (void)bindAnimatablePath:(id)path toObject:(id)object withKeyPath:(id)path options:(id)options;
- (void)unbindAnimatablePath:(id)path;
- (void)removeAllBindings;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (id)copyAnimationChannelForKeyPath:(id)path animation:(id)animation;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copy;
- (void)setAttribute:(id)attribute forKey:(id)key;
- (id)attributeForKey:(id)key;
- (id)_sphericalHarmonics;
- (void)set_sphericalHarmonics:(id)harmonics;
- (BOOL)shouldBakeDirectLighting;
- (void)setShouldBakeDirectLighting:(BOOL)lighting;
- (BOOL)shouldBakeIndirectLighting;
- (void)setShouldBakeIndirectLighting:(BOOL)lighting;
- (BOOL)isBaked;
- (void)setBaked:(BOOL)baked;
- (double)spotFalloffExponent;
- (void)setSpotFalloffExponent:(double)exponent;
- (id)technique;
- (void)setTechnique:(id)technique;
- (void)_resyncObjCModelOfPerTypeParameters;
- (BOOL)usesDeferredShadows;
- (void)setUsesDeferredShadows:(BOOL)shadows;
- (BOOL)usesModulatedMode;
- (void)setUsesModulatedMode:(BOOL)mode;
- (BOOL)forceBackFaceCasters;
- (void)setForceBackFaceCasters:(BOOL)casters;
- (BOOL)adjustsShadowProjection;
- (void)setAdjustsShadowProjection:(BOOL)projection;
- (double)_shadowCascadeDebugFactor;
- (void)set_shadowCascadeDebugFactor:(double)factor;
- (BOOL)hasGobo;
- (void)setIESProfileURL:(id)url resolvedURL:(id)url;
- (void)_customEncodingOfSCNLight:(id)scnlight;
- (void)_customDecodingOfSCNLight:(id)scnlight;
- (void)_didDecodeSCNLight:(id)scnlight;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* SCNLight_h */
