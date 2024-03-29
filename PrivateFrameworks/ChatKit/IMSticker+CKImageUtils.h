//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMSticker_CKImageUtils_h
#define IMSticker_CKImageUtils_h
@import Foundation;

@interface IMSticker (CKImageUtils)
/* class methods */
+ (double)calculatePreviewScaleWithTargetSize:(struct CGSize { double x0; double x1; })size imageData:(id)data;
+ (struct CGSize { double x0; double x1; })calculatedRecentsItemWidthFromStickersUltraExtensionForStickerChatItem:(id)item collectionViewWidth:(double)width;

/* instance methods */
- (id)image;
- (id)imageData;
- (double)calculatePreviewScaleWithTargetSize:(struct CGSize { double x0; double x1; })size;
- (void)stickerViewForStickerChatItem:(id)item snapshotEffectView:(BOOL)view completion:(id /* block */)completion;
- (id)stickerEffectViewForStickerChatItem:(id)item;
- (void)stickerEffectViewSnapshotForStickerChatItem:(id)item completion:(id /* block */)completion;
- (BOOL)prepareToSend;
@end

#endif /* IMSticker_CKImageUtils_h */
