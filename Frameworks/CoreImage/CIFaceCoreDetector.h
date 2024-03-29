//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIFaceCoreDetector_h
#define CIFaceCoreDetector_h
@import Foundation;

#include "CIDetector.h"
#include "CIContext.h"

@class VNDetectFaceRectanglesRequest, VNTrackLegacyFaceCoreObjectRequest;

@interface CIFaceCoreDetector : CIDetector {
  /* instance variables */
  BOOL _tracking;
}

@property (retain, nonatomic) CIContext *context;
@property (retain) VNDetectFaceRectanglesRequest *visionRequest;
@property (retain) VNTrackLegacyFaceCoreObjectRequest *visionTrackingRequest;

/* instance methods */
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })ctmForImageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds orientation:(int)orientation;
- (id)adjustedImageFromImage:(id)image orientation:(int)orientation inverseCTM:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)ctm;
- (id)createFaceCoreDataFromCIImage:(id)ciimage width:(unsigned long long *)width height:(unsigned long long *)height;
- (id)initWithContext:(id)context options:(id)options;
- (void)dealloc;
- (id)featuresInImage:(id)image options:(id)options;
- (id)featuresInImage:(id)image;
@end

#endif /* CIFaceCoreDetector_h */
