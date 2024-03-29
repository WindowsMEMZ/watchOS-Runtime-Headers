//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CICameraCalibrationLensCorrection_h
#define CICameraCalibrationLensCorrection_h
@import Foundation;

#include "CIFilter.h"
#include "CIImage.h"

@class AVCameraCalibrationData, NSNumber;

@interface CICameraCalibrationLensCorrection : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) AVCameraCalibrationData *inputAVCameraCalibrationData;
@property (retain, nonatomic) NSNumber *inputUseInverseLookUpTable;

/* class methods */
+ (id)customAttributes;

/* instance methods */
- (void)setValue:(id)value forKey:(id)key;
- (struct CGPoint { double x0; double x1; })ReferenceensDistortionPointForPoint:(struct CGPoint { double x0; double x1; })point lookupTable:(id)table distortionOpticalCenter:(struct CGPoint { double x0; double x1; })center imageSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOf:(int)of destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect userInfo:(id)info;
- (id)outputImage;
@end

#endif /* CICameraCalibrationLensCorrection_h */
