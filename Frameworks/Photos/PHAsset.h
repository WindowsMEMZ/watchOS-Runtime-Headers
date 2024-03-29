//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHAsset_h
#define PHAsset_h
@import Foundation;

#include "PHObject.h"
#include "PHPhotoLibrary.h"
#include "PHResourceChooserAsset-Protocol.h"
#include "PHThumbnailAsset-Protocol.h"
#include "_PLImageLoadingAsset-Protocol.h"

@class CLLocation, NSArray, NSData, NSDate, NSManagedObjectContext, NSManagedObjectID, NSNumber, NSSet, NSString, NSURL, NSValue, PLLazyObject;

@interface PHAsset : PHObject<PHThumbnailAsset, _PLImageLoadingAsset, PHResourceChooserAsset> {
  /* instance variables */
  PLLazyObject *_lazyCachedLocation;
  NSString *_cloudAssetGUID;
  unsigned short _bundleScope;
  int _packedBadgeAttributes;
}

@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) unsigned long long thumbnailIndex;
@property (readonly, nonatomic) BOOL complete;
@property (readonly, nonatomic) long long cloudPlaceholderKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSNumber *livePhotoSRLCompensationAmount;
@property (readonly, nonatomic) long long syndicationEligibility;
@property (readonly, nonatomic) NSString *syndicatedAppDisplayName;
@property (readonly, nonatomic) int avalanchePickType;
@property (readonly, nonatomic) NSData *locationData;
@property (readonly, nonatomic) short savedAssetType;
@property (readonly, nonatomic) BOOL cloudIsDeletable;
@property (readonly, nonatomic) unsigned long long originalResourceChoice;
@property (readonly, copy) NSSet *sceneClassifications;
@property (readonly, copy) NSSet *temporalSceneClassifications;
@property (readonly, copy) NSSet *allSceneClassifications;
@property (readonly, nonatomic) NSData *distanceIdentity;
@property (readonly, nonatomic) long long imageOrientation;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) unsigned long long persistenceState;
@property (readonly, nonatomic) unsigned long long thumbnailIndex;
@property (readonly, nonatomic) NSString *directory;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSDate *trashedDate;
@property (readonly, nonatomic) NSDate *adjustmentTimestamp;
@property (readonly, nonatomic) NSString *thumbnailIdentifier;
@property (readonly, nonatomic) BOOL complete;
@property (readonly, nonatomic) NSURL *ALAssetURL;
@property (readonly, nonatomic) int exifOrientation;
@property (readonly, nonatomic) NSString *originalColorSpace;
@property (readonly, nonatomic) NSData *imageRequestHints;
@property (readonly, nonatomic) double curationScore;
@property (readonly, nonatomic) float overallAestheticScore;
@property (readonly, nonatomic) long long cloudPlaceholderKind;
@property (readonly, nonatomic) long long videoCpDurationValue;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } locationCoordinate;
@property (readonly, nonatomic) unsigned short playbackVariation;
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) unsigned short syndicationState;
@property (readonly, nonatomic) unsigned long long reframeVariation;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic) long long creationDateSource;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } preferredCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } acceptableCropRect;
@property (readonly, nonatomic) BOOL hasPhotoColorAdjustments;
@property (readonly, nonatomic) NSArray *faceRegions;
@property (readonly, nonatomic) double faceAreaMinX;
@property (readonly, nonatomic) double faceAreaMaxX;
@property (readonly, nonatomic) double faceAreaMinY;
@property (readonly, nonatomic) double faceAreaMaxY;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } originalFaceAreaRect;
@property (readonly, nonatomic) NSValue *originalFaceAreaRectValue;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedFaceAreaRect;
@property (readonly, nonatomic) long long RAWBadgeAttributes;
@property (readonly, nonatomic) BOOL hasKeywords;
@property (readonly, copy, nonatomic) NSString *cloudIdentifier;
@property (readonly, nonatomic) id faceAdjustmentVersion;
@property (readonly, nonatomic) short faceAnalysisVersion;
@property (nonatomic) BOOL assetDescriptionWasSet;
@property BOOL canUseLocationCoordinateForLocation;
@property (readonly, nonatomic) NSDate *analysisStateModificationDate;
@property (readonly, nonatomic) unsigned short deferredProcessingNeeded;
@property (readonly, nonatomic) unsigned short videoDeferredProcessingNeeded;
@property (readonly, nonatomic) BOOL isVideo;
@property (readonly, nonatomic) BOOL isHDRVideo;
@property (readonly, nonatomic) BOOL isLoopingVideo;
@property (readonly, nonatomic) BOOL isPhoto;
@property (readonly, nonatomic) BOOL isAudio;
@property (readonly, nonatomic) BOOL isPhotoStreamPhoto;
@property (readonly, nonatomic) BOOL hasPhotoStreamTagID;
@property (readonly, nonatomic) BOOL isCloudSharedAsset;
@property (readonly, nonatomic) BOOL isMomentSharedAsset;
@property (readonly, nonatomic) BOOL isReferencedAsset;
@property (readonly, nonatomic) BOOL isGuestAsset;
@property (readonly, nonatomic) BOOL isSyndicatedAssetSavedToUserLibrary;
@property (readonly, nonatomic) BOOL isOffline;
@property (readonly, nonatomic) BOOL isCloudPlaceholder;
@property (readonly, nonatomic) BOOL isCloudPhotoLibraryAsset;
@property (readonly, nonatomic) BOOL isStreamedVideo;
@property (readonly, nonatomic) BOOL isHighFrameRateVideo;
@property (readonly, nonatomic) BOOL isHDVideo;
@property (readonly, nonatomic) BOOL isProRes;
@property (readonly, nonatomic) BOOL isJPEG;
@property (readonly, nonatomic) BOOL isJPEG2000;
@property (readonly, nonatomic) BOOL isRAW;
@property (readonly, nonatomic) BOOL isRAWPlusJPEG;
@property (readonly, nonatomic) BOOL isHEIF;
@property (readonly, nonatomic) BOOL isTIFF;
@property (readonly, nonatomic) BOOL isPNG;
@property (readonly, nonatomic) BOOL isPDF;
@property (readonly, nonatomic) BOOL isPSD;
@property (readonly, nonatomic) BOOL isAnimatedGIF;
@property (readonly, nonatomic) BOOL isPartOfBurst;
@property (readonly, nonatomic) BOOL isHEICSequence;
@property (readonly, nonatomic) BOOL isCinematicVideo;
@property (readonly, nonatomic) BOOL isSpatialMedia;
@property (readonly, nonatomic) BOOL hasEditableDepth;
@property (readonly, nonatomic) BOOL isPhotoIris;
@property (readonly, nonatomic) BOOL isPhotoIrisPlaceholder;
@property (readonly, nonatomic) BOOL canPlayPhotoIris;
@property (readonly, nonatomic) BOOL canPlayAutoloop;
@property (readonly, nonatomic) BOOL canPlayMirror;
@property (readonly, nonatomic) BOOL canPlayLongExposure;
@property (readonly, nonatomic) BOOL canPlayLoopingVideo;
@property (readonly, nonatomic) BOOL isTimelapsePlaceholder;
@property (readonly, nonatomic) BOOL isIncludedInMoments;
@property (readonly, nonatomic) BOOL isIncludedInCloudFeeds;
@property (readonly, nonatomic) BOOL trashed;
@property (readonly, nonatomic) BOOL canPerformSharingAction;
@property (readonly, nonatomic) double highlightPromotionScore;
@property (readonly, nonatomic) double highlightVisibilityScore;
@property (readonly, nonatomic) BOOL canFlipFullSizeRender;
@property (readonly, nonatomic) BOOL isWalrusEnabled;
@property (readonly, nonatomic) BOOL isLocalVideoKeyFrameValid;
@property (readonly, nonatomic) unsigned short videoCpVisibilityState;
@property (readonly, nonatomic) BOOL participatesInLibraryScope;
@property (readonly, nonatomic) NSString *resourcesDebugDescription;
@property (readonly, nonatomic) NSString *metadataDebugDescription;
@property (readonly, nonatomic) NSString *croppingDebugDescription;
@property (readonly, nonatomic) NSString *variationSuggestionStatesDetails;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) BOOL favorite;
@property (readonly, nonatomic) BOOL syncFailureHidden;
@property (readonly, nonatomic) NSString *burstIdentifier;
@property (readonly, nonatomic) unsigned long long burstSelectionTypes;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (readonly, nonatomic) BOOL hasAdjustments;
@property (readonly, nonatomic) NSString *adjustmentFormatIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContextForFetchingResources;
@property (readonly, nonatomic) unsigned long long effectiveThumbnailIndex;

