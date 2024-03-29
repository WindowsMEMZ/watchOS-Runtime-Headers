//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 629.3.4.0.0
//
#ifndef AVAudioCompressedBuffer_h
#define AVAudioCompressedBuffer_h
@import Foundation;

#include "AVAudioBuffer.h"

@interface AVAudioCompressedBuffer : AVAudioBuffer

@property (readonly, nonatomic) unsigned int packetCapacity;
@property (nonatomic) unsigned int packetCount;
@property (readonly, nonatomic) long long maximumPacketSize;
@property (readonly, nonatomic) void * data;
@property (readonly, @dynamic, nonatomic) unsigned int byteCapacity;
@property (@dynamic, nonatomic) unsigned int byteLength;
@property (readonly, nonatomic) struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } * packetDescriptions;

/* instance methods */
- (id)initWithFormat:(id)format packetCapacity:(unsigned int)capacity maximumPacketSize:(long long)size;
- (id)initWithFormat:(id)format packetCapacity:(unsigned int)capacity;
@end

#endif /* AVAudioCompressedBuffer_h */
