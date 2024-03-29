//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNSceneJSExport_Protocol_h
#define SCNSceneJSExport_Protocol_h
@import Foundation;

@protocol SCNSceneJSExport <JSExport>

@property (readonly) NSArray *particleSystems;
@property (readonly, nonatomic) SCNNode *rootNode;
@property (readonly, nonatomic) SCNPhysicsWorld *physicsWorld;
@property (readonly, nonatomic) SCNMaterialProperty *background;
@property (readonly, nonatomic) SCNMaterialProperty *lightingEnvironment;
@property (nonatomic) double fogStartDistance;
@property (nonatomic) double fogEndDistance;
@property (nonatomic) double fogDensityExponent;
@property (retain, nonatomic) id fogColor;
@property (nonatomic) BOOL wantsScreenSpaceReflection;
@property (nonatomic) long long screenSpaceReflectionSampleCount;
@property (nonatomic) double screenSpaceReflectionMaximumDistance;
@property (nonatomic) double screenSpaceReflectionStride;
@property (nonatomic) BOOL paused;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double frameRate;

/* class methods */
+ (id)scene;
+ (id)sceneNamed:(id)named;
+ (id)sceneNamed:(id)named inDirectory:(id)directory options:(id)options;
+ (id)sceneWithURL:(id)url options:(id)options error:(id *)error;
+ (id)sceneWithMDLAsset:(id)mdlasset;
/* instance methods */
- (void)addParticleSystem:(id)system withTransform:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })transform;
- (void)removeAllParticleSystems;
- (void)removeParticleSystem:(id)system;
- (id)attributeForKey:(id)key;
- (void)setAttribute:(id)attribute forKey:(id)key;
- (void)setValue:(id)value forKeyPath:(id)path;
- (void)setValue:(id)value forKey:(id)key;
- (id)valueForKey:(id)key;
- (id)valueForKeyPath:(id)path;
- (BOOL)isPaused;
@end

#endif /* SCNSceneJSExport_Protocol_h */
