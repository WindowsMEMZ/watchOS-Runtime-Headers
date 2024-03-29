//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICalendarViewDecorationItem_h
#define _UICalendarViewDecorationItem_h
@import Foundation;

#include "UIView.h"
#include "_UICalendarViewDecorationProviding-Protocol.h"

@interface _UICalendarViewDecorationItem : NSObject<_UICalendarViewDecorationProviding> {
  /* instance variables */
  UIView *_decorationView;
}

@property (retain, nonatomic) UIView *_decorationView;

/* instance methods */
- (id)_decorationViewForReuseView:(id)view;
- (id)_decorationViewReusableKey;
- (void)_setDecorationView:(id)view;
@end

#endif /* _UICalendarViewDecorationItem_h */
