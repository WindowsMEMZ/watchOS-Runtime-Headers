//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef _UIActivityGroupViewDelegateFlowLayout_Protocol_h
#define _UIActivityGroupViewDelegateFlowLayout_Protocol_h
@import Foundation;

@protocol _UIActivityGroupViewDelegateFlowLayout <UICollectionViewDelegate>
/* instance methods */
- (id)collectionView:(id)view layout:(id)layout moveItemAtIndexPath:(id)path toIndexPath:(id)path;
- (id)collectionView:(id)view layout:(id)layout needsContainerViewForDraggingItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout preferredSizeForItemAtIndexPath:(id)path;
@end

#endif /* _UIActivityGroupViewDelegateFlowLayout_Protocol_h */
