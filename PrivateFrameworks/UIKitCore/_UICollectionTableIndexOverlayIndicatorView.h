//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionTableIndexOverlayIndicatorView_h
#define _UICollectionTableIndexOverlayIndicatorView_h
@import Foundation;

#include "UIView.h"
#include "UILabel.h"
#include "UITapGestureRecognizer.h"
#include "_UICollectionTableIndexOverlayHost-Protocol.h"

@class NSString;

@interface _UICollectionTableIndexOverlayIndicatorView : UIView {
  /* instance variables */
  UILabel *_label;
  UITapGestureRecognizer *_tapGestureRecognizer;
  NSObject<_UICollectionTableIndexOverlayHost> *_host;
}

@property (copy, nonatomic) NSString *currentText;

/* instance methods */
- (id)initWithHost:(id)host;
- (void)_tapGestureChanged:(id)changed;
- (void)_willChangeToIdiom:(long long)idiom onScreen:(id)screen;
- (void)layoutSubviews;
@end

#endif /* _UICollectionTableIndexOverlayIndicatorView_h */
