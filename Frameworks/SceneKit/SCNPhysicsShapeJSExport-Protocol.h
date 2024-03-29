//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNPhysicsShapeJSExport_Protocol_h
#define SCNPhysicsShapeJSExport_Protocol_h
@import Foundation;

@protocol SCNPhysicsShapeJSExport <JSExport>

@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) id sourceObject;
@property (readonly, nonatomic) NSArray *transforms;

/* class methods */
+ (id)shapeWithGeometry:(id)geometry options:(id)options;
+ (id)shapeWithNode:(id)node options:(id)options;
+ (id)shapeWithShapes:(id)shapes transforms:(id)transforms;
/* instance methods */
- (id)copy;
@end

#endif /* SCNPhysicsShapeJSExport_Protocol_h */
