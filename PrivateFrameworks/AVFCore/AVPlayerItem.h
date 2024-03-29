//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVPlayerItem_h
#define AVPlayerItem_h
@import Foundation;

#include "AVIntegrityChecking-Protocol.h"
#include "AVPlayerItem.h"
#include "AVPlayerItemInternal.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDate, NSError, NSString;
@protocol NSObject><NSCopying;

@interface AVPlayerItem : NSObject<AVIntegrityChecking, NSCopying> {
  /* instance variables */
  AVPlayerItemInternal *_playerItem;
}

@property (readonly, nonatomic) BOOL authorizationRequiredForPlayback;
@property (readonly, nonatomic) BOOL applicationAuthorizedForPlayback;
@property (readonly, nonatomic) BOOL contentAuthorizedForPlayback;
@property (nonatomic) BOOL _externalProtectionRequiredForPlayback;
@property (readonly, nonatomic) BOOL _rental;
@property (readonly, nonatomic) NSDate *_rentalStartDate;
@property (readonly, nonatomic) NSDate *_rentalExpirationDate;
@property (readonly, nonatomic) BOOL _rentalPlaybackStarted;
@property (readonly, nonatomic) NSDate *_rentalPlaybackStartedDate;
@property (readonly, nonatomic) NSDate *_rentalPlaybackExpirationDate;
@property (readonly, nonatomic) NSArray *outputs;
@property (readonly, nonatomic) NSArray *mediaDataCollectors;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (retain) NSObject<NSObject><NSCopying> *AVKitData;
@property (nonatomic) BOOL automaticallyHandlesInterstitialEvents;
@property (readonly, nonatomic) AVPlayerItem *templatePlayerItem;
@property (readonly, nonatomic) BOOL defunct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long status;
@property (readonly) NSError *error;

/* class methods */
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)provider withOptions:(id)options;
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)session;
+ (void)initialize;
+ (BOOL)_forStreamingItemsVendAssetWithFigPlaybackItem;
+ (BOOL)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+ (id)playerItemWithURL:(id)url;
+ (id)playerItemWithAsset:(id)asset;
+ (id)playerItemWithAsset:(id)asset automaticallyLoadedAssetKeys:(id)keys;
+ (BOOL)_hasOverrideForSelector:(SEL)selector;
+ (int)_createFigPlaybackItemForFigPlayer:(struct OpaqueFigPlayer *)player asset:(id)asset URL:(id)url flags:(unsigned int)flags options:(struct __CFDictionary *)options playbackItem:(struct OpaqueFigPlaybackItem * *)item;
+ (struct OpaqueCMTimebase *)_copyTimebaseFromFigPlaybackItem:(struct OpaqueFigPlaybackItem *)item;
+ (BOOL)automaticallyNotifiesObserversOfSavesDownloadedDataToDiskWhenDone;
+ (BOOL)automaticallyNotifiesObserversOfUsesMinimalLatencyForVideoCompositionRendering;
+ (BOOL)automaticallyNotifiesObserversOfVariantIndex;
+ (BOOL)automaticallyNotifiesObserversOfHasEnabledVideo;
+ (BOOL)automaticallyNotifiesObserversOfHasEnabledAudio;
+ (BOOL)automaticallyNotifiesObserversOfAllowProgressiveSwitchUp;
+ (BOOL)automaticallyNotifiesObserversOfAllowProgressiveStartup;
+ (BOOL)automaticallyNotifiesObserversOfAllowProgressiveResume;
+ (BOOL)automaticallyNotifiesObserversOfStatus;
+ (BOOL)automaticallyNotifiesObserversOfAsset;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferFull;
+ (BOOL)automaticallyNotifiesObserversOfSeekableTimeRanges;
+ (BOOL)automaticallyNotifiesObserversOfLoadedTimeRanges;
+ (BOOL)automaticallyNotifiesObserversOfPresentationSize;
+ (BOOL)automaticallyNotifiesObserversOfTracks;

