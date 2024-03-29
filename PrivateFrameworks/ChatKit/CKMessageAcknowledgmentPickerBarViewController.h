//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKMessageAcknowledgmentPickerBarViewController_h
#define CKMessageAcknowledgmentPickerBarViewController_h
@import Foundation;

#include "UIViewController.h"
#include "CKMessageAcknowledgmentPickerBarDelegate-Protocol.h"
#include "CKMessageAcknowledgmentPickerBarItemViewDelegate-Protocol.h"
#include "CKMessagePartChatItem.h"

@interface CKMessageAcknowledgmentPickerBarViewController : UIViewController<CKMessageAcknowledgmentPickerBarItemViewDelegate>

@property (weak, nonatomic) NSObject<CKMessageAcknowledgmentPickerBarDelegate> *delegate;
@property (retain, nonatomic) CKMessagePartChatItem *chatItem;
@property (nonatomic) char forcedOrientation;
@property (nonatomic) BOOL useForcedOrientation;
@property (nonatomic) char balloonAnchorVerticalOrientation;

/* instance methods */
- (id)initWithChatItem:(id)item;
- (id)pickerView;
- (void)loadView;
- (void)pickerBarItemViewSelectionDidChange:(id)change;
- (void)adjustTailRelativeSiblingViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)adjustTailRelativeSiblingViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame pickerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateFrameRelativeToSiblingViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame withinBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)performShowAnimation:(id /* block */)animation;
- (void)performSendAnimation:(id /* block */)animation;
- (void)performCancelAnimation:(id /* block */)animation;
- (BOOL)isAnchoredToTop;
@end

#endif /* CKMessageAcknowledgmentPickerBarViewController_h */
