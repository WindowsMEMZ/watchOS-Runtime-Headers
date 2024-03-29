//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef BBSectionIconVariant_IconGrabber_h
#define BBSectionIconVariant_IconGrabber_h
@import Foundation;

@interface BBSectionIconVariant (IconGrabber)
/* instance methods */
- (id)csl_imageWithScale:(double)scale;
- (id)_fetchImageFromBundle:(id)bundle;
- (id)_fetchIconFromOtherBulletinDistributorWithScale:(double)scale;
- (id)_getVariantForApplicationIdentifier;
@end

#endif /* BBSectionIconVariant_IconGrabber_h */
