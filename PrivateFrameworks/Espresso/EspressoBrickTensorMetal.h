//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.2.3.0.0
//
#ifndef EspressoBrickTensorMetal_h
#define EspressoBrickTensorMetal_h
@import Foundation;

#include "EspressoBrickTensor.h"

@protocol MTLTexture;

@interface EspressoBrickTensorMetal : EspressoBrickTensor

@property (retain) NSObject<MTLTexture> *texture;

/* instance methods */
@end

#endif /* EspressoBrickTensorMetal_h */
