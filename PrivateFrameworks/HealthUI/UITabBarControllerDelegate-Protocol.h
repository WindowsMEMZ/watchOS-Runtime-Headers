//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef UITabBarControllerDelegate_Protocol_h
#define UITabBarControllerDelegate_Protocol_h
@import Foundation;

@protocol UITabBarControllerDelegate <NSObject>
@optional
/* instance methods */
- (BOOL)tabBarController:(id)controller shouldSelectViewController:(id)controller;
- (void)tabBarController:(id)controller didSelectViewController:(id)controller;
- (void)tabBarController:(id)controller willBeginCustomizingViewControllers:(id)controllers;
- (void)tabBarController:(id)controller willEndCustomizingViewControllers:(id)controllers changed:(BOOL)changed;
- (void)tabBarController:(id)controller didEndCustomizingViewControllers:(id)controllers changed:(BOOL)changed;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)orientations;
- (long long)tabBarControllerPreferredInterfaceOrientationForPresentation:(id)presentation;
- (id)tabBarController:(id)controller interactionControllerForAnimationController:(id)controller;
- (id)tabBarController:(id)controller animationControllerForTransitionFromViewController:(id)controller toViewController:(id)controller;
@end

#endif /* UITabBarControllerDelegate_Protocol_h */
