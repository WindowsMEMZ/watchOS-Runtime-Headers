//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef _MSStickerSendManagerDelegate_Protocol_h
#define _MSStickerSendManagerDelegate_Protocol_h
@import Foundation;

@protocol _MSStickerSendManagerDelegate <NSObject>
/* instance methods */
- (void)insertSticker:(id)sticker forceStage:(BOOL)stage frameInRemoteView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })view completionHandler:(id /* block */)handler;
- (void)startDragSticker:(id)sticker frameInRemoteView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })view fence:(id)fence completionHandler:(id /* block */)handler;
- (void)stickerDragMoved:(id)moved frameInRemoteView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })view rotation:(double)rotation scale:(double)scale fence:(id)fence completionHandler:(id /* block */)handler;
- (void)stickerDragCanceled;
- (void)stickerDruidDragStarted;
- (void)stickerDruidDragEndedWithMSSticker:(id)mssticker;
- (void)canShowBrowserForPluginIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)showBrowserForPluginIdentifier:(id)identifier style:(unsigned long long)style completion:(id /* block */)completion;
@end

#endif /* _MSStickerSendManagerDelegate_Protocol_h */
