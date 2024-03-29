//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef NNMKMessageContentTextView_h
#define NNMKMessageContentTextView_h
@import Foundation;

#include "UITextView.h"
#include "NNMKMessage.h"
#include "NNMKMessageBodyLayoutManager.h"
#include "NNMKMessageBodyTextStorage.h"
#include "NNMKMessageContent.h"
#include "NNMKMessageContentTextViewDelegate-Protocol.h"
#include "NNMKTextAttachmentViewDelegate-Protocol.h"
#include "UITextViewDelegate_Private-Protocol.h"

@class NSString, NSTextContainer, UIButton;

@interface NNMKMessageContentTextView : UITextView<UITextViewDelegate_Private, NNMKTextAttachmentViewDelegate>

@property (nonatomic) BOOL contentDownloadFailed;
@property (nonatomic) BOOL contentBeingDisplayed;
@property (nonatomic) BOOL renderingContent;
@property (retain, nonatomic) UIButton *contactsTransparentButton;
@property (retain, nonatomic) NSTextContainer *bodyContentTextContainer;
@property (retain, nonatomic) NNMKMessageBodyLayoutManager *bodyContentLayoutManager;
@property (retain, nonatomic) NNMKMessageBodyTextStorage *bodyContentTextStorage;
@property (weak, nonatomic) NSObject<NNMKMessageContentTextViewDelegate> *messageContentViewDelegate;
@property (retain, nonatomic) NNMKMessageContent *content;
@property (retain, nonatomic) NNMKMessage *message;
@property (nonatomic) BOOL suppressContentWarningMessage;
@property (nonatomic) BOOL showQuotedText;
@property (nonatomic) BOOL hasQuotedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithScrollEnabled:(BOOL)enabled;
- (void)dealloc;
- (void)notifyContentDownloadFailure;
- (void)notifyImageAttachmentLoadedForContentId:(id)id;
- (void)updateAttachmentWithContentId:(id)id viewModel:(id)model;
- (void)resumeAnimatedImages;
- (void)setContentSize:(struct CGSize { double x0; double x1; })size;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidScrollToTop:(id)top;
- (void)_handleDidEndScrolling;
- (BOOL)_textView:(id)view shouldHighlightForInteractionInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)_textView:(id)view linkTextAttributesForLink:(id)link inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (BOOL)textView:(id)view shouldInteractWithURL:(id)url inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range interaction:(long long)interaction;
- (void)didTapAttachmentViewWithContentId:(id)id;
- (void)_contentSizeCategoryChanged:(id)changed;
- (void)_redrawContent;
- (id)_attributedStringForWarningMessage:(id)message;
- (id)_defaultParagraphStyle;
- (void)_notifyContentSizeDidChange;
- (BOOL)_isEmptyString:(id)string;
- (BOOL)_wantsBaselineUpdatingFollowingConstraintsPass;
@end

#endif /* NNMKMessageContentTextView_h */
