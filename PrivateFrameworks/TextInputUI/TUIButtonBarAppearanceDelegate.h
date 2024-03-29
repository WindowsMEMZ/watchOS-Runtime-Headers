//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUIButtonBarAppearanceDelegate_h
#define TUIButtonBarAppearanceDelegate_h
@import Foundation;

#include "TUISystemInputAssistantView.h"
#include "_UIButtonBarAppearanceDelegate-Protocol.h"

@class NSString, UIColor, UIImageSymbolConfiguration;

@interface TUIButtonBarAppearanceDelegate : NSObject<_UIButtonBarAppearanceDelegate>

@property (weak, nonatomic) TUISystemInputAssistantView *systemInputAssistantView;
@property (readonly, nonatomic) _UIBarButtonItemAppearanceStorage *appearanceStorage;
@property (readonly, nonatomic) long long barType;
@property (readonly, nonatomic) BOOL compactMetrics;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) BOOL centerTextButtons;
@property (readonly, nonatomic) double defaultEdgeSpacing;
@property (readonly, nonatomic) double defaultTextPadding;
@property (readonly, nonatomic) double backButtonMargin;
@property (readonly, nonatomic) double backButtonMaximumWidth;
@property (readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

/* instance methods */
- (id)initWithSystemInputAssistantView:(id)view;
@end

#endif /* TUIButtonBarAppearanceDelegate_h */
