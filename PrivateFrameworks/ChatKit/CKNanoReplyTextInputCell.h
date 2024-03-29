//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKNanoReplyTextInputCell_h
#define CKNanoReplyTextInputCell_h
@import Foundation;

#include "CKTranscriptCell.h"
#include "CKNanoReplyTextInputCellDelegate-Protocol.h"
#include "CKNanoReplyTextInputView.h"
#include "CKNanoReplyTextInputViewDelegate-Protocol.h"

@class NSString;

@interface CKNanoReplyTextInputCell : CKTranscriptCell<CKNanoReplyTextInputViewDelegate>

@property (retain, nonatomic) CKNanoReplyTextInputView *textInputView;
@property (weak, nonatomic) NSObject<CKNanoReplyTextInputCellDelegate> *replyDelegate;
@property (readonly, copy, nonatomic) NSString *primaryLanguage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)defaultCellHeightForLanguage:(id)language;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setPrimaryLanguage:(id)language appConfig:(id)config buttonTintColor:(id)color placeholderText:(id)text;
- (void)setInputContextHistory:(id)history;
- (id)gesturePrimaryActionView;
- (void)replyTextInputView:(id)view enteredText:(id)text;
- (void)replyTextInputView:(id)view tappedReplyType:(long long)type;
- (id)viewControllerForPresentingApplicationLauncherForTextInputView:(id)view;
@end

#endif /* CKNanoReplyTextInputCell_h */
