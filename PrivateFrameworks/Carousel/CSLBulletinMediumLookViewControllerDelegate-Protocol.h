//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBulletinMediumLookViewControllerDelegate_Protocol_h
#define CSLBulletinMediumLookViewControllerDelegate_Protocol_h
@import Foundation;

@protocol CSLBulletinMediumLookViewControllerDelegate <NSObject>
/* instance methods */
- (void)mediumLook:(id)look requestDisplayItem:(id)item completion:(id /* block */)completion;
- (void)mediumLookRequestDismiss:(id)dismiss;
- (void)mediumLookRequestDismissAndRemoveItems:(id)items;
- (void)mediumLookCrossAppChanged:(id)changed;
@end

#endif /* CSLBulletinMediumLookViewControllerDelegate_Protocol_h */
