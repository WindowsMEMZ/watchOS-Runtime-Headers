//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCModelGenericAVItem_h
#define MPCModelGenericAVItem_h
@import Foundation;

#include "MPAVItem.h"
#include "AVAssetResourceLoaderDelegate-Protocol.h"
#include "AVPlayerItemMetadataOutputPushDelegate-Protocol.h"
#include "ICContentKeySessionDelegateProtocol-Protocol.h"
#include "ICEnvironmentMonitorObserver-Protocol.h"
#include "MPCAudioAssetTypeSelection.h"
#include "MPCAudioAssetTypeSelector.h"
#include "MPCDeferrableTask.h"
#include "MPCModelGenericAVItemTimedMetadataRequest.h"
#include "MPCModelGenericAVItemTimedMetadataResponse.h"
#include "MPCModelGenericAVItemUserIdentityPropertySet.h"
#include "MPCModelPlaybackAssetCacheProviding-Protocol.h"
#include "MPCPlaybackEngineEventStream.h"
#include "MPCPlaybackRequestEnvironment.h"
#include "MPCPlayerAudioFormat.h"
#include "MPCPlayerAudioRoute.h"
#include "MPCReportingIdentityPropertiesLoading-Protocol.h"
#include "MPCSuzeLeaseSession.h"

@class ICAVAssetDownloadURLSession, ICContentKeySession, ICMusicSubscriptionLeaseSession, ICMusicSubscriptionLeaseStatus, ICStoreRequestContext, ICURLRequest, MPGaplessInfo, MPMediaLibrary, MPModelGenericObject, MPPropertySet, MPSubscriptionStatusPlaybackInformation, NSArray, NSData, NSDictionary, NSNumber, NSOperationQueue, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface MPCModelGenericAVItem : MPAVItem<AVAssetResourceLoaderDelegate, AVPlayerItemMetadataOutputPushDelegate, ICEnvironmentMonitorObserver, ICContentKeySessionDelegateProtocol> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_accessQueue;
  BOOL _allowsAirPlayFromCloud;
  BOOL _hasLoadedSubscriptionLeaseSession;
  NSObject<OS_dispatch_queue> *_subscriptionLeaseSessionLoadQueue;
  ICMusicSubscriptionLeaseSession *_subscriptionLeaseSession;
  BOOL _hasLoadedSubscriptionPlaybackInformation;
  MPSubscriptionStatusPlaybackInformation *_subscriptionPlaybackInformation;
  NSObject<OS_dispatch_queue> *_subscriptionPlaybackInformationLoadQueue;
  BOOL _shouldAutomaticallyRefreshSubscriptionLease;
  BOOL _isSubscriptionPolicyContent;
  BOOL _lastPreparedForNonZeroRate;
  long long _subscriptionLeaseRequestCount;
  BOOL _didDeferPreventionStatusUpdate;
  MPCSuzeLeaseSession *_suzeLeaseSession;
  BOOL _isAutomaticallyRefreshingSuzeLeaseSession;
  id /* block */ _firstBecomeActivePlayerItemBlock;
  NSArray *_currentGlobalTimedMetadataGroups;
  MPModelGenericObject *_flattenedGenericObject;
  MPModelGenericObject *_flattenedMetadataGenericObject;
  MPModelGenericObject *_metadataGenericObject;
  MPPropertySet *_itemProperties;
  NSObject<MPCReportingIdentityPropertiesLoading> *_identityPropertiesLoader;
  MPCModelGenericAVItemTimedMetadataRequest *_timedMetadataRequest;
  MPCModelGenericAVItemTimedMetadataResponse *_timedMetadataResponse;
  NSOperationQueue *_timedMetadataOperationQueue;
  BOOL _isMusicCellularStreamingAllowed;
  BOOL _didReceiveHLSTimedMetadata;
  NSString *_hlsStreamIdentifier;
  BOOL _isiTunesStoreStream;
  ICStoreRequestContext *_storeRequestContext;
  NSURL *_streamingKeyCertificateURL;
  NSURL *_streamingKeyServerURL;
  NSString *_rtcReportingServiceIdentifier;
  MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;
  ICContentKeySession *_contentKeySession;
  ICAVAssetDownloadURLSession *_hlsDownloadURLSession;
  ICURLRequest *_hlsDownloadURLRequest;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _genericObjectLock;
  BOOL _mediaItemNeedsLoading;
  NSURL *_tempFileURLToCleanup;
  MPCDeferrableTask *_deferredLeaseAcquisitionTask;
  long long _leasePlaybackPreventionState;
  ICMusicSubscriptionLeaseStatus *_leaseStatus;
}

