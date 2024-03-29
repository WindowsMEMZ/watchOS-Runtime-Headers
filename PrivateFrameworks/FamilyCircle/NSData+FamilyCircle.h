//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 198.4.0.0.0
//
#ifndef NSData_FamilyCircle_h
#define NSData_FamilyCircle_h
@import Foundation;

@interface NSData (FamilyCircle)
/* instance methods */
- (id)_faCircularImageDataWithDiameter:(double)diameter;
- (struct CGImage *)_faCreateImageRef;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_faTranformedRectForImageSize:(struct CGSize { double x0; double x1; })size cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect diameter:(double)diameter;
- (struct CGContext *)_faCreateContextWithImage:(struct CGImage *)image crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })crop diameter:(double)diameter;
- (id)_faCircularImageDataWithDiameter:(double)diameter cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)fa_dictionaryFromPlistData;
@end

#endif /* NSData_FamilyCircle_h */
