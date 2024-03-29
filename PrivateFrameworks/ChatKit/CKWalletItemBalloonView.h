//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKWalletItemBalloonView_h
#define CKWalletItemBalloonView_h
@import Foundation;

#include "CKLinkBalloonView.h"

@class LPWebLinkPresentationProperties;

@interface CKWalletItemBalloonView : CKLinkBalloonView {
  /* instance variables */
  BOOL _pendingPropertyChange;
  BOOL _isIrisAsset;
}

@property (retain, nonatomic) LPWebLinkPresentationProperties *presentationProperties;

/* instance methods */
- (void)configureForMediaObject:(id)object previewWidth:(double)width orientation:(char)orientation hasInvisibleInkEffect:(BOOL)effect;
- (void)prepareForReuse;
- (void)prepareForDisplay;
- (BOOL)isIrisAsset;
- (void)setIsIrisAsset:(BOOL)asset;
@end

#endif /* CKWalletItemBalloonView_h */
