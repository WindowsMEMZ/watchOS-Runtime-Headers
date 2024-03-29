//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceGalleryAnimatedTransitionDelegate_Protocol_h
#define NTKFaceGalleryAnimatedTransitionDelegate_Protocol_h
@import Foundation;

@protocol NTKFaceGalleryAnimatedTransitionDelegate <NSObject>
/* instance methods */
- (void)prepareForAnimatedGalleryPresentation;
- (void)applyAnimatedGalleryPresentationWithFraction:(double)fraction;
- (void)cleanUpAfterAnimatedGalleryPresentation;
- (void)prepareForAnimatedGalleryDismissalWithFace:(id)face fromFaceContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)applyAnimatedGalleryDismissalWithFraction:(double)fraction;
- (void)cleanUpAfterAnimatedGalleryDismissal;
@end

#endif /* NTKFaceGalleryAnimatedTransitionDelegate_Protocol_h */
