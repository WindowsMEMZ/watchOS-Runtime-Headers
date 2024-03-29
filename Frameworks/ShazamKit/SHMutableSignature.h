//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHMutableSignature_h
#define SHMutableSignature_h
@import Foundation;

#include "SHSignature.h"
#include "SHAudioConverter.h"
#include "SHSpectralOutputConfiguration.h"
#include "SigX.h"

@class AVAudioFormat;

@interface SHMutableSignature : SHSignature

@property (retain, nonatomic) AVAudioFormat *format;
@property (retain, nonatomic) SigX *sigX;
@property (nonatomic) unsigned int currentFrameCount;
@property (readonly, nonatomic) SHAudioConverter *audioConverter;
@property (retain, nonatomic) SHSpectralOutputConfiguration *spectralOutputConfiguration;
@property (readonly, nonatomic) long long clipStyle;
@property (readonly, nonatomic) double maximumSeconds;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithMaximumSeconds:(double)seconds clipStyle:(long long)style;
- (id)initWithID:(id)id dataRepresentation:(id)representation startTime:(id)time error:(id *)error;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)updateRingBufferDuration:(double)duration error:(id *)error;
- (int)signatureType;
- (void)configureWithFormat:(id)format;
- (void)enableSpectralOutputWithConfiguration:(id)configuration;
- (void)disableSpectralOutput;
- (id)clipExcessAudio:(id)audio;
- (BOOL)appendBuffer:(id)buffer atTime:(id)time error:(id *)error;
- (long long)currentPosition;
- (id)generate:(id *)generate;
- (id)dataRepresentation;
- (double)duration;
- (double)secondsFromFrameCount:(unsigned int)count forFormat:(id)format;
@end

#endif /* SHMutableSignature_h */
