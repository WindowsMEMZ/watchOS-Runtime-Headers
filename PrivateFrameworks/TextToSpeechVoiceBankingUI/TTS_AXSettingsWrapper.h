//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 583.1.13.0.0
//
#ifndef TTS_AXSettingsWrapper_h
#define TTS_AXSettingsWrapper_h
@import Foundation;

@interface TTS_AXSettingsWrapper : NSObject
/* class methods */
+ (id)customSettingsForVoice:(id)voice speechSource:(id)source;
+ (void)setCustomSettingsForVoice:(id)voice speechSource:(id)source settings:(id)settings;
@end

#endif /* TTS_AXSettingsWrapper_h */
