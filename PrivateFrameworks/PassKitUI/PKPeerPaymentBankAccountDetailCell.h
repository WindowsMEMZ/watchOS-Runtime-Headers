//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentBankAccountDetailCell_h
#define PKPeerPaymentBankAccountDetailCell_h
@import Foundation;

#include "UITableViewCell.h"

@class UIListContentConfiguration;

@interface PKPeerPaymentBankAccountDetailCell : UITableViewCell {
  /* instance variables */
  UIListContentConfiguration *_referenceConfiguration;
}

@property (nonatomic) BOOL shouldDrawSeperator;
@property (nonatomic) BOOL shouldDrawFullWidthSeperator;
@property (nonatomic) double minimumTextLabelWidth;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_layoutSubviewsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds isTemplateLayout:(BOOL)layout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorFrame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* PKPeerPaymentBankAccountDetailCell_h */
