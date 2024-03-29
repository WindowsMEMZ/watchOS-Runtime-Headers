//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKEditItemViewControllerProtocol_Protocol_h
#define EKEditItemViewControllerProtocol_Protocol_h
@import Foundation;

@protocol EKEditItemViewControllerProtocol 

@property (weak, nonatomic) NSObject<EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL useCustomBackButton;

@optional
/* instance methods */
- (void)saveAndDismissWithExtremePrejudice;
@end

#endif /* EKEditItemViewControllerProtocol_Protocol_h */
