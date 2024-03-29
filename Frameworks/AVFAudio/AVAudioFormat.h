//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 629.3.4.0.0
//
#ifndef AVAudioFormat_h
#define AVAudioFormat_h
@import Foundation;

#include "AVAudioChannelLayout.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSDictionary;

@interface AVAudioFormat : NSObject<NSSecureCoding> {
  /* instance variables */
  struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
  AVAudioChannelLayout *_layout;
  void * _reserved;
}

@property (readonly, nonatomic) BOOL standard;
@property (readonly, nonatomic) unsigned long long commonFormat;
@property (readonly, nonatomic) unsigned int channelCount;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) BOOL interleaved;
@property (readonly, nonatomic) const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } * streamDescription;
@property (readonly, nonatomic) AVAudioChannelLayout *channelLayout;
@property (retain, nonatomic) NSData *magicCookie;
@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly, nonatomic) struct opaqueCMFormatDescription * formatDescription;

/* class methods */
+ (id)formatWithInvalidSampleRateAndChannelCount;
+ (id)settingsFromASBD:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)asbd channelLayout:(id)layout;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithStreamDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)description;
- (id)initWithStreamDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)description channelLayout:(id)layout;
- (id)initStandardFormatWithSampleRate:(double)rate channels:(unsigned int)channels;
- (id)initStandardFormatWithSampleRate:(double)rate channelLayout:(id)layout;
- (id)initWithCommonFormat:(unsigned long long)format sampleRate:(double)rate channels:(unsigned int)channels interleaved:(BOOL)interleaved;
- (id)initWithCommonFormat:(unsigned long long)format sampleRate:(double)rate interleaved:(BOOL)interleaved channelLayout:(id)layout;
- (id)initWithSettings:(id)settings;
- (id)initWithCMAudioFormatDescription:(struct opaqueCMFormatDescription *)description;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)isStandard;
- (BOOL)isInterleaved;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* AVAudioFormat_h */
