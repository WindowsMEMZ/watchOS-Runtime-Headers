//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSSSRXPCClientDelegate_Protocol_h
#define CSSSRXPCClientDelegate_Protocol_h
@import Foundation;

@protocol CSSSRXPCClientDelegate <NSObject>
/* instance methods */
- (void)didReceiveSpeakerRecognitionScoreCard:(id)card;
- (void)didFinishSpeakerRecognition:(id)recognition;
@end

#endif /* CSSSRXPCClientDelegate_Protocol_h */
