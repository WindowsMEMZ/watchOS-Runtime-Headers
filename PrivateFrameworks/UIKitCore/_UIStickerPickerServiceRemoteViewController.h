//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStickerPickerServiceRemoteViewController_h
#define _UIStickerPickerServiceRemoteViewController_h
@import Foundation;

#include "_UIRemoteViewController.h"
#include "_UIStickerPickerRemoteViewControllerDelegate-Protocol.h"

@interface _UIStickerPickerServiceRemoteViewController : _UIRemoteViewController

@property (weak, nonatomic) NSObject<_UIStickerPickerRemoteViewControllerDelegate> *delegate;

/* class methods */
+ (id)requestCardViewControllerWithConnectionHandler:(id /* block */)handler;
+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

/* instance methods */
- (BOOL)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)error;
- (void)stickerPickerCardDidLoad;
- (void)presentCard;
- (void)dismissCard;
- (void)stageStickerWithIdentifier:(id)identifier representations:(id)representations name:(id)name externalURI:(id)uri accessibilityLabel:(id)label;
- (void)stageSticker:(id)sticker;
- (void)remoteHandlesRecentsStickerDonationWithCompletionHandler:(id /* block */)handler;
@end

#endif /* _UIStickerPickerServiceRemoteViewController_h */
