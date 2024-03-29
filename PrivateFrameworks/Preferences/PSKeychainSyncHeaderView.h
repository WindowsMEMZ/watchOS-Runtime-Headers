//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSKeychainSyncHeaderView_h
#define PSKeychainSyncHeaderView_h
@import Foundation;

#include "UIView.h"
#include "PSHeaderFooterView-Protocol.h"

@class UILabel;

@interface PSKeychainSyncHeaderView : UIView<PSHeaderFooterView> {
  /* instance variables */
  UILabel *_titleLabel;
  UILabel *_detailLabel;
}

@property (nonatomic) BOOL usesCompactLayout;

/* instance methods */
- (id)initWithSpecifier:(id)specifier;
- (void)setDetailText:(id)text;
- (void)setTitleText:(id)text;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)width inTableView:(id)view;
@end

#endif /* PSKeychainSyncHeaderView_h */
