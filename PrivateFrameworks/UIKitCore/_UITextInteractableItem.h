//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextInteractableItem_h
#define _UITextInteractableItem_h
@import Foundation;

#include "UIAction.h"
#include "UITextItem.h"
#include "UITextItemMenuConfiguration.h"
#include "UITextRange.h"
#include "_UITextContent-Protocol.h"
#include "_UITextItemHighlightView.h"
#include "_UITextItemInteractionHandler.h"

@class NSArray;
@protocol UIView<_UITextItemInteracting;

@interface _UITextInteractableItem : NSObject {
  /* instance variables */
  struct { unsigned int x :1 primaryAction; unsigned int x :1 menu; } _requested;
  UIAction *_primaryAction;
}

@property (weak, nonatomic) NSObject<_UITextContent> *textContent;
@property (retain, nonatomic) _UITextItemInteractionHandler *itemHandler;
@property (readonly, nonatomic) _UITextItemHighlightView *highlightView;
@property (readonly, nonatomic) UIAction *defaultAction;
@property (readonly, nonatomic) UITextRange *range;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } location;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) NSArray *rects;
@property (readonly, nonatomic) UITextItem *representedTextItem;
@property (readonly, weak, nonatomic) UIView<_UITextItemInteracting> *textItemInteractingView;
@property (readonly, nonatomic) UITextItemMenuConfiguration *preparedMenuConfiguration;

/* class methods */
+ (id)itemForLink:(id)link range:(id)range textItemInteractingView:(id)view location:(struct CGPoint { double x0; double x1; })location;
+ (id)itemForAttachment:(id)attachment range:(id)range textItemInteractingView:(id)view location:(struct CGPoint { double x0; double x1; })location;
+ (id)customItemWithTag:(id)tag range:(id)range textItemInteractingView:(id)view location:(struct CGPoint { double x0; double x1; })location;

/* instance methods */
- (id)initWithRange:(id)range view:(id)view location:(struct CGPoint { double x0; double x1; })location;
- (BOOL)isLinkItem;
- (BOOL)isAttachmentItem;
- (BOOL)isTagItem;
- (id)itemRepresentationWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)_itemRepresentationWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)preparedPrimaryActionWithDefaultAction:(id)action;
- (void)prepareMenuConfigurationWithDefaultMenu:(id)menu;
- (BOOL)showsMenuPreview;
- (BOOL)_showsPreviewByDefault;
- (BOOL)isEqual:(id)equal;
- (BOOL)canInvokeDefaultAction;
- (void)invokeDefaultAction;
- (BOOL)hasPrimaryAction;
- (BOOL)defaultActionPresentsMenu;
- (BOOL)_actionPresentsMenu:(id)menu;
- (BOOL)_allowInteraction:(long long)interaction;
- (void)dealloc;
- (BOOL)_allowHighlight;
- (void)highlight;
- (void)unhighlight;
- (id)_solverWithUnifyRects:(BOOL)rects;
@end

#endif /* _UITextInteractableItem_h */
