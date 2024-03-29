//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef _NTKSingleCollectionTargetReader_h
#define _NTKSingleCollectionTargetReader_h
@import Foundation;

#include "NTKPhotosReader.h"
#include "NPTOCollectionTargetLibraryObserver-Protocol.h"
#include "NTKPhoto.h"
#include "PHPhotoLibraryChangeObserver-Protocol.h"

@class NPTOCollectionTargetLibrary, NSString, PHAssetCollection, PHFetchResult;

@interface _NTKSingleCollectionTargetReader : NTKPhotosReader<NPTOCollectionTargetLibraryObserver, PHPhotoLibraryChangeObserver> {
  /* instance variables */
  NPTOCollectionTargetLibrary *_collectionTargetLibrary;
  PHAssetCollection *_assetCollection;
  PHFetchResult *_assets;
  unsigned long long _keyAssetIndex;
  BOOL _isPhotoLibraryAvailable;
  NTKPhoto *_resourceDirectoryAsset;
}

@property (readonly, nonatomic) long long collectionTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithResourceDirectory:(id)directory collectionTarget:(long long)target assetCollection:(id)collection;
- (void)dealloc;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)index;
- (void)collectionTargetLibraryDidUpdate:(id)update;
- (void)photoLibraryDidChange:(id)change;
- (void)_queue_photoLibraryDidBecomeAvailable;
- (id)_queue_fetchOptions;
- (void)_queue_updateAssetsFrom:(id)from;
- (void)_queue_notifyDelegate;
- (unsigned long long)_queue_keyAssetIndex;
@end

#endif /* _NTKSingleCollectionTargetReader_h */
