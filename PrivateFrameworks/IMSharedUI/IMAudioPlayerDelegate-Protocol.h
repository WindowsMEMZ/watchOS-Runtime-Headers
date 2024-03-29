//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMAudioPlayerDelegate_Protocol_h
#define IMAudioPlayerDelegate_Protocol_h
@import Foundation;

@protocol IMAudioPlayerDelegate <NSObject>
/* instance methods */
- (void)audioPlayerCurrentTimeDidChange:(id)change;
@optional
/* instance methods */
- (void)audioPlayerDidPrepareAudioToPlay:(id)play successfully:(BOOL)successfully;
@end

#endif /* IMAudioPlayerDelegate_Protocol_h */
