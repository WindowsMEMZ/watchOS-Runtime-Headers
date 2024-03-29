//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKAnnotationRepresentation_Protocol_h
#define MKAnnotationRepresentation_Protocol_h
@import Foundation;

@protocol MKAnnotationRepresentation <NSObject>
/* instance methods */
- (id)viewRepresentation;
- (id)reuseIdentifier;
- (void)prepareForReuse;
- (BOOL)isPersistent;
- (void)_setHiddenForOffscreen:(BOOL)offscreen;
- (void)_invalidateCachedCoordinate;
- (BOOL)_isPendingSelectionAnimated;
- (BOOL)_shouldDeselectWhenDragged;
@end

#endif /* MKAnnotationRepresentation_Protocol_h */
