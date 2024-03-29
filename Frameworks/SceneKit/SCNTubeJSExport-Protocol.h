//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNTubeJSExport_Protocol_h
#define SCNTubeJSExport_Protocol_h
@import Foundation;

@protocol SCNTubeJSExport <JSExport>

@property (nonatomic) double innerRadius;
@property (nonatomic) double outerRadius;
@property (nonatomic) double height;
@property (nonatomic) long long radialSegmentCount;
@property (nonatomic) long long heightSegmentCount;

/* class methods */
+ (id)tubeWithInnerRadius:(double)radius outerRadius:(double)radius height:(double)height;
@end

#endif /* SCNTubeJSExport_Protocol_h */
