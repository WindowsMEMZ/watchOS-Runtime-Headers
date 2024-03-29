//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKTimeScopeControl_h
#define HKTimeScopeControl_h
@import Foundation;

#include "UIControl.h"

@class NSArray;

@interface HKTimeScopeControl : UIControl {
  /* instance variables */
  NSArray *_timeScopes;
  BOOL _shortTextStyle;
}

@property (nonatomic) long long selectedTimeScope;

/* class methods */
+ (id)controlWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame timeScopes:(id)scopes;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame timeScopes:(id)scopes;
- (long long)_timeScopeForIndex:(long long)index;
- (long long)_indexForTimeScope:(long long)scope;
- (double)minimumWidth;
@end

#endif /* HKTimeScopeControl_h */
