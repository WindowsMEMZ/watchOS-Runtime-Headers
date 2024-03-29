//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKBasicLoginContentViewControllerContainerView_h
#define AKBasicLoginContentViewControllerContainerView_h
@import Foundation;

#include "UIView.h"

@class NSArray, NSString, UIImage, UIImageView, UILabel;

@interface AKBasicLoginContentViewControllerContainerView : UIView

@property (retain, nonatomic) UIImageView *bannerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (retain, nonatomic) UIImage *bannerImage;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *messageText;
@property (retain, nonatomic) UILabel *messageLabel;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)updateConstraints;
- (void)_configureBannerImage;
- (void)_configureMessageLabel;
@end

#endif /* AKBasicLoginContentViewControllerContainerView_h */
