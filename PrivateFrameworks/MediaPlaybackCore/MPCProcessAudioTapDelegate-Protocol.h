//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCProcessAudioTapDelegate_Protocol_h
#define MPCProcessAudioTapDelegate_Protocol_h
@import Foundation;

@protocol MPCProcessAudioTapDelegate <NSObject>
/* instance methods */
- (void)processAudioTapDidReceiveAudioSamples:(void *)samples numberOfSamples:(unsigned int)samples;
@optional
/* instance methods */
- (void)processAudioTapDidStop;
@end

#endif /* MPCProcessAudioTapDelegate_Protocol_h */
