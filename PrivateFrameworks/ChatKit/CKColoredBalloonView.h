//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKColoredBalloonView_h
#define CKColoredBalloonView_h
@import Foundation;

#include "CKBalloonView.h"
#include "CKBalloonImageView.h"
#include "CKGradientView.h"

@protocol UIView<CKGradientReferenceView;

@interface CKColoredBalloonView : CKBalloonView

@property (retain, nonatomic) CKBalloonImageView *mask;
@property (retain, nonatomic) CKGradientView *gradientView;
@property (retain, nonatomic) CKBalloonImageView *effectViewMask;
@property (nonatomic) BOOL wantsGradient;
@property (retain, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (readonly, nonatomic) BOOL hasBackground;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } gradientOverrideFrame;

/* instance methods */
- (void)configureForMessagePart:(id)part;
- (void)configureForComposition:(id)composition;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)prepareForDisplay;
- (void)setHasTail:(BOOL)tail;
- (void)setCanUseOpaqueMask:(BOOL)mask;
- (BOOL)needsGroupOpacity;
- (id)overlayColor;
- (void)setColor:(char)color;
- (void)updateWantsGradient;
- (void)setBalloonDescriptor:(struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })descriptor;
- (struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })balloonDescriptor;
- (void)addFilter:(id)filter;
- (void)clearFilters;
- (void)setEffectViewMaskImage:(id)image;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* CKColoredBalloonView_h */
