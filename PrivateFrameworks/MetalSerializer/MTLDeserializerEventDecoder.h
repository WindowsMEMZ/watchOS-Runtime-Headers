//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLDeserializerEventDecoder_h
#define MTLDeserializerEventDecoder_h
@import Foundation;

#include "MTLDeserializerDecoder-Protocol.h"
#include "_MTLDeserializer.h"

@class NSString;
@protocol MTLCommandBuffer;

@interface MTLDeserializerEventDecoder : NSObject<MTLDeserializerDecoder> {
  /* instance variables */
  _MTLDeserializer *deserializer;
  NSObject<MTLCommandBuffer> *commandBuffer;
}

@property (readonly) unsigned char type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDeserializer:(id)deserializer commandBuffer:(id)buffer;
- (void)readCommand:(struct { unsigned int x0; unsigned int x1; } *)command withIterator:(id)iterator expectedSize:(unsigned long long)size into:(void *)into;
- (void)decodeSignalEvent:(struct { unsigned int x0; unsigned int x1; } *)event withIterator:(id)iterator;
- (void)decodeWaitForEvent:(struct { unsigned int x0; unsigned int x1; } *)event withIterator:(id)iterator;
- (void)decodeWaitForEventTimeout:(struct { unsigned int x0; unsigned int x1; } *)timeout withIterator:(id)iterator;
- (void)decodeWithHeader:(struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)header withIterator:(id)iterator;
- (void)fault;
@end

#endif /* MTLDeserializerEventDecoder_h */
