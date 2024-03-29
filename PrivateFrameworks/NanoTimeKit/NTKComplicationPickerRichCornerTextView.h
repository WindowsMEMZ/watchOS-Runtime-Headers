//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKComplicationPickerRichCornerTextView_h
#define NTKComplicationPickerRichCornerTextView_h
@import Foundation;

#include "UITextView.h"

@class NSLayoutConstraint, NSString;

@interface NTKComplicationPickerRichCornerTextView : UITextView

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } textViewSize;
@property (copy, nonatomic) NSString *unformattedString;
@property (readonly, nonatomic) unsigned long long anchorPoint;
@property (readonly, nonatomic) NSLayoutConstraint *cornerTextViewWidthConstraint;

/* class methods */
+ (id)defaultFont;

/* instance methods */
- (id)initWithAnchorPoint:(unsigned long long)point;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setAttributedText:(id)text;
- (void)setText:(id)text;
@end

#endif /* NTKComplicationPickerRichCornerTextView_h */
