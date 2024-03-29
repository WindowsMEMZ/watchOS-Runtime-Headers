//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RUIChoiceView_h
#define RUIChoiceView_h
@import Foundation;

#include "UIView.h"
#include "RUIChoiceViewElement.h"
#include "RUIElement.h"
#include "RUIHeaderView.h"
#include "RUISubHeaderElement.h"

@class PUICButton, UIButton, UIScrollView, UIView;
@protocol UIView<RUIHeader;

@interface RUIChoiceView : UIView

@property (readonly, nonatomic) UIButton *bigChoice;
@property (readonly, nonatomic) UIButton *smallChoice;
@property (readonly, nonatomic) UIView *buttonTray;
@property (weak, nonatomic) RUIChoiceViewElement *target;
@property (retain, nonatomic) RUIElement *header;
@property (retain, nonatomic) RUISubHeaderElement *subHeader;
@property (retain, nonatomic) RUIElement *helpLinkElement;
@property (readonly, nonatomic) UIView<RUIHeader> *headerView;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (nonatomic) BOOL usesTwoButtonLayout;

/* instance methods */
- (id)init;
- (void)contentSizeCategoryDidChangeNotification:(id)notification;
- (void)dealloc;
- (void)setFirstChoiceTitle:(id)title withColor:(id)color;
- (void)setSecondChoiceTitle:(id)title withColor:(id)color;
- (void)setImage:(id)image;
- (id)viewForElementIdentifier:(id)identifier;
- (void)setHelpLinkTitle:(id)title;
- (void)choiceTapped:(id)tapped;
- (void)layoutSubviews;
- (void)setHeaderTitle:(id)title;
@end

#endif /* RUIChoiceView_h */
