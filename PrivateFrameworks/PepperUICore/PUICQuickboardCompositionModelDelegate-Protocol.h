//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICQuickboardCompositionModelDelegate_Protocol_h
#define PUICQuickboardCompositionModelDelegate_Protocol_h
@import Foundation;

@protocol PUICQuickboardCompositionModelDelegate <NSObject>
/* instance methods */
- (void)modelDidChange:(id)change;
- (void)showAddContactUI;
- (void)showCreateMessageUI:(id)ui;
- (void)showSetSubjectUI:(id)ui;
- (void)openAttachment;
- (void)sendMessage;
- (void)cancel;
- (void)previewAudio;
@end

#endif /* PUICQuickboardCompositionModelDelegate_Protocol_h */
