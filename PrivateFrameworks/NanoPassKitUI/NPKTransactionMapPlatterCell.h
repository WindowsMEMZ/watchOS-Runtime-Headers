//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKTransactionMapPlatterCell_h
#define NPKTransactionMapPlatterCell_h
@import Foundation;

#include "PUICListPlatterCell.h"

@class PKMerchant, PKPaymentTransaction, PKTransactionMapView;

@interface NPKTransactionMapPlatterCell : PUICListPlatterCell

@property (retain, nonatomic) PKTransactionMapView *mapView;
@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) PKMerchant *merchant;

/* class methods */
+ (double)mapHeight;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* NPKTransactionMapPlatterCell_h */
