//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIButtonBarTargetAction_h
#define _UIButtonBarTargetAction_h
@import Foundation;

#include "UIBarButtonItem.h"

@interface _UIButtonBarTargetAction : NSObject

@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (copy, nonatomic) id /* block */ actionFilter;
@property (readonly, nonatomic) SEL proxyAction;

/* instance methods */
- (id)init;
- (id)initWithBarButtonItem:(id)item;
- (void)_invoke:(id)_invoke forEvent:(id)event;
@end

#endif /* _UIButtonBarTargetAction_h */
