//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUISuggestionCandidateCell_h
#define TUISuggestionCandidateCell_h
@import Foundation;

#include "TUICandidateBaseCell.h"

@class NSLayoutConstraint, TIKeyboardCandidate, UIImageView, UILabel, UILayoutGuide;

@interface TUISuggestionCandidateCell : TUICandidateBaseCell

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILayoutGuide *paddedContainer;
@property (retain, nonatomic) UILayoutGuide *centeredContainer;
@property (retain, nonatomic) NSLayoutConstraint *paddingBetweenConstraint;
@property (retain, nonatomic) NSLayoutConstraint *topPaddingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leftPaddingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomPaddingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *rightPaddingConstraint;
@property (retain, nonatomic) TIKeyboardCandidate *candidate;

/* class methods */
+ (id)reuseIdentifier;

/* instance methods */
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)setStyle:(id)style;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)textSuggestion;
- (id)headerText;
- (id)bodyText;
- (id)image;
- (void)updateLabel;
@end

#endif /* TUISuggestionCandidateCell_h */
