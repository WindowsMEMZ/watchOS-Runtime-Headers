//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAppearanceSpecifier_h
#define PKAppearanceSpecifier_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class UIColor, UIImage;

@interface PKAppearanceSpecifier : NSObject<NSCopying>

@property (nonatomic) BOOL hasDarkAppearance;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIColor *foregroundColor;
@property (copy, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) UIColor *tableViewSeparatorColor;
@property (copy, nonatomic) UIColor *tableViewCellHighlightColor;
@property (copy, nonatomic) UIColor *tableViewCellAccessoryColor;
@property (copy, nonatomic) UIColor *tableViewCellAccessoryHighlightColor;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIColor *altTextColor;
@property (copy, nonatomic) UIColor *buttonTextColor;
@property (copy, nonatomic) UIColor *buttonDisabledTextColor;
@property (copy, nonatomic) UIColor *buttonBackgroundColor;
@property (copy, nonatomic) UIColor *continueButtonTintColor;
@property (copy, nonatomic) UIColor *editableTextColor;
@property (copy, nonatomic) UIColor *editablePlaceholderTextColor;
@property (copy, nonatomic) UIColor *editableInsertionPointColor;
@property (copy, nonatomic) UIColor *editableSelectionBarColor;
@property (copy, nonatomic) UIColor *editableSelectionHighlightColor;
@property (copy, nonatomic) UIColor *footerHyperlinkColor;
@property (copy, nonatomic) UIColor *progressBarTintColor;
@property (copy, nonatomic) UIColor *progressBarTrackTintColor;
@property (copy, nonatomic) UIColor *searchBarTintcolor;
@property (copy, nonatomic) UIColor *cameraCaptureMaskColor;
@property (copy, nonatomic) UIColor *cameraCaptureMaskOutlineColor;
@property (copy, nonatomic) UIImage *navBarPointImage;
@property (copy, nonatomic) UIImage *navBarShadowPointImage;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKAppearanceSpecifier_h */
