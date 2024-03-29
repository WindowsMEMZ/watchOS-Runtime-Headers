//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKExclamationAcknowledgmentGlyphView_h
#define CKExclamationAcknowledgmentGlyphView_h
@import Foundation;

#include "CKAcknowledgmentGlyphView.h"
#include "CKAcknowledgmentGlyphImageView.h"

@interface CKExclamationAcknowledgmentGlyphView : CKAcknowledgmentGlyphView

@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *leftExclamationGlyph;
@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *rightExclamationGlyph;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame color:(char)color;
- (void)layoutSubviews;
- (void)setGlyphColor:(id)color;
- (long long)acknowledgmentType;
- (struct CGPoint { double x0; double x1; })glyphOffset;
- (void)animateWithBeginTime:(double)time completionDelay:(double)delay completion:(id /* block */)completion;
- (double)animationDuration;
@end

#endif /* CKExclamationAcknowledgmentGlyphView_h */
