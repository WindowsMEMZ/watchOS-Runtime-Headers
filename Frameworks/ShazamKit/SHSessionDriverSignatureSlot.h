//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHSessionDriverSignatureSlot_h
#define SHSessionDriverSignatureSlot_h
@import Foundation;

#include "SHSignature.h"
#include "SHSignatureGenerator.h"

@class AVAudioPCMBuffer;

@interface SHSessionDriverSignatureSlot : NSObject

@property (readonly, nonatomic) double maximumSignatureDuration;
@property (nonatomic) long long state;
@property (readonly, nonatomic) SHSignatureGenerator *signatureGenerator;
@property (readonly, nonatomic) SHSignature *generatedSignature;
@property (readonly, nonatomic) AVAudioPCMBuffer *excessAudio;
@property (readonly, nonatomic) SHSignature *signature;
@property (nonatomic) BOOL shouldGenerateSpectralOutput;
@property (readonly, nonatomic) double signatureDuration;

/* instance methods */
- (id)initWithSignatureGenerator:(id)generator;
- (id)initWithMaximumSignatureDuration:(double)duration;
- (void)reset;
- (long long)appendBuffer:(id)buffer atTime:(id)time error:(id *)error;
@end

#endif /* SHSessionDriverSignatureSlot_h */
