//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHAudioConverter_h
#define SHAudioConverter_h
@import Foundation;

@class AVAudioConverter;

@interface SHAudioConverter : NSObject

@property (retain, nonatomic) AVAudioConverter *converter;

/* instance methods */
- (id)supportedPCMBufferFromBuffer:(id)buffer error:(id *)error;
- (id)audioConverterWithInputFormat:(id)format outputFormat:(id)format;
@end

#endif /* SHAudioConverter_h */
