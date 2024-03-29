//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIImageProcessorInput_Protocol_h
#define CIImageProcessorInput_Protocol_h
@import Foundation;

#include "CIImageProcessorInOut.h"
#include "CIImageProcessorInput-Protocol.h"

@protocol MTLTexture;

@protocol CIImageProcessorInput 

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } region;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) const void * baseAddress;
@property (readonly, nonatomic) struct __IOSurface * surface;
@property (readonly, nonatomic) struct __CVBuffer * pixelBuffer;
@property (readonly, nonatomic) NSObject<MTLTexture> *metalTexture;
@property (readonly, nonatomic) unsigned long long digest;
@property (readonly, nonatomic) unsigned long long roiTileIndex;
@property (readonly, nonatomic) unsigned long long roiTileCount;

@end

#endif /* CIImageProcessorInput_Protocol_h */