@property (copy, nonatomic) NSDictionary *audioFormatsDictionary;
@property (retain, nonatomic) NSArray *availableSortedFormats;
@property (retain, nonatomic) NSObject<MPCModelPlaybackAssetCacheProviding> *assetCacheProvider;
@property (copy, nonatomic) NSString *assetSourceStoreFrontID;
@property (nonatomic) long long equivalencySourceAdamID;
@property (retain, nonatomic) MPModelGenericObject *genericObject;
@property (readonly, copy, nonatomic) NSData *jingleTimedMetadata;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (copy, nonatomic) NSNumber *siriInitiated;
@property (nonatomic) BOOL radioPlayback;
@property (nonatomic) BOOL radioStreamPlayback;
@property (nonatomic) BOOL subscriptionRequired;
@property (readonly, nonatomic) BOOL hasVideo;
@property (readonly, nonatomic) BOOL shouldReportPlayEventsToStore;
@property (readonly, copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (nonatomic) long long stationItemLikedState;
@property (retain, nonatomic) NSDictionary *trackInfo;
@property (readonly, nonatomic) NSData *trackInfoData;
@property (readonly, nonatomic) MPGaplessInfo *gaplessInfo;
@property (retain, nonatomic) NSString *playerID;
@property (weak, nonatomic) MPCPlaybackEngineEventStream *eventStream;
@property (retain, nonatomic) MPCPlayerAudioFormat *preferredFormat;
@property (retain, nonatomic) MPCPlayerAudioFormat *activeFormat;
@property (nonatomic) long long activeFormatJustification;
@property (retain, nonatomic) NSArray *alternateFormats;
@property (retain, nonatomic) MPCPlayerAudioRoute *audioRoute;
@property (copy, nonatomic) NSString *previousQueueItemID;
@property (retain, nonatomic) MPCAudioAssetTypeSelector *audioAssetTypeSelector;
@property (readonly, nonatomic) long long preferredAudioAssetType;
@property (readonly, nonatomic) MPCAudioAssetTypeSelection *preferredAudioAssetTypeSelection;
@property (readonly, nonatomic) long long loadedAudioAssetType;
@property (readonly, nonatomic) BOOL hlsAsset;
@property (readonly, nonatomic) BOOL downloadedAsset;
@property (nonatomic) BOOL prioritizeStartupOverQuality;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)_unwrapPlaybackError:(id)error;
+ (BOOL)_prefersHighQualityAudioContentForNetworkType:(long long)type;
+ (BOOL)_prefersHighQualityVideoContentForNetworkType:(long long)type;
+ (id)_utilitySerialQueue;
+ (id)_downloadCompletionPendingItems;

