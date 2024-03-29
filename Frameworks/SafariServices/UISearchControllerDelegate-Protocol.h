//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef UISearchControllerDelegate_Protocol_h
#define UISearchControllerDelegate_Protocol_h
@import Foundation;

@protocol UISearchControllerDelegate <NSObject>
@optional
/* instance methods */
- (void)willPresentSearchController:(id)controller;
- (void)didPresentSearchController:(id)controller;
- (void)willDismissSearchController:(id)controller;
- (void)didDismissSearchController:(id)controller;
- (void)presentSearchController:(id)controller;
- (void)searchController:(id)controller willChangeToSearchBarPlacement:(long long)placement;
- (void)searchController:(id)controller didChangeFromSearchBarPlacement:(long long)placement;
@end

#endif /* UISearchControllerDelegate_Protocol_h */
