//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNPhysicsHingeJointJSExport_Protocol_h
#define SCNPhysicsHingeJointJSExport_Protocol_h
@import Foundation;

@protocol SCNPhysicsHingeJointJSExport <JSExport>

@property (readonly, nonatomic) SCNPhysicsBody *bodyA;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } axisA;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } anchorA;
@property (readonly, nonatomic) SCNPhysicsBody *bodyB;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } axisB;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } anchorB;

/* class methods */
+ (id)jointWithBodyA:(id)a axisA:(struct SCNVector3 { float x0; float x1; float x2; })a anchorA:(struct SCNVector3 { float x0; float x1; float x2; })a bodyB:(id)b axisB:(struct SCNVector3 { float x0; float x1; float x2; })b anchorB:(struct SCNVector3 { float x0; float x1; float x2; })b;
+ (id)jointWithBody:(id)body axis:(struct SCNVector3 { float x0; float x1; float x2; })axis anchor:(struct SCNVector3 { float x0; float x1; float x2; })anchor;
@end

#endif /* SCNPhysicsHingeJointJSExport_Protocol_h */
