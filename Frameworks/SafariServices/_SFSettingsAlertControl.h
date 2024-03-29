//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFSettingsAlertControl_h
#define _SFSettingsAlertControl_h
@import Foundation;

#include "UIControl.h"
#include "SFSettingsAlertItemView-Protocol.h"
#include "SFSettingsAlertItemViewDelegate-Protocol.h"
#include "_SFSettingsAlertItem.h"
#include "_SFSettingsAlertItemBackgroundView.h"

@class NSAttributedString, NSString, UIImage;

@interface _SFSettingsAlertControl : UIControl<SFSettingsAlertItemView>

@property (weak, nonatomic) _SFSettingsAlertItem *item;
@property (nonatomic) BOOL hidesSeparator;
@property (readonly, nonatomic) _SFSettingsAlertItemBackgroundView *backgroundView;
@property (nonatomic) long long defaultBackgroundMode;
@property (copy, @dynamic, nonatomic) NSString *text;
@property (copy, @dynamic, nonatomic) NSAttributedString *attributedText;
@property (copy, @dynamic, nonatomic) NSString *detailText;
@property (copy, @dynamic, nonatomic) NSAttributedString *attributedDetailText;
@property (retain, @dynamic, nonatomic) UIImage *image;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) long long backgroundMode;
@property (weak, nonatomic) NSObject<SFSettingsAlertItemViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setHighlighted:(BOOL)highlighted;
- (void)_updateBackgroundView;
@end

#endif /* _SFSettingsAlertControl_h */
