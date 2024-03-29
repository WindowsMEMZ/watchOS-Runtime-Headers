//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 470.14.3.0.0
//
#ifndef CMIBareMetalTexture_h
#define CMIBareMetalTexture_h
@import Foundation;

#include "MTLTexture-Protocol.h"

@class MTLTextureDescriptor;

@interface CMIBareMetalTexture : NSObject {
  /* instance variables */
  MTLTextureDescriptor *_textureDescriptor;
  unsigned int _osType;
  unsigned int _stride;
  unsigned int _dataOffset;
}

@property (readonly, nonatomic) NSObject<MTLTexture> *texture;

/* instance methods */
- (id)initWithTexture:(id)texture;
- (id)initWithFile:(id)file device:(id)device;
- (id)initWithData:(id)data device:(id)device;
- (BOOL)updateTextureWithFile:(id)file;
- (BOOL)updateTextureWithData:(id)data;
- (int)updateTextureDescriptor:(id)descriptor;
- (int)updateTextureContent:(id)content;
- (BOOL)saveToFile:(id)file;
- (BOOL)saveToFile:(id)file withBMTLversion:(unsigned int)bmtlversion;
@end

#endif /* CMIBareMetalTexture_h */
