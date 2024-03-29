//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIFBTrialManagedAssetChanges_h
#define TRIFBTrialManagedAssetChanges_h
@import Foundation;

@interface TRIFBTrialManagedAssetChanges : NSObject {
  /* instance variables */
  unsigned char _changeTypePath;
  unsigned int _replacementPath;
  unsigned char _changeTypeFileType;
  unsigned char _replacementFileType;
  unsigned char _changeTypeAssetId;
  unsigned int _replacementAssetId;
  unsigned char _replacementCloudKitMetadataType;
  unsigned char _changeTypeCloudKitMetadata;
  unsigned int _replacementCloudKitMetadata;
  unsigned char _changeTypeIsOnDemand;
  BOOL _replacementIsOnDemand;
  unsigned char _changeTypeDownloadSize;
  unsigned long long _replacementDownloadSize;
  unsigned char _changeTypeAssetName;
  unsigned int _replacementAssetName;
  unsigned char _changeTypeHasOnDemandFlag;
  BOOL _replacementHasOnDemandFlag;
}

/* instance methods */
- (void)replacePath:(id)path;
- (void)omitPath;
- (void)preservePath;
- (void)replaceFileType:(unsigned char)type;
- (void)omitFileType;
- (void)preserveFileType;
- (void)replaceAssetId:(id)id;
- (void)preserveAssetId;
- (void)replaceCloudKitMetadataWithTreatment:(id)treatment;
- (void)replaceCloudKitMetadataWithAsset:(id)asset;
- (void)preserveCloudKitMetadata;
- (void)replaceIsOnDemand:(BOOL)demand;
- (void)omitIsOnDemand;
- (void)preserveIsOnDemand;
- (void)replaceDownloadSize:(unsigned long long)size;
- (void)omitDownloadSize;
- (void)preserveDownloadSize;
- (void)replaceAssetName:(id)name;
- (void)omitAssetName;
- (void)preserveAssetName;
- (void)replaceHasOnDemandFlag:(BOOL)flag;
- (void)omitHasOnDemandFlag;
- (void)preserveHasOnDemandFlag;
@end

#endif /* TRIFBTrialManagedAssetChanges_h */
