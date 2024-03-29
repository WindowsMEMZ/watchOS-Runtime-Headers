//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCAudioPayload_h
#define VCAudioPayload_h
@import Foundation;

#include "VCAudioPayloadConfig.h"

@interface VCAudioPayload : NSObject {
  /* instance variables */
  struct SoundDec_t { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x1; int x2; int x3; struct OpaqueAudioConverter * x4; struct tagVCIndexedBuffer { char * x0; unsigned long long x1; unsigned long long x2; } x5; BOOL x6; struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } x7; struct AudioBufferList * x8; struct AudioBufferList * x9; char * x10; int x11; int x12; int x13; int x14; unsigned char x15; int x16; int x17; unsigned int x18; unsigned int x19; struct CMRData { unsigned int x0; unsigned int x1; struct EVSRFParams { unsigned int x0; unsigned int x1; } x2; } x20; BOOL x21; unsigned char x22; BOOL x23; unsigned char x24; int x25; BOOL x26; struct EVSRFParams { unsigned int x0; unsigned int x1; } x27; struct EVSRFParams { unsigned int x0; unsigned int x1; } x28; } * _encoder;
  BOOL _shouldReset;
  BOOL _ramStadSRCEnabled;
}

@property (readonly, nonatomic) VCAudioPayloadConfig *config;
@property (readonly, nonatomic) unsigned int bitrate;
@property (readonly, nonatomic) int bandwidth;

/* instance methods */
- (BOOL)isDTXEmptyPacket:(unsigned int)packet;
- (id)initWithConfig:(id)config;
- (void)dealloc;
- (BOOL)createEncoderWithInputFormat:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *)format;
- (int)encodeAudio:(struct opaqueVCAudioBufferList *)audio numInputSamples:(int)samples outputBytes:(void *)bytes numOutputBytes:(int)bytes;
- (void)resetEncoder;
- (void)resetEncoderWithSampleBuffer:(char *)buffer numBytes:(int)bytes;
- (BOOL)setEVSRFParams:(struct EVSRFParams { unsigned int x0; unsigned int x1; } *)evsrfparams;
- (BOOL)setCodecModeRequest:(struct _VCAudioCodecModeChangeEvent { int x0; int x1; int x2; unsigned int x3; struct EVSRFParams { unsigned int x0; unsigned int x1; } x4; })request;
- (void)setCurrentDTXEnable:(BOOL)dtxenable;
- (BOOL)getMagicCookie:(char *)cookie withLength:(unsigned int *)length;
- (id)description;
- (void)setRamStadSRCEnabled:(BOOL)srcenabled;
@end

#endif /* VCAudioPayload_h */
