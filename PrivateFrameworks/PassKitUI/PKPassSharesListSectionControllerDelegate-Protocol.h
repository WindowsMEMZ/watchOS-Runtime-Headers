//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassSharesListSectionControllerDelegate_Protocol_h
#define PKPassSharesListSectionControllerDelegate_Protocol_h
@import Foundation;

@protocol PKPassSharesListSectionControllerDelegate <NSObject>
/* instance methods */
- (void)passSharesListSectionController:(id)controller didSelectShare:(id)share;
- (void)passSharesListSectionControllerDidSelectAddShare:(id)share;
- (void)passSharesListSectionController:(id)controller setIsLoading:(BOOL)loading;
- (void)passSharesListSectionControllerDidFinishRevokingShares:(id)shares;
- (void)passSharesListSectionController:(id)controller presentAlert:(id)alert;
- (void)reloadDataAnimated:(BOOL)animated;
- (void)reloadItem:(id)item animated:(BOOL)animated;
- (void)deselectCells;
@end

#endif /* PKPassSharesListSectionControllerDelegate_Protocol_h */
