//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.25.1.0.0
//
#ifndef SUICVoicePreviewing_Protocol_h
#define SUICVoicePreviewing_Protocol_h
@import Foundation;

@protocol SUICVoicePreviewing <NSObject>

@property (weak) NSObject<SUICVoicePreviewingDelegate> *delegate;

/* instance methods */
- (void)previewVoice:(id)voice completion:(id /* block */)completion;
@optional
/* instance methods */
- (void)stopVoicePreview;
@end

#endif /* SUICVoicePreviewing_Protocol_h */
