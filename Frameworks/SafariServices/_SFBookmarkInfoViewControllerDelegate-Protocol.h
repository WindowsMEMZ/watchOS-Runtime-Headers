//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFBookmarkInfoViewControllerDelegate_Protocol_h
#define _SFBookmarkInfoViewControllerDelegate_Protocol_h
@import Foundation;

@protocol _SFBookmarkInfoViewControllerDelegate <NSObject>
@optional
/* instance methods */
- (void)bookmarkInfoViewController:(id)controller didFinishWithResult:(BOOL)result;
- (BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)appearance;
- (BOOL)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)changes;
@end

#endif /* _SFBookmarkInfoViewControllerDelegate_Protocol_h */
