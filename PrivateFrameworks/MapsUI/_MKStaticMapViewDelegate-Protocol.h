//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 158.42.9.28.10
//
#ifndef _MKStaticMapViewDelegate_Protocol_h
#define _MKStaticMapViewDelegate_Protocol_h
@import Foundation;

@protocol _MKStaticMapViewDelegate <NSObject>
@optional
/* instance methods */
- (void)mapViewWillStartLoadingMap:(id)map;
- (void)mapViewDidFinishLoadingMap:(id)map;
- (void)mapViewDidFailLoadingMap:(id)map withError:(id)error;
- (id)mapView:(id)view viewForAnnotation:(id)annotation;
- (id)mapView:(id)view rendererForOverlay:(id)overlay;
@end

#endif /* _MKStaticMapViewDelegate_Protocol_h */
