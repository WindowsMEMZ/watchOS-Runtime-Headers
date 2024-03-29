//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICGridContentView_h
#define PUICGridContentView_h
@import Foundation;

#include "PUICPlatterCellContainerView.h"
#include "UIContentConfiguration-Protocol.h"
#include "UIContentView-Protocol.h"

@class NSLayoutConstraint, NSString, UIImageView, UILabel, UIView;

@interface PUICGridContentView : PUICPlatterCellContainerView<UIContentView> {
  /* instance variables */
  UIView *_textSlotView;
  NSLayoutConstraint *_textHeightConstraint;
}

@property (retain, nonatomic) UIImageView *imageSlotView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) NSObject<UIContentConfiguration> *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)_setupSubviews;
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;
- (void)_contentSizeCategoryDidChange:(id)change;
- (void)_updateForContentSize;
@end

#endif /* PUICGridContentView_h */
