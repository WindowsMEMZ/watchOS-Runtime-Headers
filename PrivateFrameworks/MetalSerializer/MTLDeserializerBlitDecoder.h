//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLDeserializerBlitDecoder_h
#define MTLDeserializerBlitDecoder_h
@import Foundation;

#include "MTLBlitCommandEncoderSPI-Protocol.h"
#include "MTLDeserializerDecoder-Protocol.h"
#include "_MTLDeserializer.h"

@class NSString;

@interface MTLDeserializerBlitDecoder : NSObject<MTLDeserializerDecoder> {
  /* instance variables */
  _MTLDeserializer *deserializer;
  NSObject<MTLBlitCommandEncoderSPI> *blitEncoder;
}

@property (readonly) unsigned char type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDeserializer:(id)deserializer commandBuffer:(id)buffer;
- (void)dealloc;
- (void)readCommand:(struct { unsigned int x0; unsigned int x1; } *)command withIterator:(id)iterator expectedSize:(unsigned long long)size into:(void *)into;
- (id)getBufferForReferenceNonNull:(unsigned int)null;
- (id)getTextureForReferenceNonNull:(unsigned int)null;
- (void)decodeCopyFromBufferToTexture:(struct { unsigned int x0; unsigned int x1; } *)texture withIterator:(id)iterator;
- (void)decodeCopyFromBufferToBuffer:(struct { unsigned int x0; unsigned int x1; } *)buffer withIterator:(id)iterator;
- (void)decodeCopyFromTextureToBuffer:(struct { unsigned int x0; unsigned int x1; } *)buffer withIterator:(id)iterator;
- (void)decodeCopyFromTextureToTexture:(struct { unsigned int x0; unsigned int x1; } *)texture withIterator:(id)iterator;
- (void)decodeCopyFromTextureToTextureWithNumSliceLevel:(struct { unsigned int x0; unsigned int x1; } *)level withIterator:(id)iterator;
- (void)decodeCopyFromTextureToTextureWithOptions:(struct { unsigned int x0; unsigned int x1; } *)options withIterator:(id)iterator;
- (void)decodeFillBuffer:(struct { unsigned int x0; unsigned int x1; } *)buffer withIterator:(id)iterator;
- (void)decodeGenerateMipmaps:(struct { unsigned int x0; unsigned int x1; } *)mipmaps withIterator:(id)iterator;
- (void)decodeOptimize:(struct { unsigned int x0; unsigned int x1; } *)optimize withIterator:(id)iterator;
- (void)decodeOptimizeImage:(struct { unsigned int x0; unsigned int x1; } *)image withIterator:(id)iterator;
- (void)decodeSynchronizeResource:(struct { unsigned int x0; unsigned int x1; } *)resource withIterator:(id)iterator;
- (void)decodeSynchronizeTextureImage:(struct { unsigned int x0; unsigned int x1; } *)image withIterator:(id)iterator;
- (void)decodeBlitUpdateFence:(struct { unsigned int x0; unsigned int x1; } *)fence withIterator:(id)iterator;
- (void)decodeBlitWaitForFence:(struct { unsigned int x0; unsigned int x1; } *)fence withIterator:(id)iterator;
- (void)decodeWithHeader:(struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)header withIterator:(id)iterator;
- (void)fault;
@end

#endif /* MTLDeserializerBlitDecoder_h */
