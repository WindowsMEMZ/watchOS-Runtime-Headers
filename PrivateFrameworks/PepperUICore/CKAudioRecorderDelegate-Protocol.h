//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef CKAudioRecorderDelegate_Protocol_h
#define CKAudioRecorderDelegate_Protocol_h
@import Foundation;

@protocol CKAudioRecorderDelegate <NSObject>
/* instance methods */
- (void)audioRecorderDidStartRecording:(id)recording;
- (void)audioRecorderRecordingDidChange:(id)change;
- (void)audioRecorderRecordingDidFail:(id)fail;
- (void)audioRecorderDidUpdateAveragePower:(float)power;
@end

#endif /* CKAudioRecorderDelegate_Protocol_h */
