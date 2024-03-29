//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef PHAsset_MediaAnalysis_h
#define PHAsset_MediaAnalysis_h
@import Foundation;

@interface PHAsset (MediaAnalysis)
/* class methods */
+ (BOOL)vcp_usePHFace;
+ (BOOL)vcp_usePHFaceExpression;
+ (id)vcp_fetchAssetsMatchingFingerprint:(id)fingerprint forPhotoLibrary:(id)library;
+ (BOOL)enableStickerScore;
+ (double)vcp_ocrGatingThreshold;
+ (id)vcp_fetchOptionsForLibrary:(id)library forTaskID:(unsigned long long)id;

/* instance methods */
- (unsigned long long)vcp_flagsForPHFace:(id)phface withFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })vcp_faceRectFrom:(id)from;
- (int)vcp_queryPHFaces:(unsigned long long *)phfaces results:(id *)results;
- (id)vcp_PHFaces:(id)phfaces;
- (BOOL)vcp_quickFaceClassificationDone;
- (BOOL)vcp_needsFaceProcessing;
- (id)vcp_fingerprint:(id)vcp_fingerprint;
- (id)vcp_animatedStickerScore;
- (BOOL)vcp_needsVisualSearchProcessing;
- (BOOL)vcp_needsStickerGatingProcessing;
- (BOOL)vcp_needsPECProcessing;
- (BOOL)vcp_needsOCRProcessing;
- (BOOL)vcp_isDownloadGated;
- (id)vcp_passedOCRGating;
- (unsigned long long)vcp_ocrMajorDimensionForResource:(id)resource;
- (BOOL)vcp_needSceneProcessing;
- (id)vcp_confidenceForSceneIdentifier:(unsigned int)identifier;
- (unsigned long long)vcp_abnormalImageDimensionForSceneNet;
- (BOOL)vcp_isVideoSlowmo;
- (BOOL)vcp_isVideoTimelapse;
- (BOOL)vcp_isShortMovie;
- (BOOL)vcp_isMontageWithTaskID:(unsigned long long)id;
- (BOOL)vcp_isPano;
- (BOOL)vcp_isLivePhoto;
- (BOOL)vcp_isSdofPhoto;
- (id)vcp_typeDescription;
- (struct CGSize { double x0; double x1; })vcp_originalSize;
- (id)vcp_modificationDate;
- (BOOL)vcp_eligibleForVideoDownload:(id)download;
- (BOOL)vcp_hasAdjustments:(id)adjustments;
- (unsigned long long)vcp_targetMajorDimensionForImageWithWidth:(unsigned long long)width height:(unsigned long long)height andMinPreferredMinorDimension:(unsigned long long)dimension;
- (unsigned long long)vcp_majorDimensionForResource:(id)resource withTargetResolution:(unsigned long long)resolution;
- (BOOL)vcp_needsFullAnalysisProcessing;
- (BOOL)vcp_needsProcessingForTask:(unsigned long long)task;
@end

#endif /* PHAsset_MediaAnalysis_h */
