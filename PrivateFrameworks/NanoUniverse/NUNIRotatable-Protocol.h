//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NUNIRotatable_Protocol_h
#define NUNIRotatable_Protocol_h
@import Foundation;

@protocol NUNIRotatable <NSObject>

@property (readonly, nonatomic) NUNIScene *scene;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } homeCoordinate;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } centerCoordinate;

/* instance methods */
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate animated:(BOOL)animated;
@end

#endif /* NUNIRotatable_Protocol_h */
