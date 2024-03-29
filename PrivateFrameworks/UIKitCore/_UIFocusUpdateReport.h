//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFocusUpdateReport_h
#define _UIFocusUpdateReport_h
@import Foundation;

#include "UIFocusSystem.h"
#include "UIFocusUpdateContext.h"

@interface _UIFocusUpdateReport : NSObject

@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem;
@property (retain, nonatomic) UIFocusUpdateContext *context;
@property (readonly, nonatomic) BOOL shouldLog;

/* instance methods */
- (id)init;
- (id)initWithFocusSystem:(id)system;
@end

#endif /* _UIFocusUpdateReport_h */
