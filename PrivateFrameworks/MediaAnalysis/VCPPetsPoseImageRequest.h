//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPPetsPoseImageRequest_h
#define VCPPetsPoseImageRequest_h
@import Foundation;

#include "VCPRequest.h"
#include "VCPImagePetsKeypointsAnalyzer.h"

@interface VCPPetsPoseImageRequest : VCPRequest {
  /* instance variables */
  VCPImagePetsKeypointsAnalyzer *_analyzer;
  int _preferredWidth;
  int _preferredHeight;
  unsigned int _preferredFormat;
}

/* instance methods */
- (id)init;
- (id)initWithOptions:(id)options;
- (int)parseResults:(id)results observations:(id)observations;
- (id)processImage:(struct __CVBuffer *)image withOptions:(id)options error:(id *)error;
- (struct CGSize { double x0; double x1; })preferredInputSizeWithOptions:(id)options error:(id *)error;
- (unsigned int)preferredPixelFormat;
- (BOOL)cleanupWithOptions:(id)options error:(id *)error;
@end

#endif /* VCPPetsPoseImageRequest_h */
