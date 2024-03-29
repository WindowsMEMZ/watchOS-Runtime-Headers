//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFBrowserContentViewControllerDelegate_Protocol_h
#define _SFBrowserContentViewControllerDelegate_Protocol_h
@import Foundation;

@protocol _SFBrowserContentViewControllerDelegate <NSObject>
@optional
/* instance methods */
- (void)browserController:(id)controller didUpdateNavigationBarItem:(id)item;
- (void)browserController:(id)controller updateTopBarHeight:(double)height;
- (void)browserControllerDidCommitNavigation:(id)navigation;
@end

#endif /* _SFBrowserContentViewControllerDelegate_Protocol_h */