/* instance methods */
- (id)initWithGenericObject:(id)object itemProperties:(id)properties playbackRequestEnvironment:(id)environment identityPropertySet:(id)set;
- (void)dealloc;
- (id)album;
- (long long)albumYear;
- (id)albumArtist;
- (long long)storeAlbumArtistID;
- (long long)albumStoreID;
- (long long)artistStoreID;
- (unsigned long long)albumTrackNumber;
- (unsigned long long)albumTrackCount;
- (BOOL)allowsEQ;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)enabled;
- (id)artist;
- (BOOL)isArtistUploadedContent;
- (id)artworkTimeMarkers;
- (id)composer;
- (id)chapterTimeMarkers;
- (id)copyrightText;
- (double)durationFromExternalMetadata;
- (id)externalContentIdentifier;
- (id)genre;
- (BOOL)isAlwaysLive;
- (BOOL)isAssetURLValid;
- (BOOL)isExplicitTrack;
- (id)explicitBadge;
- (BOOL)isLikedStateEnabled;
- (BOOL)isRadioItem;
- (BOOL)isStreamable;
- (BOOL)isValidPlayerSubstituteForItem:(id)item;
- (id)_delegatedUserIdentityProperties:(id *)properties;
- (BOOL)_prefersHighQualityContent;
- (BOOL)_shouldPreloadSubscriptionStatus;
- (id)_assetLoadPropertiesWithUserIdentityProperties:(id)properties delegatedUserIdentityProperties:(id)properties subscriptionPlaybackInfo:(id)info;
- (long long)_suzeLeaseMediaType;
- (id)_iTunesStorePurchasedMediaKind;
- (id)_loudnessInfoMediaKind;
- (float)_volumeAdjustment;
- (void)loadAssetAndPlayerItem;
- (id)_decorateAssetLoadResult:(id)result withURLBag:(id)urlbag;
- (BOOL)_isAssetLoadResultValidForPlayback:(id)playback error:(id *)error;
- (void)_prepareAssetForHLSPlayback:(id)hlsplayback loadResult:(id)result destinationURL:(id)url storeRequestContext:(id)context urlBag:(id)bag identityProperties:(id)properties isStoreKeyServer:(BOOL)server;
- (void)_downloadHLSAssetWhilePlaying:(id)playing assetLoadProperties:(id)properties assetLoadResult:(id)result destinationURL:(id)url sharedCacheURL:(id)url storeRequestContext:(id)context urlBag:(id)bag fileUpgradeRecommendation:(long long)recommendation;
- (void)_getHLSServerDataForLoadResults:(id)results bag:(id)bag keyCertificateURL:(id *)url keyServerURL:(id *)url keyServerAdamID:(id *)id keyServerProtocolType:(long long *)type;
- (id)_hlsDownloadOptionsDictionary:(id)dictionary;
- (id)_createOrUpdateDatabaseEntry:(id)entry loadResult:(id)result urlBag:(id)bag destinationURL:(id)url purgeable:(BOOL)purgeable;
- (void)_downloadHLSAsset:(id)hlsasset destinationURL:(id)url sharedCacheURL:(id)url assetLoadProperties:(id)properties loadResult:(id)result storeRequestContext:(id)context urlBag:(id)bag fileUpgradeRecommendation:(long long)recommendation;
- (void)_checkDownloadErrorAndValidityOfDownloadedHLSAsset:(id)hlsasset downloadLocationURL:(id)url completion:(id /* block */)completion;
- (BOOL)_linkAssetIfNeededAtURL:(id)url toDestinationURL:(id)url shareCacheURL:(id)url;
- (id)audioFormatForStableVariantID:(id)id;
- (BOOL)updateAudioFormatsDictionary:(id)dictionary;
- (BOOL)updatePreferredFormat:(id)format;
- (BOOL)updateActiveFormat:(id)format justification:(long long)justification;
- (void)configureAVPlayerItemWithAudioFormat:(id)format forceSpatial:(BOOL)spatial;
- (void)_updateActiveFormatJustification:(long long)justification;
- (void)_emitAudioFormatChangeEvent;
- (void)_emitAudioAssetTypeSelection:(id)selection assetLoadInfo:(id)info;
- (void)_emitNetworkOperationWithPerformanceMetrics:(id)metrics operationType:(long long)type reason:(id)reason blocksPlayback:(BOOL)playback;
- (void)updatePlayerItemMetadata;
- (id)mainTitle;
- (id)mediaItem;
- (BOOL)mediaItemNeedsLoading;
- (id)modelGenericObject;
- (unsigned long long)mediaType;
- (unsigned long long)persistentID;
- (id)databaseID;
- (unsigned long long)cloudID;
- (id)personID;
- (id)cloudUniversalLibraryID;
- (id)cloudAlbumID;
- (unsigned long long)albumPersistentID;
- (unsigned long long)albumArtistPersistentID;
- (unsigned long long)artistPersistentID;
- (unsigned long long)genrePersistentID;
- (unsigned long long)composerPersistentID;
- (long long)storePurchasedAdamID;
- (void)notePlaybackFinishedByHittingEnd;
- (id)playbackError;
- (BOOL)shouldShowComposer;
- (BOOL)prefersSeekOverSkip;
- (void)prepareForRate:(float)rate completionHandler:(id /* block */)handler;
- (void)_prepareLeaseWithShouldRequireLeaseAcquisition:(BOOL)acquisition completionHandler:(id /* block */)handler;
- (void)setRating:(float)rating;
- (long long)stationID;
- (id)stationHash;
- (id)stationName;
- (id)stationStringID;
- (long long)stationProviderID;
- (long long)storeItemInt64ID;
- (long long)storeSubscriptionAdamID;
- (long long)reportingAdamID;
- (long long)lyricsAdamID;
- (BOOL)supportsLikedState;
- (id)libraryLyrics;
- (BOOL)hasStoreLyrics;
- (BOOL)hasTimeSyncedLyrics;
- (id)containerUniqueID;
- (id)playbackInfo;
- (void)setupWithPlaybackInfo;
- (long long)type;
- (id)urlTimeMarkers;
- (BOOL)useEmbeddedChapterData;
- (float)userRating;
- (void)_updateAudioFormatInfoForContentItem:(id)item;
- (BOOL)canUseLoadedAsset;
- (BOOL)allowsAirPlayFromCloud;
- (BOOL)allowsExternalPlayback;
- (id)bookmarkTime;
- (BOOL)requiresLoadedAssetForAirPlayProperties;
- (void)resolvePlaybackError:(id)error withCompletion:(id /* block */)completion;
- (BOOL)shouldPreventPlayback;
- (id)storeAccountID;
- (id)storeFrontIdentifier;
- (BOOL)usesSubscriptionLease;
- (void)_currentPlaybackRateDidChange:(float)change;
- (void)_handleUpdatedLikedState:(long long)state forUserIdentity:(id)identity completion:(id /* block */)completion;
- (long long)_persistedLikedState;
- (void)_willBecomeActivePlayerItem;
- (void)_willResignActivePlayerItem;
- (void)_didResignActivePlayerItem;
- (void)_didBecomeActivePlayerItem;
- (long long)_keyServerAdamID;
- (id /* block */)artworkCatalogBlock;
- (long long)mpcReporting_equivalencySourceAdamID;
- (unsigned long long)mpcReporting_itemType;
- (id)mpcReporting_identityPropertiesLoader;
- (id)mpcReporting_jingleTimedMetadata;
- (id)mpcReporting_requestingBundleIdentifier;
- (id)mpcReporting_requestingBundleVersion;
- (BOOL)mpcReporting_shouldUseRelativeTimePositions;
- (BOOL)mpcReporting_shouldReportPlayEventsToStore;
- (id)mpcReporting_siriInitiated;
- (id)mpcReporting_trackInfo;
- (id)rtcReportingServiceIdentifier;
- (BOOL)resourceLoader:(id)loader shouldWaitForLoadingOfRequestedResource:(id)resource;
- (BOOL)resourceLoader:(id)loader shouldWaitForRenewalOfRequestedResource:(id)resource;
- (void)metadataOutput:(id)output didOutputTimedMetadataGroups:(id)groups fromPlayerItemTrack:(id)track;
- (void)_reloadTimedMetadataRequest;
- (void)nowPlayingInfoCenter:(id)center lyricsForContentItem:(id)item completion:(id /* block */)completion;
- (void)environmentMonitorDidChangeNetworkType:(id)type;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)notification;
- (void)_ageVerificationStateDidChangeNotification:(id)notification;
- (void)_contentTasteControllerDidChangeNotification:(id)notification;
- (void)_subscriptionLeaseStatusDidChangeNotification:(id)notification;
- (void)_suzeLeaseSessionRenewDidFailNotification:(id)notification;
- (void)_timedMetadataResponseDidInvalidateNotification:(id)notification;
- (struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; })_timeoutValues;
- (BOOL)_allowsStreamingPlayback;
- (void)_applyLoudnessInfo;
- (void)_applyPreferredPeakBitRateToPlayerItem:(id)item withItemType:(long long)type;
- (unsigned long long)_audioFormatPreference;
- (id)_bookmarkTime;
- (void)_getSubscriptionStatusWithStoreRequestContext:(id)context completion:(id /* block */)completion;
- (void)_getSubscriptionLeasePropertiesWithCompletion:(id /* block */)completion;
- (void)_getUnverifiedSubscriptionLeaseSessionWithCompletion:(id /* block */)completion;
- (void)_invalidateContentItemForTimedMetadataChangesChangingRevisionID:(BOOL)id;
- (id)_modelPlaybackPosition;
- (void)_postInvalidationNotifications;
- (id)_radioStation;
- (id)_rtcReportingMediaIdentifierWithAssetLoadProperties:(id)properties;
- (id)_rtcReportingServiceIdentifierWithAssetURL:(id)url;
- (BOOL)usesBookmarking;
- (id)_storeRequestContext;
- (double)_startTime;
- (id)_stopTime;
- (id)_storeUbiquitousIdentifier;
- (void)_updateAutomaticSubscriptionLeaseRefresh;
- (void)_updateJingleTimedMetadata;
- (void)_updatePreventionStatusWithLeaseSession:(id)session;
- (id)analyticsContentType;
- (id)analyticsFormatType;
- (void)pauseContentKeySession;
- (void)resumeContentKeySession;
- (BOOL)supportsVocalAttenuation;
- (void)_addToDownloadCompletionPendingItems;
- (void)_removeFromDownloadCompletionPendingItems;
- (void)reevaluateType;
- (void)contentKeySession:(id)session didFinishProcessingKey:(id)key withResponse:(id)response error:(id)error;
- (long long)leasePlaybackPreventionState;
- (id)leaseStatus;
- (id)isSiriInitiated;
- (BOOL)isRadioPlayback;
- (BOOL)isRadioStreamPlayback;
- (BOOL)isSubscriptionRequired;
- (BOOL)isHLSAsset;
- (BOOL)isDownloadedAsset;
@end

#endif /* MPCModelGenericAVItem_h */
