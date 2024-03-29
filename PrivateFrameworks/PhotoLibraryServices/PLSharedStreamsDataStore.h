//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLSharedStreamsDataStore_h
#define PLSharedStreamsDataStore_h
@import Foundation;

#include "PLResourceDataStore.h"
#include "PLResourceDataStore-Protocol.h"

@class NSString, PLPhotoLibraryPathManager;

@interface PLSharedStreamsDataStore : PLResourceDataStore<PLResourceDataStore>

@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (unsigned int)_masterThumbRecipeID;
+ (unsigned short)storeClassID;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)preview;
+ (id)supportedRecipes;

/* instance methods */
- (short)_cloudSharedAssetPlaceholderKindFromSharedStreamsResourceType:(unsigned int)type;
- (void)_prepareForDownloadNotification:(id)notification atFileURL:(id)url completion:(id /* block */)completion;
- (id)_utiStringForAsset:(id)asset type:(unsigned int)type;
- (BOOL)_isDerivativeForSharedStreamsType:(unsigned int)type;
- (id)_sharedStreamsExternalResourceForAsset:(id)asset album:(id)album type:(unsigned int)type;
- (short)_localAvailabilityForAsset:(id)asset album:(id)album type:(unsigned int)type;
- (short)_remoteAvailabilityForType:(unsigned int)type;
- (unsigned int)_mainResourceTypeForAsset:(id)asset;
- (id)name;
- (id)descriptionForSubtype:(long long)subtype;
- (id)keyFromKeyStruct:(const void *)struct;
- (id)resourceDataForKey:(id)key assetID:(id)id;
- (id)resourceURLForKey:(id)key assetID:(id)id;
- (id)expectedFileURLForResource:(id)resource asset:(id)asset;
- (id)virtualResourcesForAsset:(id)asset;
- (id)updateDerivativeResourcesForAsset:(id)asset forLifecycleEvent:(unsigned int)event;
- (BOOL)canStoreExternalResource:(id)resource;
- (BOOL)storeExternalResource:(id)resource forAsset:(id)asset options:(id)options error:(id *)error resultingResource:(id *)resource;
- (id)requestLocalAvailabilityChange:(short)change forResource:(id)resource options:(id)options completion:(id /* block */)completion;
- (BOOL)dataStoreSubtypeIsDownloadable:(long long)downloadable;
- (BOOL)videoResource:(id)resource matchesOrExceedsQualityLevel:(unsigned int)level;
- (BOOL)canStreamResource:(id)resource;
- (void)requestStreamingURLForResource:(id)resource asset:(id)asset intent:(unsigned long long)intent timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range streamingHints:(id)hints inContext:(id)context clientBundleID:(id)id completion:(id /* block */)completion;
- (id)requiredExternalResourcesForMigratingOrImportingAsset:(id)asset;
@end

#endif /* PLSharedStreamsDataStore_h */
