//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardMediaServiceRemoteViewController_h
#define UIKeyboardMediaServiceRemoteViewController_h
@import Foundation;

#include "_UIRemoteViewController.h"
#include "UIKeyboardMediaHostProtocol-Protocol.h"
#include "_UIStickerPickerHostProtocol-Protocol.h"

@class NSString;
@protocol UIKeyboardMediaServiceRemoteViewControllerDelegate;

@interface UIKeyboardMediaServiceRemoteViewController : _UIRemoteViewController<UIKeyboardMediaHostProtocol, _UIStickerPickerHostProtocol> {
  /* instance variables */
  BOOL _shownInline;
}

@property (nonatomic) BOOL _shownInline;
@property (weak, nonatomic) NSObject<UIKeyboardMediaServiceRemoteViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)requestInlineViewControllerWithConnectionHandler:(id /* block */)handler;
+ (id)requestCardViewControllerWithConnectionHandler:(id /* block */)handler;
+ (BOOL)__shouldHostRemoteTextEffectsWindow;
+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

/* instance methods */
- (BOOL)_canShowWhileLocked;
- (void)setHostBundleID:(id)id;
- (BOOL)__shouldRemoteViewControllerFenceGeometryChange:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x5; id x6; id x7; id x8; id x9; } *)change forAncestor:(id)ancestor;
- (void)viewServiceDidTerminateWithError:(id)error;
- (void)presentCard;
- (void)dismissCard;
- (void)pasteImageAtFileHandle:(id)handle;
- (void)stageStickerWithFileHandle:(id)handle url:(id)url accessibilityLabel:(id)label;
- (void)requestInsertionPointCompletion:(id /* block */)completion;
- (void)draggedStickerToPoint:(struct CGPoint { double x0; double x1; })point;
- (void)stageStickerWithIdentifier:(id)identifier representations:(id)representations name:(id)name externalURI:(id)uri accessibilityLabel:(id)label;
- (void)stageSticker:(id)sticker;
- (void)remoteHandlesRecentsStickerDonationWithCompletionHandler:(id /* block */)handler;
- (void)stickerPickerCardDidLoad;
- (BOOL)_isShownInline;
- (void)_setShownInline:(BOOL)inline;
@end

#endif /* UIKeyboardMediaServiceRemoteViewController_h */
