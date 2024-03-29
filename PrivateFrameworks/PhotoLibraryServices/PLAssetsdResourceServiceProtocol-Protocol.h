//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetsdResourceServiceProtocol_Protocol_h
#define PLAssetsdResourceServiceProtocol_Protocol_h
@import Foundation;

@protocol PLAssetsdResourceServiceProtocol <PLAssetsdResourceWriteOnlyServiceProtocol>
/* instance methods */
- (void)addAssetGroupWithName:(id)name reply:(id /* block */)reply;
- (void)addAssetWithURL:(id)url toAlbum:(id)album reply:(id /* block */)reply;
- (void)filePathForPersistentURL:(id)url withAdjustments:(BOOL)adjustments reply:(id /* block */)reply;
- (void)fileDescriptorForPersistentURL:(id)url withAdjustments:(BOOL)adjustments reply:(id /* block */)reply;
- (void)imageDataForAssetWithObjectURI:(id)uri formatID:(unsigned short)id allowPlaceholder:(BOOL)placeholder wantURLOnly:(BOOL)urlonly networkAccessAllowed:(BOOL)allowed trackCPLDownload:(BOOL)cpldownload reply:(id /* block */)reply;
- (void)getSandboxExtensionsForAssetWithUUID:(id)uuid reply:(id /* block */)reply;
- (void)getSandboxExtensionForFileSystemBookmark:(id)bookmark reply:(id /* block */)reply;
- (void)asynchronousAdjustmentDataForAsset:(id)asset networkAccessAllowed:(BOOL)allowed reply:(id /* block */)reply;
- (void)estimatedFileLengthOfVideo:(id)video fallbackFilePath:(id)path exportPreset:(id)preset exportProperties:(id)properties reply:(id /* block */)reply;
- (void)downloadCloudSharedAsset:(id)asset wantedPlaceholderkind:(short)placeholderkind shouldPrioritize:(BOOL)prioritize shouldExtendTimer:(BOOL)timer reply:(id /* block */)reply;
- (id)consolidateAssets:(id)assets reply:(id /* block */)reply;
- (void)updateInternalResourcePath:(id)path objectURI:(id)uri sandboxExtension:(id)extension reply:(id /* block */)reply;
- (void)projectExtensionDataForProjectUuid:(id)uuid reply:(id /* block */)reply;
@end

#endif /* PLAssetsdResourceServiceProtocol_Protocol_h */
