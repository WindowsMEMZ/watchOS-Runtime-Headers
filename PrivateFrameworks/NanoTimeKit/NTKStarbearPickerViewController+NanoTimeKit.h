//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKStarbearPickerViewController_NanoTimeKit_h
#define NTKStarbearPickerViewController_NanoTimeKit_h
@import Foundation;

@interface NTKStarbearPickerViewController (NanoTimeKit) <CSLPIButtonHandlerProtocol, PUICListCollectionViewDelegate>
/* instance methods */
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view willDisplaySupplementaryView:(id)view forElementKind:(id)kind atIndexPath:(id)path;
- (void)collectionView:(id)view didEndDisplayingSupplementaryView:(id)view forElementOfKind:(id)kind atIndexPath:(id)path;
- (BOOL)handleButton:(unsigned long long)button eventType:(unsigned long long)type;
@end

#endif /* NTKStarbearPickerViewController_NanoTimeKit_h */
