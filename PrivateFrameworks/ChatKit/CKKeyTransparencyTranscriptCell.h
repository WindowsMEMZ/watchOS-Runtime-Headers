//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKKeyTransparencyTranscriptCell_h
#define CKKeyTransparencyTranscriptCell_h
@import Foundation;

#include "CKTranscriptCell.h"

@class NSAttributedString, UIButton, UIImageView, UILabel;
@protocol CKKeyTransparencyTranscriptCellDelegate;

@interface CKKeyTransparencyTranscriptCell : CKTranscriptCell

@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *warningImageView;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) unsigned long long keyTransparencyStatus;
@property (nonatomic) BOOL isGroupChat;
@property (weak, nonatomic) NSObject<CKKeyTransparencyTranscriptCellDelegate> *delegate;

/* class methods */
+ (id)reuseIdentifier;
+ (id)generateWarningImageView;
+ (id)generateActionButton;
+ (id)generateLabel;
+ (double)heightForChatItem:(id)item fittingSize:(struct CGSize { double x0; double x1; })size;

/* instance methods */
- (void)configureForChatItem:(id)item context:(id)context animated:(BOOL)animated animationDuration:(double)duration animationCurve:(long long)curve;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviewsForAlignmentContents;
- (void)_layoutWarningImageInAlignmentContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)_layoutLabelInAlignmentContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)_layoutButtonInAlignmentContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)prepareForReuse;
- (void)_setupKeyTransparencyMenuWatch;
- (void)keyTransparencyOffErrorButtonTapped:(id)tapped;
- (id)menuForKTStatusError;
- (id)menuForKTStatusUnavailable;
- (id)menuForKTStatusTurnedOff;
- (id)watchMenuForKTStatusTurnedOff;
- (id)learnMoreAction;
- (id)reportToAppleAction;
- (id)verifyConversationAction;
- (id)clearWarningAction;
@end

#endif /* CKKeyTransparencyTranscriptCell_h */
