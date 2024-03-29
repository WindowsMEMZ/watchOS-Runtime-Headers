//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAsset_h
#define AVAsset_h
@import Foundation;

#include "AVAssetInternal.h"
#include "AVAsynchronousKeyValueLoading-Protocol.h"
#include "AVDisplayCriteria.h"
#include "AVIntegrityChecking-Protocol.h"
#include "AVLoggingIdentifier-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface AVAsset : NSObject<AVIntegrityChecking, NSCopying, AVAsynchronousKeyValueLoading> {
  /* instance variables */
  AVAssetInternal *_asset;
}

@property (readonly, nonatomic) id propertyListForProxy;
@property (readonly, nonatomic) BOOL isProxy;
@property (readonly) NSArray *availableChapterLocales;
@property (readonly, nonatomic) BOOL defunct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *fragments;
@property (readonly, retain, nonatomic) NSObject<AVLoggingIdentifier> *loggingIdentifier;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) float preferredRate;
@property (readonly, nonatomic) float preferredVolume;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly, nonatomic) AVDisplayCriteria *preferredDisplayCriteria;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minimumTimeOffsetFromLive;

/* class methods */
+ (id)makeAssetLoggingIdentifier;
+ (id)assetProxyWithPropertyList:(id)list;
+ (void)initialize;
+ (id)assetWithURL:(id)url;
+ (id)assetWithURL:(id)url figPlaybackItem:(struct OpaqueFigPlaybackItem *)item trackIDs:(id)ids dynamicBehavior:(BOOL)behavior;
+ (id)assetWithData:(id)data contentType:(id)type options:(id)options;
+ (BOOL)_assetCreationOptionsRequiresInProcessOperation:(id)operation;
+ (BOOL)_assetCreationOptionsPrefersSandboxedOption:(id)option;
+ (BOOL)expectsPropertyRevisedNotifications;
+ (BOOL)supportsPlayerItems;

/* instance methods */
- (int)unusedTrackID;
- (void)findUnusedTrackIDWithCompletionHandler:(id /* block */)handler;
- (BOOL)isDefunct;
- (id)_chapterTracks;
- (void)_loadChapterInfo;
- (id)availableChapterLanguages;
- (id)_availableCanonicalizedChapterLanguages;
- (unsigned long long)_addChapterMetadataItem:(id)item timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range toChapters:(id)chapters fromIndex:(unsigned long long)index;
- (id)_chapterDataTypeForMediaSubType:(int)type;
- (id)_chapterMetadataGroupsWithFigChapterGroups:(id)groups titleLanguage:(id)language containingItemsWithCommonKeys:(id)keys;
- (id)_chapterMetadataGroupsWithTitleLanguage:(id)language containingItemsWithCommonKeys:(id)keys;
- (id)_chapterMetadataGroupsBestMatchingPreferredLanguages:(id)languages containingItemsWithCommonKeys:(id)keys;
- (id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)languages;
- (void)loadChapterMetadataGroupsBestMatchingPreferredLanguages:(id)languages completionHandler:(id /* block */)handler;
- (id)chapterMetadataGroupsWithTitleLocale:(id)locale containingItemsWithCommonKeys:(id)keys;
- (void)loadChapterMetadataGroupsWithTitleLocale:(id)locale containingItemsWithCommonKeys:(id)keys completionHandler:(id /* block */)handler;
- (id)makePropertyListForProxyWithOptions:(id)options;
- (id)initWithURL:(id)url options:(id)options;
- (id)initWithData:(id)data contentType:(id)type options:(id)options;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)dealloc;
- (void)_setLoggingIdentifier:(id)identifier;
- (id)_nameForLogging;
- (id)_weakReference;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (id)_comparisonToken;
- (BOOL)isEqual:(id)equal;
- (id)valueForUndefinedKey:(id)key;
- (long long)statusOfValueForKey:(id)key;
- (long long)statusOfValueForKey:(id)key error:(id *)error;
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id /* block */)handler;
- (void)_loadValuesSynchronouslyForKeys:(id)keys trackKeys:(id)keys;
- (void)loadValuesAsynchronouslyForKeys:(id)keys keysForCollectionKeys:(id)keys completionHandler:(id /* block */)handler;
- (void)cancelLoading;
- (struct OpaqueFigAsset *)_figAsset;
- (struct OpaqueFigFormatReader *)_copyFormatReader;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (Class)_classForTrackInspectors;
- (id)_absoluteURL;
- (struct OpaqueFigMutableComposition *)_mutableComposition;
- (BOOL)_isStreaming;
- (double)_fragmentMindingInterval;
- (BOOL)_mindsFragments;
- (BOOL)_needsLegacyChangeNotifications;
- (void)_setFragmentMindingInterval:(double)interval;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)minder;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGSize { double x0; double x1; })maximumVideoResolution;
- (id)availableVideoDynamicRanges;
- (int)naturalTimeScale;
- (BOOL)providesPreciseDurationAndTiming;
- (unsigned long long)referenceRestrictions;
- (id)trackGroups;
- (id)_firstTrackGroupWithMediaTypes:(id)types;
- (id)audioAlternatesTrackGroup;
- (id)subtitleAlternatesTrackGroup;
- (id)alternateTrackGroups;
- (id)_mediaSelectionGroupDictionaries;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (id)availableMediaCharacteristicsWithMediaSelectionOptions;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)characteristic;
- (void)loadMediaSelectionGroupForMediaCharacteristic:(id)characteristic completionHandler:(id /* block */)handler;
- (id)mediaSelectionGroupForPropertyList:(id)list mediaSelectionOption:(id *)option;
- (id)preferredMediaSelection;
- (id)allMediaSelections;
- (id)trackReferences;
- (id)creationDate;
- (id)lyrics;
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (id)metadataForFormat:(id)format;
- (void)loadMetadataForFormat:(id)format completionHandler:(id /* block */)handler;
- (id)metadata;
- (id)_ID3Metadata;
- (id)_tracksWithClass:(Class)class;
- (id)tracks;
- (void)_tracksDidChange;
- (id)trackWithTrackID:(int)id;
- (void)loadTrackWithTrackID:(int)id completionHandler:(id /* block */)handler;
- (id)tracksWithMediaType:(id)type;
- (void)loadTracksWithMediaType:(id)type completionHandler:(id /* block */)handler;
- (id)tracksWithMediaCharacteristic:(id)characteristic;
- (void)loadTracksWithMediaCharacteristic:(id)characteristic completionHandler:(id /* block */)handler;
- (id)tracksWithMediaCharacteristics:(id)characteristics;
- (id)compatibleTrackForCompositionTrack:(id)track;
- (void)findCompatibleTrackForCompositionTrack:(id)track completionHandler:(id /* block */)handler;
- (BOOL)_requiresInProcessOperation;
- (BOOL)hasProtectedContent;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (BOOL)isReadable;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)options;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)canContainFragments;
- (BOOL)containsFragments;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (BOOL)_hasResourceLoaderDelegate;
- (void)_handleURLRequest:(id)urlrequest;
- (BOOL)supportsAnalysisReporting;
- (id)_assetAnalysisMessages;
- (long long)moovAtomSize;
- (BOOL)_prefersNominalDurations;
@end

#endif /* AVAsset_h */
