//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFLinkPreviewHeader_h
#define _SFLinkPreviewHeader_h
@import Foundation;

#include "UIView.h"
#include "SFLinkPreviewHeaderContentView.h"
#include "SFLinkPreviewHeaderContentViewDelegate-Protocol.h"
#include "_SFFluidProgressViewDelegate-Protocol.h"
#include "_SFLinkPreviewHeaderDelegate-Protocol.h"

@class NSString, UIView, _SFFluidProgressView;

@interface _SFLinkPreviewHeader : UIView<SFLinkPreviewHeaderContentViewDelegate, _SFFluidProgressViewDelegate> {
  /* instance variables */
  SFLinkPreviewHeaderContentView *_contentView;
  UIView *_hairline;
  BOOL _isMinimumPreviewUI;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastLayoutBounds;
  long long _style;
}

@property (weak, nonatomic) NSObject<_SFLinkPreviewHeaderDelegate> *delegate;
@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) _SFFluidProgressView *progressView;
@property (nonatomic) BOOL linkPreviewEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMinimumPreviewUI:(BOOL)ui;
- (id)_initWithMinimumPreviewUI:(BOOL)ui isOnNativeHost:(BOOL)host;
- (id)opaqueSeparatorColor;
- (double)defaultHeight;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isLinkPreviewEnabled;
- (void)layoutSubviews;
- (void)fluidProgressViewWillShowProgress:(id)progress;
- (void)fluidProgressViewDidShowProgress:(id)progress;
- (void)linkPreviewHeaderContentView:(id)view didEnableLinkPreview:(BOOL)preview;
@end

#endif /* _SFLinkPreviewHeader_h */
