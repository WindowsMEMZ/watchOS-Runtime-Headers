//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKShareDetailViewControllerDelegate_Protocol_h
#define NPKShareDetailViewControllerDelegate_Protocol_h
@import Foundation;

@protocol NPKShareDetailViewControllerDelegate <NPKListViewControllerDelegate>
/* instance methods */
- (void)shareDetailViewController:(id)controller didSelectShare:(id)share senderShare:(id)share;
- (void)shareDetailViewController:(id)controller didSelectEntitlementSummaryForShare:(id)share;
- (void)shareDetailViewController:(id)controller didSelectActivationOption:(id)option forShare:(id)share;
- (void)shareDetailViewControllerDidSelectCreateShare:(id)share;
- (void)shareDetailViewController:(id)controller didSelectRevokeForShare:(id)share;
- (void)didSelectRevokeAllSharesForShareDetailViewController:(id)controller;
@end

#endif /* NPKShareDetailViewControllerDelegate_Protocol_h */
