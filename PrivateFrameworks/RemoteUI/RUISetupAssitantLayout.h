//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RUISetupAssitantLayout_h
#define RUISetupAssitantLayout_h
@import Foundation;

@interface RUISetupAssitantLayout : NSObject
/* class methods */
+ (struct CGSize { double x0; double x1; })_preferredContentSizeInBuddy;

/* instance methods */
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })directionalLayoutMarginsForViewController:(id)controller;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_insetsForViewController:(id)controller;
- (BOOL)_isViewControllerInFormSheet:(id)sheet;
- (BOOL)_isViewControllerInBuddyiPad:(id)pad;
- (struct CGSize { double x0; double x1; })preferredContentSizeForViewController:(id)controller;
@end

#endif /* RUISetupAssitantLayout_h */
