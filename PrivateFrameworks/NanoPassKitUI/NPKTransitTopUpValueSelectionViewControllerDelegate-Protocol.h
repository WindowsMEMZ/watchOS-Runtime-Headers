//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKTransitTopUpValueSelectionViewControllerDelegate_Protocol_h
#define NPKTransitTopUpValueSelectionViewControllerDelegate_Protocol_h
@import Foundation;

@protocol NPKTransitTopUpValueSelectionViewControllerDelegate <NSObject>
/* instance methods */
- (void)topUpValueSelectionViewController:(id)controller didEnterAmount:(id)amount;
@optional
/* instance methods */
- (void)topUpValueSelectionViewController:(id)controller viewWillDisappear:(BOOL)disappear;
- (void)topUpValueSelectionViewController:(id)controller viewDidDisappear:(BOOL)disappear;
@end

#endif /* NPKTransitTopUpValueSelectionViewControllerDelegate_Protocol_h */
