//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICalloutBarVisualStyle_h
#define _UICalloutBarVisualStyle_h
@import Foundation;

#include "UICalloutBar.h"
#include "_UICalloutBarButtonMetrics.h"
#include "_UICalloutBarMetrics.h"

@interface _UICalloutBarVisualStyle : NSObject

@property (readonly, weak, nonatomic) UICalloutBar *calloutBar;
@property (readonly, nonatomic) _UICalloutBarMetrics *barMetrics;
@property (readonly, nonatomic) _UICalloutBarButtonMetrics *buttonMetrics;

/* instance methods */
- (id)initWithCalloutBar:(id)bar;
- (void)calloutBarWillAppear:(id)appear;
- (void)updateCalloutBar:(id)bar withContentButtons:(id)buttons;
- (void)calloutBarDidDisappear:(id)disappear;
@end

#endif /* _UICalloutBarVisualStyle_h */
