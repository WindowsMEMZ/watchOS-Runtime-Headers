//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 470.14.3.0.0
//
#ifndef FigCaptureSourceFormatDimensions_h
#define FigCaptureSourceFormatDimensions_h
@import Foundation;

@interface FigCaptureSourceFormatDimensions : NSObject

@property (readonly) struct { int x0; int x1; } dimensions;
@property (readonly) struct { int x0; int x1; } deferredPhotoProxyDimensions;
@property (readonly) BOOL isPrivate;
@property (readonly) int flavor;
@property (readonly) struct { int x0; int x1; } maxUpscalingDimensions;

/* class methods */
+ (id)identifySourceFormatDimensionsFromDimensions:(struct { int x0; int x1; })dimensions availableHighResStillImageDimensions:(id)dimensions;
+ (int)identifyResolutionFlavorFromDimensions:(struct { int x0; int x1; })dimensions availableHighResStillImageDimensions:(id)dimensions;
+ (id)identifyDimensionsFromFlavor:(int)flavor availableHighResStillImageDimensions:(id)dimensions;

/* instance methods */
- (id)initWithDimensions:(struct { int x0; int x1; })dimensions deferredPhotoProxyDimensions:(struct { int x0; int x1; })dimensions isPrivate:(BOOL)private flavor:(int)flavor maxUpscalingDimensions:(struct { int x0; int x1; })dimensions;
- (BOOL)dimensionsAreEqualToDimensions:(struct { int x0; int x1; })dimensions;
- (id)description;
@end

#endif /* FigCaptureSourceFormatDimensions_h */
