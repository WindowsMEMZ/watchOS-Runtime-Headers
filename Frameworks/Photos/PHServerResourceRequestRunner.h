//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHServerResourceRequestRunner_h
#define PHServerResourceRequestRunner_h
@import Foundation;

@class BOOL *, NSProgress, NSString, PLProgressFollower;
@protocol PLResourceDataStore;

@interface PHServerResourceRequestRunner : NSObject {
  /* instance variables */
  NSProgress *_progress;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  PLProgressFollower *_dataStoreFollower;
  NSObject<PLResourceDataStore> *_dataStore;
  long long _state;
}

@property (readonly, nonatomic) NSString *taskIdentifier;

/* instance methods */
- (id)initWithTaskIdentifier:(id)identifier;
- (void)dealloc;
- (long long)state;
- (void)setState:(long long)state;
- (id)_assetAndRelatedObjectsFromAssetObjectIDURL:(id)idurl inManagedObjectContext:(id)context error:(id *)error;
- (void)_safeReply:(id /* block */)reply;
- (void)_cancelWithReply:(id /* block */)reply;
- (void)_handleProgress:(id)progress;
- (id)makeResourceAvailableWithRequest:(id)request library:(id)library clientBundleID:(id)id reply:(id /* block */)reply;
- (void)makeResourceUnavailableWithRequest:(id)request library:(id)library;
- (id)_applyCorrectionsToAssetObjectIDURL:(id)idurl resourceIdentity:(id)identity errorCodes:(id)codes clientBundleID:(id)id library:(id)library reply:(id /* block */)reply;
- (id)applyResourceScopeCorrectionsWithRequest:(id)request errorCodes:(id)codes clientBundleID:(id)id library:(id)library reply:(id /* block */)reply;
- (id)applyAssetScopeCorrectionsWithRequest:(id)request errorCodes:(id)codes clientBundleID:(id)id library:(id)library reply:(id /* block */)reply;
- (BOOL)_resourceQualifiesForCacheMetricsCollection:(id)collection isLivePhoto:(BOOL)photo;
- (void)_replyToVideoRequestWithURL:(id)url mediaItemMakerData:(id)data mutableInfo:(id)info internalInfo:(id)info error:(id)error pathForAdjustmentFileIfNeeded:(id)needed reply:(id /* block */)reply;
- (id)videoResourceChoiceForAsset:(id)asset context:(id)context loadingMode:(long long *)mode request:(id)request shouldReturnAdjustmentInfo:(BOOL *)info error:(id *)error;
- (id)chooseVideoWithRequest:(id)request library:(id)library clientBundleID:(id)id reply:(id /* block */)reply;
- (id)mutableStreamingHintsForAVAssetProxy:(id)proxy;
- (id)_avAssetProxyForOutOfBandHintsAboutAssetForResource:(id)resource;
- (id)_urlByAttachingOutOfBandHintsToVideoURL:(id)url assetProxy:(id)proxy signpostId:(unsigned long long)id hintsBase64String:(id *)string;
@end

#endif /* PHServerResourceRequestRunner_h */
