//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICAnimojiStickerPackViewController_h
#define PUICAnimojiStickerPackViewController_h
@import Foundation;

#include "PUICQuickboardEmojiToSelectViewController.h"
#include "PUICAnimojiStickerViewDelegate-Protocol.h"
#include "PUICClassicEmojiView.h"

@class NSString;

@interface PUICAnimojiStickerPackViewController : PUICQuickboardEmojiToSelectViewController {
  /* instance variables */
  NSString *_identifier;
  PUICClassicEmojiView *_emojiView;
}

@property (weak, nonatomic) NSObject<PUICAnimojiStickerViewDelegate> *animojiViewDelegate;

/* instance methods */
- (id)initWithDelegate:(id)delegate identifier:(id)identifier;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
@end

#endif /* PUICAnimojiStickerPackViewController_h */
