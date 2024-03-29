//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPCaptionBarStyle_h
#define LPCaptionBarStyle_h
@import Foundation;

#include "LPAudioPlayButtonStyle.h"
#include "LPButtonStyle.h"
#include "LPCaptionBarAccessoryStyle.h"
#include "LPCollaborationFooterStyle.h"
#include "LPIconBadgeStyle.h"
#include "LPImageViewStyle.h"
#include "LPPadding.h"
#include "LPPointUnit.h"
#include "LPVerticalTextStackViewStyle.h"

@class UIColor;

@interface LPCaptionBarStyle : NSObject

@property (readonly, nonatomic) LPImageViewStyle *leadingIcon;
@property (readonly, nonatomic) LPImageViewStyle *trailingIcon;
@property (readonly, nonatomic) LPIconBadgeStyle *leadingIconBadge;
@property (readonly, nonatomic) LPIconBadgeStyle *trailingIconBadge;
@property (readonly, nonatomic) LPCaptionBarAccessoryStyle *leadingAccessory;
@property (readonly, nonatomic) LPCaptionBarAccessoryStyle *trailingAccessory;
@property (readonly, nonatomic) LPVerticalTextStackViewStyle *textStack;
@property (retain, nonatomic) LPPointUnit *minimumWidth;
@property (readonly, nonatomic) LPAudioPlayButtonStyle *playButton;
@property (readonly, retain, nonatomic) LPPadding *playButtonPadding;
@property (retain, nonatomic) LPButtonStyle *button;
@property (nonatomic) BOOL usesOutOfLineButton;
@property (nonatomic) BOOL canAddLineForButton;
@property (nonatomic) BOOL positionButtonRelativeToTextStack;
@property (nonatomic) BOOL buttonRespectsTextStackPadding;
@property (nonatomic) BOOL buttonIgnoresTextSafeAreaInsets;
@property (nonatomic) BOOL addFullWidthLineForButton;
@property (nonatomic) BOOL alignButtonWithCaptionTextLeadingEdge;
@property (nonatomic) BOOL expandButtonToCaptionEdge;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) unsigned int minimumNumberOfLinesToVerticallyCenter;
@property (retain, nonatomic) LPCollaborationFooterStyle *collaborationFooter;

/* instance methods */
- (id)initWithPlatform:(long long)platform sizeClass:(unsigned long long)class fontScalingFactor:(double)factor;
- (id)leftIcon;
- (id)rightIcon;
- (id)leftAccessory;
- (id)rightAccessory;
@end

#endif /* LPCaptionBarStyle_h */
