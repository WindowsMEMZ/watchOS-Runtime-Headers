//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUTopLevelCollectionDelegate_Protocol_h
#define NMUTopLevelCollectionDelegate_Protocol_h
@import Foundation;

@protocol NMUTopLevelCollectionDelegate <NMUModelCollectionDelegate>
@optional
/* instance methods */
- (BOOL)topLevelCollectionViewControllerShouldShowMenu:(id)menu;
- (id)menuViewControllerInTopLevelCollectionViewController:(id)controller;
- (id)sectionedMenuItemsInTopLevelCollectionViewController:(id)controller;
- (void)topLevelCollectionViewController:(id)controller didLandOnItemAtIndexPath:(id)path;
@end

#endif /* NMUTopLevelCollectionDelegate_Protocol_h */
