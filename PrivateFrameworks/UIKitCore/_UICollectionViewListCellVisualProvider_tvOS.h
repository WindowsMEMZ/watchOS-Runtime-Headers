//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionViewListCellVisualProvider_tvOS_h
#define _UICollectionViewListCellVisualProvider_tvOS_h
@import Foundation;

#include "_UICollectionViewListCellVisualProvider.h"

@interface _UICollectionViewListCellVisualProvider_tvOS : _UICollectionViewListCellVisualProvider
/* instance methods */
- (long long)defaultFocusStyle;
- (BOOL)canFocusProgrammatically;
- (id)accessoryManagerContainerView;
- (void)configureFocusedFloatingContentView:(id)view;
- (void)configureFocusedFloatingContentView:(id)view useSidebarListStyle:(BOOL)style;
@end

#endif /* _UICollectionViewListCellVisualProvider_tvOS_h */
