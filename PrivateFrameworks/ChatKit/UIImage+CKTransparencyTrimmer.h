//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef UIImage_CKTransparencyTrimmer_h
#define UIImage_CKTransparencyTrimmer_h
@import Foundation;

@interface UIImage (CKTransparencyTrimmer) <NSDiscardableContent>
/* class methods */
+ (id)badgeIconForImageNamed:(id)named inBundle:(id)bundle;
+ (id)placeholderExtensionIcon;
+ (id)ckImageNamed:(id)named;
+ (id)ckImageNamed:(id)named compatibleWithTraitCollection:(id)collection;
+ (id)ckColorImageOfSize:(struct CGSize { double x0; double x1; })size withColor:(id)color;
+ (id)abImageNamed:(id)named;
+ (id)ckImageWithData:(id)data;
+ (id)ckImageNamed:(id)named withTintColor:(id)color;
+ (id)ckTemplateImageNamed:(id)named;
+ (id)__ck_actionImageForSubscriptionShortName:(id)name;
+ (id)__ck_actionImageForSubscriptionShortName:(id)name isFilled:(BOOL)filled;

/* instance methods */
- (id)__ck_imageScaledToFillSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)__ck_writePNGToFilePath:(id)path error:(id *)error;
- (BOOL)__ck_writePNGToURL:(id)url error:(id *)error;
- (id)__ck_pngImageData;
- (id)__ck_heicsImageData;
- (id)iconForInterfaceStyle:(long long)style;
- (BOOL)beginContentAccess;
- (void)endContentAccess;
- (void)discardContentIfPossible;
- (BOOL)isContentDiscarded;
- (id)__ck_resizableBalloonWithBalloonDescriptor:(struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })descriptor framed:(BOOL)framed;
- (id)__ck_imageWithOrientation:(long long)orientation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__ck_contentsCenter;
- (id)__ck_ASTCRepresentation;
- (id)ck_imageCroppedToCircle;
- (void)decode;
- (id)ckImageWithTintColor:(id)color;
- (id)__ck_imageWithTrimmedTransparency;
@end

#endif /* UIImage_CKTransparencyTrimmer_h */