/* class methods */
+ (id)_imageManagerRequestLoggingQueue;
+ (id)_inq_imageManagerRequestLogsByAssetUUID;
+ (id)_inq_highestImageManagerRequestIDsObserved;
+ (id)_inq_imageManagerRequestMessagesByRequestIDForAssetUUID:(id)uuid requestID:(long long)id;
+ (void)_inq_recordRequestID:(long long)id;
+ (id)_currentTimestampString;
+ (void)_inq_trimToMostRecentImageManagerMessages;
+ (id)composabilityScoresOfAssets:(id)assets options:(id)options error:(id *)error;
+ (id)fetchCuratedAssetsForMomentShareCreationWithAssets:(id)assets options:(id)options;
+ (id)fetchPreviewAssetsForMomentShareCreationWithAssets:(id)assets options:(id)options;
+ (id)fetchAssetsWithSyndicationIdentifiers:(id)identifiers options:(id)options;
+ (id)fetchAssetsWithSyndicationIdentifiers:(id)identifiers options:(id)options includeRejected:(BOOL)rejected;
+ (id)fetchSyndicatedAssetsWithOptions:(id)options;
+ (id)fetchSyndicatedAssetsWithOptions:(id)options includeRejected:(BOOL)rejected;
+ (id)filterPredicateForUnsavedSyndicationAssets;
+ (id)filterPredicateForSavedSyndicationAssetsOnly;
+ (id)filterPredicateToIncludeOnlyReceivedSyndicatedAssets;
+ (id)filterPredicateToExcludeNoSyndicationAssets;
+ (id)predicateForSyndicatedAssetIdentifiers:(id)identifiers;
+ (id)predicateForSyndicatedAssetIdentifiers:(id)identifiers includeRejected:(BOOL)rejected;
+ (id)senderIdentifierByAssetUUIDForAssets:(id)assets;
+ (id)fetchAssetsForReferences:(id)references photoLibrary:(id)library;
+ (id)_requestCuratedAssetInAssetCollection:(id)collection referenceAsset:(id)asset referencePersons:(id)persons fetchOptions:(id)options onlyKey:(BOOL)key;
+ (id)_fetchRepresentativeAssetInAssetCollection:(id)collection;
+ (id)_assetFetchResultFromAssets:(id)assets options:(id)options;
+ (id)fetchKeyCuratedAssetInAssetCollection:(id)collection referenceAsset:(id)asset;
+ (id)fetchKeyCuratedAssetInAssetCollection:(id)collection referenceAsset:(id)asset options:(id)options;
+ (id)fetchKeyCuratedAssetInAssetCollection:(id)collection referencePersons:(id)persons;
+ (id)fetchCuratedAssetsInAssetCollection:(id)collection;
+ (id)fetchCuratedAssetsInAssetCollection:(id)collection options:(id)options;
+ (id)fetchExtendedCuratedAssetsInAssetCollection:(id)collection options:(id)options;
+ (id)requestCuratedAssetsInAssetCollection:(id)collection referencePersons:(id)persons options:(id)options;
+ (id)fetchMovieCuratedAssetsInMemory:(id)memory;
+ (id)fetchUserCuratedAssetsInMemory:(id)memory;
+ (id)fetchUserCuratedAssetsInMemory:(id)memory options:(id)options;
+ (id)fetchCustomUserAssetsInMemory:(id)memory options:(id)options;
+ (id)fetchRepresentativeAssetsInAssetCollection:(id)collection;
+ (id)fetchExtendedCuratedAndRepresentativeAssetsAssociatedWithMemory:(id)memory options:(id)options;
+ (id)fetchReducedCuratedAssetsInMemory:(id)memory options:(id)options;
+ (id)requestCuratedAssetsInAssetCollection:(id)collection options:(id)options;
+ (id)fetchKeyAssetForEachSuggestion:(id)suggestion options:(id)options;
+ (id)fetchAssetsForBehavioralCurationWithOptions:(id)options;
+ (id)fetchKeyAssetByHighlightUUIDForHighlights:(id)highlights options:(id)options;
+ (id)fetchKeyAssetBySuggestionUUIDForSuggestions:(id)suggestions options:(id)options;
+ (id)fetchKeyAssetByMemoryUUIDForMemories:(id)memories options:(id)options;
+ (id)fetchSummaryCurationForHighlight:(id)highlight fetchOptions:(id)options allowsOnDemand:(BOOL)demand error:(id *)error;
+ (id)pl_managedAssetsForAssets:(id)assets;
+ (void)_computeFingerPrintsOfAsset:(id)asset completionHandler:(id /* block */)handler;
+ (id)fetchAssetsMatchingMasterFingerPrint:(id)print photoLibrary:(id)library;
+ (id)fetchAssetsMatchingAdjustedFingerPrint:(id)print photoLibrary:(id)library;
+ (unsigned long long)_extendedPropertyFetchHintsForPropertySets:(id)sets;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)sets;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)hints;
+ (id)corePropertiesToFetch;
+ (id)locationPropertiesToFetch;
+ (id)faceWorkerPropertiesToFetch;
+ (id)imageManagerPropertiesToFetch;
+ (id)_composePropertiesToFetchWithHint:(unsigned long long)hint;
+ (id)propertiesToFetchWithHint:(unsigned long long)hint;
+ (id)managedEntityName;
+ (id)fetchType;
+ (BOOL)managedObjectSupportsTrashedState;
+ (BOOL)managedObjectSupportsHiddenState;
+ (BOOL)managedObjectSupportsVisibilityState;
+ (BOOL)managedObjectSupportsDuplicateVisibilityState;
+ (BOOL)managedObjectSupportsBursts;
+ (BOOL)managedObjectSupportsSavedAssetType;
+ (BOOL)managedObjectSupportsMontage;
+ (BOOL)managedObjectSupportsAllowedForAnalysis;
+ (BOOL)managedObjectSupportsContributor;
+ (BOOL)managedObjectSupportsScreenshot;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)expression forKeyPath:(id)path;
+ (id)_transformMediaSubtypeReferences:(id)references inComparisonPredicate:(id)predicate options:(id)options;
+ (id)identifierCode;
+ (Class)propertySetClassForPropertySet:(id)set;
+ (id)propertySetAccessorsByPropertySet;
+ (id)_unfetchedPropertySetsForAssets:(id)assets fromPropertySets:(id)sets;
+ (void)_batchFetchAdditionalPropertySetsIfNeeded:(id)needed forAssets:(id)assets;
+ (id)quickClassificationFaceAdjustmentVersion;
+ (BOOL)_isLivePhotoWithPhotoIris:(BOOL)iris hasAdjustments:(BOOL)adjustments videoCpDuration:(long long)duration videoCPVisibility:(unsigned short)cpvisibility sourceType:(unsigned long long)type;
+ (long long)countOfAssetsWithLocationFromUUIDs:(id)uuids photoLibrary:(id)library;
+ (id)fetchAssetsGroupedByFaceUUIDForFaces:(id)faces;
+ (id)fetchAssetsGroupedByFaceUUIDForFaces:(id)faces fetchPropertySets:(id)sets;
+ (id)fetchAssetsContainingAllPersons:(id)persons options:(id)options;
+ (id)fetchAssetsInBoundingBoxWithTopLeftLocation:(id)location bottomRightLocation:(id)location options:(id)options;
+ (id)fetchAssetsInImportSessions:(id)sessions options:(id)options;
+ (id)fetchAssetsInAssetCollection:(id)collection options:(id)options;
+ (id)fetchAssetsWithoutOriginalsInAssetCollection:(id)collection options:(id)options;
+ (id)fetchAssetsWithMediaType:(long long)type options:(id)options;
+ (id)fetchAssetsWithLocalIdentifiers:(id)identifiers options:(id)options;
+ (id)fetchAssetsWithUUIDs:(id)uuids options:(id)options;
+ (id)fetchAssetsWithCloudIdentifiers:(id)identifiers options:(id)options;
+ (id)fetchAssetsWithALAssetURLs:(id)urls options:(id)options;
+ (id)fetchAssetsWithBurstIdentifier:(id)identifier options:(id)options;
+ (id)fetchKeyAssetsInAssetCollection:(id)collection options:(id)options;
+ (id)fetchAssetsWithOptions:(id)options;
+ (id)fetchGuestAssetsWithOptions:(id)options;
+ (id)fetchGuestAssetsInCollectionContainingAsset:(id)asset options:(id)options;
+ (id)fetchAssetsForPerson:(id)person faceCount:(unsigned long long)count options:(id)options;
+ (id)fetchAssetsForPerson:(id)person options:(id)options;
+ (id)fetchAssetsForPersons:(id)persons options:(id)options;
+ (id)fetchAssetsForFaces:(id)faces options:(id)options;
+ (id)fetchAssetsForFaceGroups:(id)groups options:(id)options;
+ (id)fetchKeyAssetForSceneIdentifier:(unsigned int)identifier aboveConfidenceThreshold:(double)threshold minimumSceneAnalysisVersion:(short)version options:(id)options;
+ (id)fetchAssetsWithObjectIDs:(id)ids options:(id)options;
+ (id)fetchAssetsInAssetCollections:(id)collections options:(id)options;
+ (id)fetchAssetsForKeywords:(id)keywords options:(id)options;
+ (id)fetchReferencedAssetsWithOptions:(id)options;
+ (id)fetchAllAssetsInYearRepresentedByYearHighlight:(id)highlight options:(id)options;
+ (id)fetchAssetsFromCameraSinceDate:(id)date options:(id)options;
+ (id)fetchAssetsInLibraryScope:(id)scope options:(id)options;
+ (id)fetchAssetsInLibraryScope:(id)scope fromAssets:(id)assets;
+ (id)fetchAssetsWithCurrentUserAsLibraryScopeContributor:(BOOL)contributor inLibraryScope:(id)scope options:(id)options;
+ (id)fetchAssetsInPreviewStateInLibraryScope:(id)scope options:(id)options;
+ (id)fetchAssetsInPreviewStateWithSuggestedByClientType:(short)type options:(id)options;
+ (id)fetchAssetsInPreviewStateWithPhotosOrPhotosDeferredSuggestedByClientTypeWithOptions:(id)options;
+ (id)fetchAssetsForSearchLookupIdentifier:(id)identifier options:(id)options;
+ (id)_descriptionForVariationSuggestionType:(unsigned long long)type;
+ (id)_descriptionForVariationSuggestionStates:(unsigned long long)states;
+ (id)descriptionForPlaybackStyle:(long long)style;
+ (id)descriptionForMediaType:(long long)type;
+ (id)_descriptionForMediaSubtype:(unsigned long long)subtype;
+ (id)descriptionForMediaSubtypes:(unsigned long long)subtypes;
+ (id)fetchPredicateFromComparisonPredicate:(id)predicate options:(id)options;
+ (id)originalUniformTypeIdentifierForAsset:(id)asset;
+ (BOOL)_isLibraryScopeExiting:(id)exiting;
+ (BOOL)_libraryScopeAssetContributedByCurrentUser:(id)user;
+ (BOOL)isOriginalKnownUnsupportedFormatForAsset:(id)asset failureInfo:(id *)info;
+ (BOOL)isOriginalVideoComplementKnownUnsupportedFormatForAsset:(id)asset failureInfo:(id *)info;

