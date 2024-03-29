//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef _TtCC7SwiftUI24NavigationPivotAnimation22NavigationBarAnimation_h
#define _TtCC7SwiftUI24NavigationPivotAnimation22NavigationBarAnimation_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "PUICNavigationBarAnimationProvider-Protocol.h"

@interface SwiftUI.NavigationPivotAnimation.NavigationBarAnimation : Swift._SwiftObject<PUICNavigationBarAnimationProvider> { // (Swift)
  /* instance variables */
   fromView;
   toView;
}

/* instance methods */
- (void)beginNavigationAnimationForOperation:(long long)operation coordinator:(id)coordinator fromContentView:(id)view toContentView:(id)view navigationController:(id)controller;
- (void)completeNavigationAnimationForOperation:(long long)operation coordinator:(id)coordinator fromContentView:(id)view toContentView:(id)view navigationController:(id)controller;
@end

#endif /* _TtCC7SwiftUI24NavigationPivotAnimation22NavigationBarAnimation_h */
