//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLAppSwitcherViewControllerDelegate_Protocol_h
#define CSLAppSwitcherViewControllerDelegate_Protocol_h
@import Foundation;

@protocol CSLAppSwitcherViewControllerDelegate <NSObject>
/* instance methods */
- (void)appSwitcherViewController:(id)controller didTapPlatterWithBundleIdentifier:(id)identifier;
- (void)appSwitcherViewController:(id)controller didRemoveItemWithBundleIdentifier:(id)identifier;
- (void)appSwitcherViewControllerDidSwipePastThreshold:(id)threshold;
@end

#endif /* CSLAppSwitcherViewControllerDelegate_Protocol_h */
