//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLCloudPhotoLibraryHelper_h
#define PLCloudPhotoLibraryHelper_h
@import Foundation;

@interface PLCloudPhotoLibraryHelper : NSObject
/* class methods */
+ (void)enableCPL:(id /* block */)cpl;
+ (void)disableCPL:(id /* block */)cpl;
+ (BOOL)shouldSendOptimizeFeedbackOnce;
+ (void)setShouldSendOptimizeFeedbackOnce:(BOOL)once;
+ (BOOL)shouldRepushVideoAssetsMetadataOnce;
+ (void)setShouldRepushVideoAssetsMetadataOnce:(BOOL)once;
+ (BOOL)shouldRepushMasterWithMissingMediaMetadataOnce;
+ (void)setShouldRepushMasterWithMissingMediaMetadataOnce:(BOOL)once;
+ (BOOL)shouldMarkPurgeableResourcesOnce;
+ (void)setShouldMarkPurgeableResourcesOnce:(BOOL)once;
+ (BOOL)shouldClearPurgeableResourcesOnce;
+ (void)setShouldClearPurgeableResourcesOnce:(BOOL)once;
+ (BOOL)shouldHandleOptimizeModeChange;
+ (void)setShouldHandleOptimizeModeChange:(BOOL)change;
+ (BOOL)shouldRepushAssetsWithImportedByBundleIdentifier;
+ (void)setShouldRepushAssetsWithImportedByBundleIdentifier:(BOOL)identifier;
+ (void)_donateTipsAppEnablementSignal;
@end

#endif /* PLCloudPhotoLibraryHelper_h */
