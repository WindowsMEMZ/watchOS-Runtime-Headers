//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPeerPayment3DValueViewController_h
#define NPKPeerPayment3DValueViewController_h
@import Foundation;

#include "UIViewController.h"
#include "NPKPeerPayment3DValueView.h"

@class NSDecimalNumber, NSString;

@interface NPKPeerPayment3DValueViewController : UIViewController

@property (readonly, nonatomic) NPKPeerPayment3DValueView *valueView;
@property (readonly, nonatomic) NSDecimalNumber *value;
@property (readonly, nonatomic) NSString *currency;

/* instance methods */
- (id)initWithValue:(id)value currency:(id)currency;
- (void)loadView;
@end

#endif /* NPKPeerPayment3DValueViewController_h */
