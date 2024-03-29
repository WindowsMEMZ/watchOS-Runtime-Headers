//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INUIImageSizeProvider_h
#define INUIImageSizeProvider_h
@import Foundation;

#include "INImageSizeProvider-Protocol.h"

@class NSString;

@interface INUIImageSizeProvider : NSObject<INImageSizeProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct { double x0; double x1; })imageSizeForImage:(id)image;
+ (id)downscaledPNGImageForImage:(id)image size:(struct { double x0; double x1; })size error:(id *)error;
@end

#endif /* INUIImageSizeProvider_h */
