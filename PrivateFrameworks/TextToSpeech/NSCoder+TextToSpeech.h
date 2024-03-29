//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 583.1.13.0.0
//
#ifndef NSCoder_TextToSpeech_h
#define NSCoder_TextToSpeech_h
@import Foundation;

@interface NSCoder (TextToSpeech)
/* instance methods */
- (void)tts_encodeBytes:(void *)bytes size:(unsigned long long)size forKey:(id)key;
- (void)tts_decodeBytesIntoObject:(void *)object size:(unsigned long long)size forKey:(id)key;
- (void)tts_encodeMatrixFloat4x4:(struct { x0[4] })float4x4 forKey:(id)key;
- (struct { x0[4] })tts_decodeMatrixFloat4x4ForKey:(id)key;
@end

#endif /* NSCoder_TextToSpeech_h */
