//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLTileRenderPipelineColorAttachmentDescriptorInternal_h
#define MTLTileRenderPipelineColorAttachmentDescriptorInternal_h
@import Foundation;

#include ".h"

@interface MTLTileRenderPipelineColorAttachmentDescriptorInternal :  {
  /* instance variables */
  struct MTLTileRenderPipelineAttachmentDescriptorPrivate { union { struct { unsigned int pixelFormat; } x0; struct { unsigned int bits; } x1; } x0; } _private;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)formattedDescription:(unsigned long long)description;
- (id)description;
- (unsigned long long)pixelFormat;
- (void)setPixelFormat:(unsigned long long)format;
@end

#endif /* MTLTileRenderPipelineColorAttachmentDescriptorInternal_h */