/* instance methods */
- (BOOL)isDefunct;
- (void)_setTemplatePlayerItem:(id)item;
- (id)videoEnhancementMode;
- (void)_updateVideoEnhancementModeOnFigPlaybackItem;
- (void)setVideoEnhancementMode:(id)mode;
- (id)interstitialEventID;
- (void)_setInterstitialEventID:(id)id;
- (id)_metadataOutputForKey:(id)key;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)item didOutputSampleBuffers:(id)buffers fromTrackWithID:(int)id forMetadataOutputWithDictionaryKey:(id)key;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)item didFlushMetadataOutputWithDictionaryKey:(id)key;
- (id)_legibleOutputForKey:(id)key;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)item didOutputAttributedStrings:(id)strings nativeSampleBuffers:(id)buffers atItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time withLegibleOutputsDictionaryKey:(id)key;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)item didFlushLegibleOutputWithDictionaryKey:(id)key;
- (void)_quietlySetServiceIdentifier;
- (void)_addMetadataCollector:(id)collector;
- (void)_addMetadataCollector:(id)collector locked:(BOOL)locked;
- (void)_removeMetadataCollector:(id)collector;
- (void)_removeMetadataCollector:(id)collector locked:(BOOL)locked;
- (void)addMediaDataCollector:(id)collector;
- (void)addMediaDataCollector:(id)collector locked:(BOOL)locked;
- (void)removeMediaDataCollector:(id)collector;
- (void)removeMediaDataCollector:(id)collector locked:(BOOL)locked;
- (id)_metadataCollectors;
- (void)_updateTaggedMetadataArray:(id)array;
- (id)_videoOutputs;
- (id)_legibleOutputsForKeys;
- (id)_metadataOutputsForKeys;
- (void)_evaluateVideoOutputs;
- (void)_evaluateLegibleOutputs;
- (void)_evaluateMetadataOutputs;
- (void)_configureVideoCompositionColorProperties;
- (id)_preferredPixelBufferAttributes;
- (void)_addVideoOutput:(id)output;
- (void)_addLegibleOutput:(id)output;
- (void)_addMetadataOutput:(id)output;
- (void)addOutput:(id)output;
- (void)_removeVideoOutput:(id)output;
- (void)_removeLegibleOutput:(id)output;
- (void)_removeMetadataOutput:(id)output;
- (void)removeOutput:(id)output;
- (void)_quietlySetEQPreset:(int)eqpreset;
- (void)_setEQPreset:(int)eqpreset;
- (void)_setRampInOutInfo:(id)info;
- (void)_setAudibleDRMInfo:(id)drminfo;
- (long long)_fileSize;
- (long long)_availableFileSize;
- (id)accessLog;
- (id)errorLog;
- (id)_isExternalProtectionRequiredForPlaybackInternal;
- (BOOL)_isExternalProtectionRequiredForPlayback;
- (void)_setExternalProtectionRequiredForPlayback:(BOOL)playback;
- (BOOL)_isRental;
- (BOOL)_isRentalPlaybackStarted;
- (BOOL)isAuthorizationRequiredForPlayback;
- (BOOL)isApplicationAuthorizedForPlayback;
- (BOOL)isContentAuthorizedForPlayback;
- (id)init;
- (id)initWithURL:(id)url;
- (id)initWithAsset:(id)asset;
- (id)initWithAsset:(id)asset automaticallyLoadedAssetKeys:(id)keys;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone newAssetOptions:(id)options;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copy;
- (id)_nameForLogging;
- (id)identifier;
- (id)delegate;
- (void)setDelegate:(id)delegate;
- (BOOL)_timeJumpedNotificationIncludesExtendedDiagnosticPayload;
- (void)_setTimeJumpedNotificationIncludesExtendedDiagnosticPayload:(BOOL)payload;
- (id)valueForUndefinedKey:(id)key;
- (id)_weakReference;
- (id)_copyStateDispatchQueue;
- (struct OpaqueFigPlaybackItem *)_copyFigPlaybackItem;
- (struct OpaqueFigPlaybackItem *)_copyFigPlaybackItemLocked:(BOOL)locked;
- (BOOL)_getCachedPresentationSize:(struct CGSize { double x0; double x1; } *)size;
- (void)addObserver:(id)observer forKeyPath:(id)path options:(unsigned long long)options context:(void *)context;
- (BOOL)_configurePlaybackItemAndReturnError:(id *)error;
- (id)_player;
- (id)_playerConnection;
- (void)_attachToPlayer:(id)player;
- (void)_attachToFigPlayer;
- (BOOL)_addToPlayQueueOfFigPlayerOfPlayer:(id)player afterFigPlaybackItemOfItem:(id)item;
- (void)_removeFromPlayQueueOfFigPlayerOfAttachedPlayer;
- (void)_playerChangeStatusToFailedWithError:(id)error;
- (id)_nextItem;
- (id)_previousItem;
- (void)_insertAfterItem:(id)item;
- (void)_removeFromItems;
- (id)presentationSizePublisher;
- (id)tracksPublisher;
- (id)nonForcedSubtitleDisplayEnabledPublisher;
- (id)_propertyListForMediaSelection:(id)selection forGroup:(id)group;
- (id)_URL;
- (void)_setURL:(id)url;
- (void)_setAsset:(id)asset;
- (id)_ensureAssetWithFigPlaybackItemWithTrackIDs:(id)ids;
- (void)_markAsNeedingNewAssetWithFigPlaybackItem;
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
- (void)_markAssetWithFigPlaybackItemAsNeedingNewTracks;
- (void)_kickAssetObserversIfAppropriate;
- (void)_informObserversAboutAvailabilityOfTracks:(id)tracks;
- (void)_informObserversAboutAvailabilityOfPresentationSize;
- (void)_informObserversAboutAvailabilityOfDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)_informObserversAboutAvailabilityOfCurrentMediaSelection;
- (void)_changeStatusToFailedWithError:(id)error;
- (id)asset;
- (id)automaticallyLoadedAssetKeys;
- (BOOL)_isReadyForInspectionOfDuration;
- (void)_markAsReadyForInspectionOfDuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_duration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)_tracksWithFPTrackIDArray:(id)idarray fromFigPlaybackItem:(struct OpaqueFigPlaybackItem *)item;
- (id)_cachedTracks;
- (id)_tracksFromAssetTrackIDs;
- (BOOL)_isReadyForInspectionOfTracks;
- (void)_markAsReadyForInspectionOfTracks;
- (id)_tracks;
- (id)tracks;
- (id)_trackWithTrackID:(int)id;
- (id)_enabledTrackFormatDescriptions;
- (id)_fpNotificationNames;
- (void)_addFPListeners;
- (void)_removeFPListeners;
- (void)_addFAListeners;
- (void)_removeFAListeners;
- (void)_addFoldedTBListeners;
- (void)_removeFoldedTBListeners;
- (void)_respondToBecomingReadyForBasicInspection;
- (BOOL)_isReadyForBasicInspection;
- (void)_markAsReadyForBasicInspection;
- (void)_respondToBecomingReadyForBasicInspectionWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)_invokeReadyForEnqueueingHandlers;
- (void)_makeReadyForEnqueueingWithCompletionHandler:(id /* block */)handler;
- (BOOL)_canPlayFastForward;
- (BOOL)canPlayFastForward;
- (BOOL)_canPlayFastReverse;
- (BOOL)canPlayFastReverse;
- (BOOL)_isAFileBasedItemThatsReadyToPlay;
- (BOOL)_canPlayReverse;
- (BOOL)canPlayReverse;
- (BOOL)canPlaySlowForward;
- (BOOL)canPlaySlowReverse;
- (BOOL)_canStepForward;
- (BOOL)canStepForward;
- (BOOL)_canStepBackward;
- (BOOL)canStepBackward;
- (BOOL)automaticallyPreservesTimeOffsetFromLive;
- (void)_updatePreservesTimeOffsetFromLive;
- (void)setAutomaticallyPreservesTimeOffsetFromLive:(BOOL)live;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_configuredTimeOffsetFromLive;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })configuredTimeOffsetFromLive;
- (void)_updateConfiguredTimeOffsetFromLiveOnFigPlaybackItem;
- (void)setConfiguredTimeOffsetFromLive:(struct { long long x0; int x1; unsigned int x2; long long x3; })live;
- (BOOL)_isReadyForInspectionOfRecommendedTimeOffsetFromLive;
- (void)_markAsReadyForInspectionOfRecommendedTimeOffsetFromLive;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_recommendedTimeOffsetFromLive;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })recommendedTimeOffsetFromLive;
- (BOOL)_isReadyForInspectionOfPresentationSize;
- (void)_markAsReadyForInspectionOfPresentationSize;
- (struct CGSize { double x0; double x1; })_presentationSize;
- (struct CGSize { double x0; double x1; })presentationSize;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_currentTimeWithOptionalFoldedTimebase:(struct OpaqueCMTimebase *)timebase;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentUnfoldedTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (int)makeSeekID;
- (int)_CreateSeekID;
- (void)_cancelPendingSeekAndRegisterSeekID:(int)id withCompletionHandler:(id /* block */)handler;
- (void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)id finished:(BOOL)finished;
- (void)_postSeekCompletionNotificationWithSeekID:(int)id andResult:(BOOL)result;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })before toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })after;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })before toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })after seekID:(int)id;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time completionHandler:(id /* block */)handler;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })before toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })after completionHandler:(id /* block */)handler;
- (void)_seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })before toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })after seekID:(int)id completionHandler:(id /* block */)handler;
- (void)cancelPendingSeeks;
- (id)currentDate;
- (BOOL)seekToDate:(id)date completionHandler:(id /* block */)handler;
- (BOOL)seekToDate:(id)date;
- (id)initialDate;
- (void)setInitialDate:(id)date;
- (id)currentEstimatedDate;
- (id)initialEstimatedDate;
- (void)setInitialEstimatedDate:(id)date;
- (void)stepByCount:(long long)count;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })forwardPlaybackEndTime;
- (void)_updateForwardPlaybackEndTimeOnFigPlaybackItem;
- (void)setForwardPlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })reversePlaybackEndTime;
- (void)_updateReversePlaybackEndTimeOnFigPlaybackItem;
- (void)setReversePlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_timeToPauseBuffering;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeToPauseBuffering;
- (void)_updateTimeToPauseBufferingOnFigPlaybackItem;
- (void)setTimeToPauseBuffering:(struct { long long x0; int x1; unsigned int x2; long long x3; })buffering;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_timeToPausePlayback;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeToPausePlayback;
- (void)_updateTimeToPausePlaybackOnFigPlaybackItem;
- (void)setTimeToPausePlayback:(struct { long long x0; int x1; unsigned int x2; long long x3; })playback;
- (unsigned char)_snapTimeToPausePlayback;
- (unsigned char)snapTimeToPausePlayback;
- (void)_updateSnapTimeToPausePlaybackOnFigPlaybackItem;
- (void)setSnapTimeToPausePlayback:(unsigned char)playback;
- (id)imageQueueInterpolationCurve;
- (BOOL)imageQueueInterpolationCurveWasSet;
- (void)_updateImageQueueInterpolationCurveOnFigPlaybackItem;
- (void)setImageQueueInterpolationCurve:(id)curve;
- (BOOL)blendsVideoFrames;
- (BOOL)blendsVideoFramesWasSet;
- (void)_updateBlendsVideoFramesOnFigPlaybackItem;
- (void)setBlendsVideoFrames:(BOOL)frames;
- (BOOL)appliesPerFrameHDRDisplayMetadata;
- (BOOL)appliesPerFrameHDRDisplayMetadataWasSet;
- (void)_updateAppliesPerFrameHDRDisplayMetadataOnFigPlaybackItem;
- (void)setAppliesPerFrameHDRDisplayMetadata:(BOOL)metadata;
- (BOOL)reversesMoreVideoFramesInMemory;
- (BOOL)reversesMoreVideoFramesInMemoryWasSet;
- (void)_updateReversesMoreVideoFramesInMemoryOnFigPlaybackItem;
- (void)setReversesMoreVideoFramesInMemory:(BOOL)memory;
- (BOOL)aggressivelyCachesVideoFrames;
- (BOOL)aggressivelyCachesVideoFramesWasSet;
- (void)_updateAggressivelyCachesVideoFramesOnFigPlaybackItem;
- (void)setAggressivelyCachesVideoFrames:(BOOL)frames;
- (BOOL)decodesAllFramesDuringOrdinaryPlayback;
- (BOOL)decodesAllFramesDuringOrdinaryPlaybackWasSet;
- (void)_updateDecodesAllFramesDuringOrdinaryPlaybackOnFigPlaybackItem;
- (void)setDecodesAllFramesDuringOrdinaryPlayback:(BOOL)playback;
- (struct OpaqueCMTimebase *)_copyFoldedTimebase;
- (struct OpaqueCMTimebase *)_copyProxyUnfoldedTimebase;
- (struct OpaqueCMTimebase *)_copyProxyFoldedTimebase;
- (struct OpaqueCMTimebase *)_copyProxyTimebase;
- (struct OpaqueCMTimebase *)_copyUnfoldedFigTimebase;
- (struct OpaqueCMTimebase *)unfoldedTimebase;
- (struct OpaqueCMTimebase *)timebase;
- (void)_updateTimebase;
- (void)_updateRTCReportingFlagsOnFigPlaybackItem;
- (void)setRTCReportingFlags:(unsigned int)flags;
- (unsigned int)RTCReportingFlags;
- (void)_updateRTCReportingCategoryOnFigPlaybackItem;
- (void)setReportingCategory:(id)category;
- (id)reportingCategory;
- (void)_updateReportingValuesOnFigPlaybackItem;
- (void)_updateReportingValuesProperty:(id)property forKey:(id)key;
- (void)setReportingValueWithNumber:(id)number forKey:(id)key;
- (void)setReportingValueWithString:(id)string forKey:(id)key;
- (BOOL)limitReadAhead;
- (void)_updateLimitReadAheadOnFigPlaybackItem;
- (void)setLimitReadAhead:(BOOL)ahead;
- (BOOL)allowsExtendedReadAhead;
- (void)setAllowsExtendedReadAhead:(BOOL)ahead;
- (double)preferredForwardBufferDuration;
- (void)setPreferredForwardBufferDuration:(double)duration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maximumTrailingBufferDuration;
- (void)_updateMaximumTrailingBufferDurationOnFigPlaybackItem;
- (void)setMaximumTrailingBufferDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maximumForwardBufferDuration;
- (void)_updateMaximumForwardBufferDurationOnFigPlaybackItem;
- (void)setMaximumForwardBufferDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)alwaysMonitorsPlayability;
- (void)_updateAlwaysMonitorsPlayabilityOnFigPlaybackItem;
- (void)setAlwaysMonitorsPlayability:(BOOL)playability;
- (long long)playbackLikelyToKeepUpTrigger;
- (void)_updatePlaybackLikelyToKeepUpTriggerOnFigPlaybackItem;
- (void)setPlaybackLikelyToKeepUpTrigger:(long long)trigger;
- (BOOL)willNeverSeekBackwardsHint;
- (void)_updateWillNeverSeekBackwardsHintOnFigPlaybackItem;
- (void)setWillNeverSeekBackwardsHint:(BOOL)hint;
- (BOOL)savesDownloadedDataToDiskWhenDoneWasSet;
- (BOOL)savesDownloadedDataToDiskWhenDone;
- (void)setSavesDownloadedDataToDiskWhenDone:(BOOL)done;
- (BOOL)continuesPlayingDuringPrerollForSeek;
- (void)_updateContinuesPlayingDuringPrerollForSeekOnFigPlaybackItem;
- (void)setContinuesPlayingDuringPrerollForSeek:(BOOL)seek;
- (BOOL)continuesPlayingDuringPrerollForRateChange;
- (void)_updateContinuesPlayingDuringPrerollForRateChangeOnFigPlaybackItem;
- (void)setContinuesPlayingDuringPrerollForRateChange:(BOOL)change;
- (BOOL)usesIFrameOnlyPlaybackForHighRateScaledEdits;
- (BOOL)usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
- (void)_updateUsesIFrameOnlyPlaybackForHighRateScaledEditsOnFigPlaybackItem;
- (void)setUsesIFrameOnlyPlaybackForHighRateScaledEdits:(BOOL)edits;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumIntervalForIFrameOnlyPlayback;
- (BOOL)minimumIntervalForIFrameOnlyPlaybackWasSet;
- (void)_updateMinimumIntervalForIFrameOnlyPlaybackOnFigPlaybackItem;
- (void)setMinimumIntervalForIFrameOnlyPlayback:(struct { long long x0; int x1; unsigned int x2; long long x3; })playback;
- (float)speedThresholdForIFrameOnlyPlayback;
- (BOOL)speedThresholdForIFrameOnlyPlaybackWasSet;
- (void)_updateSpeedThresholdForIFrameOnlyPlaybackOnFigPlaybackItem;
- (void)setSpeedThresholdForIFrameOnlyPlayback:(float)playback;
- (BOOL)refreshesClosedCaptionsImmediatelyAfterSeeking;
- (void)_updateRefreshesClosedCaptionsImmediatelyAfterSeekingOnFigPlaybackItem;
- (void)setRefreshesClosedCaptionsImmediatelyAfterSeeking:(BOOL)seeking;
- (id)audioMix;
- (void)_setAudioCurvesAccordingToInputParameters:(id)parameters forTrackID:(int)id;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)processor forTrackID:(int)id;
- (void)_setAudioTimePitchAlgorithm:(id)algorithm forTrackID:(int)id;
- (void)_setAudioEffectParameters:(id)parameters forTrackID:(int)id;
- (void)_applyCurrentAudioMix;
- (void)setAudioMix:(id)mix;
- (void)_setDelayPreparingItemForTestingOnly:(double)only;
- (double)_delayPreparingItemForTestingOnly;
- (id)videoComposition;
- (void)_getVideoComposition:(id *)composition customVideoCompositorSession:(id *)session figVideoCompositor:(struct OpaqueFigVideoCompositor * *)compositor;
- (void)_applyCurrentVideoComposition;
- (void)setVideoComposition:(id)composition;
- (void)_setVideoCompositionFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)_setVideoCompositionSourceTrackIDForFrameTiming:(int)timing;
- (void)_setVideoCompositionRenderSize:(struct CGSize { double x0; double x1; })size;
- (void)_setVideoCompositionRenderScale:(float)scale;
- (void)_setVideoCompositionColorPrimaries:(id)primaries;
- (void)_setVideoCompositionColorYCbCrMatrix:(id)matrix;
- (void)_setVideoCompositionColorTransferFunction:(id)function;
- (void)_setVideoCompositionHDRDisplayMetadataPolicy:(id)policy;
- (void)_setVideoCompositionInstructions:(id)instructions;
- (void)_setVideoCompositionSourceSampleDataTrackIDs:(id)ids;
- (void)_setVideoCompositor:(void *)compositor;
- (id)customVideoCompositor;
- (BOOL)seekingWaitsForVideoCompositionRendering;
- (void)_updateSeekingWaitsForVideoCompositionRenderingOnFigPlaybackItem;
- (void)setSeekingWaitsForVideoCompositionRendering:(BOOL)rendering;
- (BOOL)usesMinimalLatencyForVideoCompositionRendering;
- (void)_updateUsesMinimalLatencyForVideoCompositionRenderingOnFigPlaybackItem;
- (void)_updateRestrictsAutomaticMediaSelectionToAvailableOfflineOptions;
- (void)setUsesMinimalLatencyForVideoCompositionRendering:(BOOL)rendering;
- (id)textStyleRules;
- (id)textHighlightArray;
- (void)_updateTextStyleRulesOnFigPlaybackItem;
- (void)_updateTextHighlightArrayOnFigPlaybackItem;
- (void)setTextStyleRules:(id)rules;
- (void)setTextHighlightArray:(id)array;
- (id)audioTimePitchAlgorithm;
- (void)_updateFigTimePitchAlgorithmOnFigPlaybackItem;
- (void)setAudioTimePitchAlgorithm:(id)algorithm;
- (BOOL)isPlaybackLikelyToKeepUp;
- (BOOL)isPlaybackBufferFull;
- (BOOL)isPlaybackBufferEmpty;
- (float)progressTowardsPlaybackLikelyToKeepUp;
- (BOOL)canUseNetworkResourcesForLiveStreamingWhilePaused;
- (void)_updateCanUseNetworkResourcesForLiveStreamingWhilePausedOnFigPlaybackItem;
- (void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(BOOL)paused;
- (BOOL)startsOnFirstEligibleVariant;
- (void)_updateStartsOnFirstEligibleVariantOnFigPlaybackItem;
- (void)setStartsOnFirstEligibleVariant:(BOOL)variant;
- (id)playabilityMetrics;
- (id)_seekableTimeRangesFromFPSeekableTimeIntervals:(id)intervals;
- (void)_updateLoopTimeRangeOnFigPlaybackItem;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })loopTimeRange;
- (void)setLoopTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range;
- (id)_seekableTimeRanges;
- (id)seekableTimeRanges;
- (double)seekableTimeRangesLastModifiedTime;
- (id)_loadedTimeRangesFromFPPlaybableTimeIntervals:(id)intervals;
- (id)_loadedTimeRanges;
- (id)loadedTimeRanges;
- (id)gaplessInfo;
- (id)_playbackProperties;
- (void)_updatePlaybackPropertiesOnFigPlaybackItem;
- (void)setGaplessInfo:(id)info;
- (id)configurationGroup;
- (long long)variantIndex;
- (double)liveUpdateInterval;
- (void)_quietlySetVariantIndex:(long long)index;
- (void)setVariantIndex:(long long)index;
- (id)currentStableVariantID;
- (void)_updateSoundCheckVolumeNormalizationOnFigPlaybackItem;
- (void)setSoundCheckVolumeNormalization:(float)normalization;
- (float)soundCheckVolumeNormalization;
- (void)_updateVolumeAdjustmentOnFigPlaybackItem;
- (void)setVolumeAdjustment:(float)adjustment;
- (float)volumeAdjustment;
- (BOOL)adjustTargetLevelWasSet;
- (void)_updateAdjustTargetLevelOnFigPlaybackItem;
- (void)setAdjustTargetLevel:(float)level;
- (float)adjustTargetLevel;
- (BOOL)adjustCompressionProfileWasSet;
- (void)_updateAdjustCompressionProfileOnFigPlaybackItem;
- (void)setAdjustCompressionProfile:(unsigned int)profile;
- (unsigned int)adjustCompressionProfile;
- (id)_mediaOptionsSelectedByClient;
- (id)_mediaOptionsSelectedByClientForKey:(id)key;
- (void)_setMediaOptionsSelectedByClient:(id)client forKey:(id)key;
- (void)_removeMediaOptionsSelectedByClient;
- (BOOL)_isFigAssetReadyForInspectionOfMediaSelectionOptionsAndFigPlaybackItemIsReadyForInspection;
- (BOOL)_isFigAssetReadyForInspectionOfMediaSelectionOptions;
- (void)_markFigAssetAsReadyForInspectionOfMediaSelectionOptions;
- (void)_applyMediaSelectionOptions;
- (void)_cacheMediaSelectionOption:(id)option forMediaSelectionGroup:(id)group;
- (void)_clearCachedMediaSelectionGroup:(id)group;
- (BOOL)_hasSelectionInCachedMediaSelectionGroup:(id)group;
- (id)_propertyListForSelectedMediaOptionUsingFigSelectedMediaArrayObtainedFromGroup:(id)group;
- (BOOL)_selectMediaOption:(id)option inMediaSelectionGroup:(id)group;
- (void)selectMediaOption:(id)option inMediaSelectionGroup:(id)group;
- (void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)group;
- (BOOL)playerAppliesAutomaticMediaSelectionToGroup:(id)group;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)group;
- (id)_figSelectedMediaArray;
- (id)_currentMediaSelectionFromFigSelectedMediaArray:(id)array;
- (void)_setCurrentMediaSelection:(id)selection;
- (id)currentMediaSelection;
- (BOOL)restrictsAutomaticMediaSelectionToAvailableOfflineOptions;
- (void)setRestrictsAutomaticMediaSelectionToAvailableOfflineOptions:(BOOL)options;
- (void)_updateNonForcedSubtitleDisplayEnabledOnFigPlaybackItem;
- (BOOL)_isNonForcedSubtitleDisplayEnabled;
- (BOOL)isNonForcedSubtitleDisplayEnabled;
- (void)setNonForcedSubtitleDisplayEnabled:(BOOL)enabled;
- (struct OpaqueFigCPEProtector *)_copyFigCPEProtector;
- (id)timedMetadata;
- (void)_setTimedMetadata:(id)metadata;
- (void)_setSyncLayersOnFigPlaybackItem;
- (void)_removeSyncLayer:(id)layer;
- (void)_addSyncLayer:(id)layer;
- (id)_syncLayers;
- (id)_playbackItemNotificationPayloadToError:(struct __CFDictionary *)error;
- (BOOL)_hasEnabledVideo;
- (BOOL)hasEnabledVideo;
- (BOOL)hasVideo;
- (BOOL)isRenderingSpatialAudio;
- (BOOL)_hasEnabledAudio;
- (BOOL)hasEnabledAudio;
- (BOOL)_suppressionForOutputs:(id)outputs;
- (BOOL)_suppressesVideoLayers;
- (void)_setSuppressesVideoLayers:(BOOL)layers;
- (void)_updateVideoSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem *)item basedOnOutputs:(id)outputs;
- (void)_updateLegibleSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem *)item basedOnOutputs:(id)outputs;
- (BOOL)_hasEnqueuedVideoFrame;
- (BOOL)allowProgressiveSwitchUp;
- (void)setAllowProgressiveSwitchUp:(BOOL)up;
- (BOOL)allowProgressiveStartup;
- (void)setAllowProgressiveStartup:(BOOL)startup;
- (BOOL)allowProgressiveResume;
- (void)setAllowProgressiveResume:(BOOL)resume;
- (struct CGSize { double x0; double x1; })IFramePrefetchTargetDimensions;
- (void)_updateIFramePrefetchTargetDimensionsOnFigPlaybackItem;
- (void)setIFramePrefetchTargetDimensions:(struct CGSize { double x0; double x1; })dimensions;
- (double)preferredPeakBitRate;
- (void)_updatePreferredPeakBitRateOnFigPlaybackItem;
- (void)setPreferredPeakBitRate:(double)rate;
- (double)preferredPeakBitRateForExpensiveNetworks;
- (void)_updatePreferredPeakBitRateForExpensiveNetworksOnFigPlaybackItem;
- (void)setPreferredPeakBitRateForExpensiveNetworks:(double)networks;
- (float)maximumBitRate;
- (void)setMaximumBitRate:(float)rate;
- (struct CGSize { double x0; double x1; })preferredPeakPresentationSize;
- (void)setPreferredPeakPresentationSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })preferredMaximumResolution;
- (void)_updatePreferredMaximumResolutionOnFigPlaybackItem;
- (void)setPreferredMaximumResolution:(struct CGSize { double x0; double x1; })resolution;
- (struct CGSize { double x0; double x1; })preferredMinimumResolution;
- (void)_updatePreferredMaximumResolutionForExpensiveNetworksOnFigPlaybackItem;
- (void)setPreferredMaximumResolutionForExpensiveNetworks:(struct CGSize { double x0; double x1; })networks;
- (struct CGSize { double x0; double x1; })preferredMaximumResolutionForExpensiveNetworks;
- (void)_updatePreferredMinimumResolutionOnFigPlaybackItem;
- (void)setPreferredMinimumResolution:(struct CGSize { double x0; double x1; })resolution;
- (void)_renderingSuppressionDidChangeForOutput:(id)output;
- (BOOL)requiresAccessLog;
- (void)setRequiresAccessLog:(BOOL)log;
- (void)setSuppressesAudioOnlyVariants:(BOOL)variants;
- (BOOL)suppressesAudioOnlyVariants;
- (void)setPrefersOfflinePlayableVariants:(BOOL)variants;
- (BOOL)prefersOfflinePlayableVariants;
- (unsigned long long)variantPreferences;
- (void)_updateVariantPreferencesOnFigPlaybackItem;
- (void)setVariantPreferences:(unsigned long long)preferences;
- (double)preferredMaximumAudioSampleRate;
- (void)_updatePreferredMaximumAudioSampleRateOnFigPlaybackItem;
- (void)setPreferredMaximumAudioSampleRate:(double)rate;
- (BOOL)autoSwitchAtmosStreamVariants;
- (void)_updateAutoSwitchAtmosStreamVariantsOnFigPlaybackItem;
- (void)setAutoSwitchAtmosStreamVariants:(BOOL)variants;
- (void)_updateVideoApertureModeOnFigPlaybackItem;
- (void)setVideoApertureMode:(id)mode;
- (id)videoApertureMode;
- (void)_updateRestrictionsOnFigPlaybackItem;
- (void)setRestrictions:(unsigned long long)restrictions;
- (unsigned long long)restrictions;
- (id)mediaKind;
- (void)_updateMediaKindOnFigPlaybackItem;
- (void)setMediaKind:(id)kind;
- (id)loudnessInfo;
- (void)_updateLoudnessInfoOnFigPlaybackItem;
- (void)setLoudnessInfo:(id)info;
- (struct opaqueMTAudioProcessingTap *)audioTapProcessor;
- (void)_updateAudioTapProcessorOnFigPlaybackItem;
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)processor;
- (void)resetAudioBufferedAhead;
- (void)_addInterstitialEventCollector;
- (void)_addInterstitialEventCollectorLocked:(BOOL)locked;
- (void)_removeInterstitialEventCollector;
- (void)_removeInterstitialEventCollectorLocked:(BOOL)locked;
- (void)_updateCanPlayAndCanStepPropertiesWhenReadyToPlayWithNotificationPayload:(id)payload updateStatusToReadyToPlay:(BOOL)play;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })advanceTimeForOverlappedPlayback;
- (BOOL)advanceTimeForOverlappedPlaybackWasSet;
- (void)_updateAdvanceTimeForOverlappedPlaybackOnFigPlaybackItem;
- (void)setAdvanceTimeForOverlappedPlayback:(struct { long long x0; int x1; unsigned int x2; long long x3; })playback;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maximumTimePlayedToDuringOverlappedPlayback;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maximumTimePlayedToSinceLastSeek;
- (void)_updateItemIdentifierForCoordinatedPlayback;
- (id)_playbackCoordinator;
- (void)_setPlaybackCoordinator:(id)coordinator;
- (void)dispatchIVarWrite:(BOOL)write locked:(BOOL)locked block:(id /* block */)block;
@end

#endif /* AVPlayerItem_h */
