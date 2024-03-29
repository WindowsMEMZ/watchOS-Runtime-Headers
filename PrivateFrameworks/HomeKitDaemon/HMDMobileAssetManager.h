//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMobileAssetManager_h
#define HMDMobileAssetManager_h
@import Foundation;

#include "HMDMobileAssetManagerDelegate-Protocol.h"

@class NSBackgroundActivityScheduler;
@protocol OS_dispatch_queue;

@interface HMDMobileAssetManager : NSObject

@property BOOL indexDownloaded;
@property (readonly, nonatomic) NSBackgroundActivityScheduler *scheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) NSObject<HMDMobileAssetManagerDelegate> *delegate;

/* instance methods */
- (id)init;
- (void)purgeAllInstalledAssets;
- (void)handleMetadataAssetUpdated;
- (void)_downloadNewAsset:(id)asset availableVersion:(unsigned long long)version newVersion:(unsigned long long)version;
- (void)_installAvailableAsset:(id)asset version:(unsigned long long)version;
- (void)_updateMetadata;
- (void)_downloadCatalogAndUpdateMetadataIfAble;
- (void)_handleMetadataAssetUpdated;
@end

#endif /* HMDMobileAssetManager_h */
