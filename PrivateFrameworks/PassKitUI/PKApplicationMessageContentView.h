//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKApplicationMessageContentView_h
#define PKApplicationMessageContentView_h
@import Foundation;

#include "UIView.h"
#include "PKApplicationMessageContentViewDelegate-Protocol.h"
#include "PKApplicationMessageContentView_State.h"

@class CAFilter, NSMutableArray, PKApplicationMessageContent, UIButton, UIFont, UIImageView, UILabel, UIView;

@interface PKApplicationMessageContentView : UIView {
  /* instance variables */
  CAFilter *_blurFilter;
  double _filterRadius;
  UIButton *_dismiss;
  UIView *_contentView;
  struct { double fadeInDelay; struct { struct UIEdgeInsets { double top; double left; double bottom; double right; } margins; } previousLayoutState; } _animationState;
  UIView *_iconContainer;
  UIImageView *_icon;
  UILabel *_title;
  UILabel *_body;
  struct { struct UIEdgeInsets { double top; double left; double bottom; double right; } margins; } _layoutState;
  PKApplicationMessageContentView_State *_state;
  NSMutableArray *_snapshots;
  UIFont *_significantFont;
  UIFont *_fixedSignificantFont;
  UIFont *_regularFont;
  BOOL _deferringUpdate;
  BOOL _deferredSubviewUpdate;
  BOOL _dismissable;
  PKApplicationMessageContent *_content;
  NSObject<PKApplicationMessageContentViewDelegate> *_delegate;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* PKApplicationMessageContentView_h */
