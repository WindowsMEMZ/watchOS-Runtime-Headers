//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VideoScaler_h
#define VideoScaler_h
@import Foundation;

#include "VCPixelTransferSession.h"

@interface VideoScaler : NSObject {
  /* instance variables */
  VCPixelTransferSession *_pixelTransferSession;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (int)convertAndScalePixelBuffer:(struct __CVBuffer *)buffer toWidth:(int)width toHeight:(int)height withPixelFormat:(unsigned int)format usingPixelBufferPool:(struct __CVPixelBufferPool *)pool andStoreTo:(struct __CVBuffer * *)to;
@end

#endif /* VideoScaler_h */
