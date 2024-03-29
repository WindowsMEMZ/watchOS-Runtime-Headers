//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKAnnotationManagerDelegate_Protocol_h
#define MKAnnotationManagerDelegate_Protocol_h
@import Foundation;

@protocol MKAnnotationManagerDelegate <NSObject>
/* instance methods */
- (void)annotationManager:(id)manager didAddAnnotationRepresentations:(id)representations;
- (void)annotationManager:(id)manager didRemoveAnnotationRepresentations:(id)representations;
- (void)annotationManagerDidChangeVisibleAnnotationRepresentations:(id)representations;
- (id)annotationManager:(id)manager representationForAnnotation:(id)annotation;
- (void)annotationManager:(id)manager didSelectAnnotationRepresentation:(id)representation;
- (void)annotationManager:(id)manager didDeselectAnnotationRepresentation:(id)representation;
@optional
/* instance methods */
- (void)annotationManager:(id)manager willDeselectAnnotationRepresentation:(id)representation;
- (BOOL)annotationManager:(id)manager shouldAnimateDeselectionOfAnnotation:(id)annotation forSelectionOfAnnotation:(id)annotation;
- (BOOL)annotationManager:(id)manager canSelectAnnotationRepresentation:(id)representation;
@end

#endif /* MKAnnotationManagerDelegate_Protocol_h */
