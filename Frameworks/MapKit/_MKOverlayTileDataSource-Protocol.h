//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef _MKOverlayTileDataSource_Protocol_h
#define _MKOverlayTileDataSource_Protocol_h
@import Foundation;

@protocol _MKOverlayTileDataSource <NSObject>

@property (readonly) BOOL geometryFlipped;

/* instance methods */
- (void)loadTileAtPath:(struct { long long x0; long long x1; long long x2; double x3; })path result:(id /* block */)result;
- (void)_cancelLoadingTileAtPath:(struct { long long x0; long long x1; long long x2; double x3; })path;
- (BOOL)isGeometryFlipped;
@end

#endif /* _MKOverlayTileDataSource_Protocol_h */