/* instance methods */
- (void)recordImageManagerMessageForRequestID:(int)id message:(id)message;
- (id)messagesForRecentImageManagerRequests;
- (id)objectReference;
- (unsigned long long)originalChoiceToFallbackForUnsupportRAW;
- (BOOL)shouldUseRAWResourceAsUnadjustedEditBase;
- (BOOL)shouldUseRAWResourceWithOriginalResourceChoice:(unsigned long long)choice;
- (id)originalUTI;
- (BOOL)isOriginalRaw;
- (BOOL)_canHandleAdjustmentData:(id)data withOptions:(id)options;
- (long long)_baseVersionForAdjustmentData:(id)data canHandleAdjustmentData:(BOOL)data;
- (id)_videoRequestOptionsForBaseVersion:(long long)version options:(id)options progressEstimateForVideoProgress:(id /* block */)progress;
- (id)_imageRequestOptionsForBaseVersion:(long long)version options:(id)options progressEstimateForImageProgress:(id /* block */)progress;
- (unsigned long long)requestContentEditingInputWithOptions:(id)options completionHandler:(id /* block */)handler;
- (void)cancelContentEditingInputRequest:(unsigned long long)request;
- (void)_requestRenderedVideoForVideoURL:(id)url adjustmentData:(id)data canHandleAdjustmentData:(BOOL)data resultHandler:(id /* block */)handler;
- (void)_renderTemporaryVideoForObjectBuilder:(id)builder resultHandler:(id /* block */)handler;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedCropForTargetSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedCropForTargetSize:(struct CGSize { double x0; double x1; })size withFocusRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })region;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedCropForTargetSize:(struct CGSize { double x0; double x1; })size withOcclusionRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })region andOutputCropScore:(double *)score;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedCropForTargetSize:(struct CGSize { double x0; double x1; })size withFocusRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })region andOutputCropScore:(double *)score;
- (id)pl_managedAssetFromPhotoLibrary:(id)library;
- (id)pl_managedAsset;
- (id)initWithFetchDictionary:(id)dictionary propertyHint:(unsigned long long)hint photoLibrary:(id)library;
- (void)_setupAuxiliaryIdentifierAttributesFromFetchDictionary:(id)dictionary;
- (void)_setupFileSystemAttributesFromFetchDictionary:(id)dictionary;
- (void)_setupLocationAndCreationDateAttributesFromFetchDictionary:(id)dictionary;
- (void)_setupTypeAndPersistenceStateAttributesFromFetchDictionary:(id)dictionary;
- (void)_setupGeometryAttributesFromFetchDictionary:(id)dictionary;
- (void)_setupAnalysisScoreAttributesFromFetchDictionary:(id)dictionary;
- (void)_setupUIStateAndTrashAttributesFromFetchDictionary:(id)dictionary;
- (void)_setupFaceAttributesFromFetchDictionary:(id)dictionary;
- (void)_setupKindSubtypeFromFetchDictionary:(id)dictionary;
- (void)_setupAdjustmentAndDeferredProcessingAttributesFromFetchDictionary:(id)dictionary;
- (void)_setupHDRAndDepthMediaSubtypesFromFetchDictionary:(id)dictionary;
- (void)_setupSpatialTypeFromFetchDictionary:(id)dictionary;
- (void)_setupReframeStatusFromFetchDictionary:(id)dictionary;
- (void)_setupBadgeAttributesFromFetchDictionary:(id)dictionary;
- (short)assetSource;
- (BOOL)isMediaSubtype:(unsigned long long)subtype;
- (BOOL)needsDeferredProcessing;
- (void)_createExtendedPropertySetsIfNeededWithPropertyHint:(unsigned long long)hint fetchDictionary:(id)dictionary;
- (void)_attachPropertyObjectOfClass:(Class)class preFetchedProperties:(id)properties;
- (id)_createPropertyObjectOfClass:(Class)class preFetchedProperties:(id)properties;
- (id)_createPropertyObjectOfClass:(Class)class;
- (id)_createCommentPropertyObject;
- (id)_createAnalysisStatePropertyObject;
- (id)_createKeywordPropertyObject;
- (id)originalMetadataProperties;
- (id)photosOneUpProperties;
- (id)localDateProperties;
- (id)photosInfoPanelExtendedProperties;
- (id)photosInfoPanelLocationProperties;
- (id)cameraCaptureDeviceProperties;
- (id)photoIrisProperties;
- (id)descriptionProperties;
- (id)commentProperties;
- (id)sceneAnalysisProperties;
- (id)assetAnalysisStateProperties;
- (id)assetUserActivityProperties;
- (id)adjustmentProperties;
- (id)curationProperties;
- (id)aestheticProperties;
- (id)mediaAnalysisProperties;
- (id)photoAnalysisWallpaperProperties;
- (id)characterRecognitionProperties;
- (id)visualSearchProperties;
- (id)importProperties;
- (id)sceneprintProperties;
- (id)destinationAssetCopyProperties;
- (id)keywordProperties;
- (id)gridMetadataProperties;
- (id)coarseLocationProperties;
- (id)libraryScopeProperties;
- (id)cloudLocalStateProperties;
- (id)montageProperties;
- (id)spatialMediaProperties;
- (id)locationDataProperties;
- (id)iconicScoreProperties;
- (id)sceneClassificationsOfTypes:(id)types;
- (id)_sceneClassificationsWithPredicate:(id)predicate;
- (int)analysisStateForWorkerType:(short)type outLastIgnoreDate:(id *)date outIgnoreUntilDate:(id *)date;
- (unsigned long long)variationSuggestionStatesForVariationType:(unsigned long long)type;
- (BOOL)isVariationSuggestionStatesUnknown;
- (id)_unfetchedPropertySetsFromPropertySets:(id)sets;
- (BOOL)isPrimaryImageFormat;
- (BOOL)isScreenRecording;
- (BOOL)isLocatedAtCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; })coordinates;
- (id)originalImageProperties;
- (id)originalAVAssetOrProxy;
- (id)originalAVAssetCommonMetadata;
- (id)originalCreationDateWithTimeZone:(id *)zone;
- (Class)changeRequestClass;
- (id)pl_photoLibrary;
- (id)assetsLibraryURL;
- (long long)originalImageOrientation;
- (struct CGSize { double x0; double x1; })originalImageSize;
- (BOOL)isOriginalSRGB;
- (id)debugFilename;
- (BOOL)hasLegacyAdjustments;
- (short)kind;
- (short)kindSubtype;
- (struct CGSize { double x0; double x1; })imageSize;
- (int)orientation;
- (id)pathForOriginalFile;
- (id)pathForAdjustmentFile;
- (id)pathForAdjustmentDataFile;
- (BOOL)isInFlight;
- (id)managedAssetForPhotoLibrary:(id)library;
- (void)generateLargeThumbnailFileIfNecessary;
- (unsigned short)bundleScope;
- (void)_initializeCachedLocation;
- (void)_invalidateCachedLocation;
- (id)_uncachedLocation;
- (id)cloudAssetGUID;
- (long long)cloudSharedAssetPlaceholderKind;
- (id)libraryID;
- (BOOL)isDeleted;
- (void)getMasterFingerPrintWithCompletionHandler:(id /* block */)handler;
- (void)getFingerPrintForAssetType:(long long)type withCompletionHandler:(id /* block */)handler;
- (BOOL)hasContentEqualTo:(id)to;
- (unsigned long long)contentChangeFromAsset:(id)asset;
- (BOOL)isIncompleteLivePhotoMissingVideoComplement;
- (BOOL)canPerformEditOperation:(long long)operation;
- (id)adjustmentVersion;
- (id)mainFileURL;
- (id)fileURLsForDiagnosticFiles;
- (id)fileURLForFullsizeRenderImage;
- (id)fileURLForVideoComplementFile;
- (id)__dictionaryWithContentsOfData:(id)data;
- (id)gatingDebugMetadata;
- (id)evaluationDebugMetadata;
- (id)adjustmentsDebugMetadata;
- (id)wallpaperCroppingDebugKeyValuePairs;
- (id)detailedDebugDescriptionInLibrary:(id)library;
- (id)descriptionForMediaAnalysisWithManagedAsset:(id)asset;
- (id)descriptionForAestheticsWithManagedAsset:(id)asset;
- (id)descriptionForPhotoAnanlysisWallpaperProeprtiesWithManagedAsset:(id)asset;
- (BOOL)isHidden;
- (BOOL)isFavorite;
- (BOOL)isSyncFailureHidden;
- (BOOL)isTrashed;
@end

#endif /* PHAsset_h */
