//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLFieldOfIconsViewControllerDelegate_Protocol_h
#define CSLFieldOfIconsViewControllerDelegate_Protocol_h
@import Foundation;

@protocol CSLFieldOfIconsViewControllerDelegate <CSLHomeScreenEditingOptionsDelegate>
/* instance methods */
- (void)fieldOfIconsViewController:(id)controller tappedIconWithBundleIdentifier:(id)identifier;
- (void)fieldOfIconsViewController:(id)controller warpingToIconWithBundleIdentifier:(id)identifier;
- (void)fieldOfIconsViewController:(id)controller zoomingIconWithBundleIdentifier:(id)identifier withScrollEvent:(id)event;
- (void)fieldOfIconsViewControllerDismissToHome:(id)home;
@end

#endif /* CSLFieldOfIconsViewControllerDelegate_Protocol_h */
