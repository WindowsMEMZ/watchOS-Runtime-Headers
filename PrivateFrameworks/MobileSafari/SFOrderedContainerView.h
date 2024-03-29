//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFOrderedContainerView_h
#define SFOrderedContainerView_h
@import Foundation;

#include "UIView.h"

@protocol SFOrderedContainerViewDelegate;

@interface SFOrderedContainerView : UIView {
  /* instance variables */
  BOOL _settingOrderedSubviews;
}

@property (weak, nonatomic) NSObject<SFOrderedContainerViewDelegate> *delegate;

/* instance methods */
- (void)willMoveToWindow:(id)window;
- (void)_sf_setOrderedSubviews:(id *)subviews count:(unsigned long long)count;
- (void)updateOrderedSubviews:(id *)subviews count:(unsigned long long)count;
- (void)didAddSubview:(id)subview;
@end

#endif /* SFOrderedContainerView_h */
