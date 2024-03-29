//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKAnnotationContainerViewDelegate_Protocol_h
#define MKAnnotationContainerViewDelegate_Protocol_h
@import Foundation;

@protocol MKAnnotationContainerViewDelegate <NSObject>
/* instance methods */
- (BOOL)annotationContainerShouldAlignToPixels:(id)pixels;
- (BOOL)annotationContainerIsRotated:(id)rotated;
- (id)annotationContainer:(id)container requestAddingClusterForAnnotationViews:(id)views;
- (void)annotationContainer:(id)container requestRemovingClusterAnnotationView:(id)view updateVisible:(BOOL)visible;
- (void)annotationContainer:(id)container annotationView:(id)view calloutAccessoryControlTapped:(id)tapped;
- (void)calloutDidAppearForAnnotationView:(id)view inContainer:(id)container;
- (void)annotationContainer:(id)container calloutPrimaryActionTriggeredForAnnotationView:(id)view;
- (void)annotationContainer:(id)container scrollToRevealCalloutWithOffset:(struct CGPoint { double x0; double x1; })offset annotationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate completionHandler:(id /* block */)handler;
- (double)annotationContainer:(id)container pinDropDistanceForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate maxDistance:(double *)distance;
- (void)annotationContainerWillAnimateBubble:(id)bubble;
- (void)annotationContainerDidAnimateBubble:(id)bubble;
- (void)annotationContainerWillDropPins:(id)pins;
- (void)annotationContainerDidDropPins:(id)pins;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleCenteringRectInView:(id)view;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRectInView:(id)view;
- (struct CLLocationCoordinate2D { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })point toCoordinateFromView:(id)view;
- (struct CGPoint { double x0; double x1; })convertCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate toPointToView:(id)view;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })annotationContainerVisibleRect:(id)rect;
- (BOOL)annotationContainer:(id)container isAnnotationView:(id)view validForDisplayAtPoint:(struct CGPoint { double x0; double x1; })point;
@optional
/* instance methods */
- (void)annotationContainerDidFinishMapsTransitionExpanding:(id)expanding;
@end

#endif /* MKAnnotationContainerViewDelegate_Protocol_h */
