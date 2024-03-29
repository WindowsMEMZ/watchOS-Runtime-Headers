//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal_h
#define MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal_h
@import Foundation;

#include ".h"

@interface MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal :  {
  /* instance variables */
  MTLBlitPassSampleBufferAttachmentDescriptorInternal * _sampleDescriptors[4];
}

/* instance methods */
- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)subscript;
- (void)setObject:(id)object atIndexedSubscript:(unsigned long long)subscript;
- (id)_descriptorAtIndex:(unsigned long long)index;
@end

#endif /* MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal_h */
