//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAdditionalAssetAttributes_h
#define PLAdditionalAssetAttributes_h
@import Foundation;

#include "PLManagedObject.h"
#include "PLAssetDescription.h"
#include "PLCloudMasterMediaMetadata.h"
#include "PLEditedIPTCAttributes.h"
#include "PLManagedAsset.h"
#include "PLPTPTransferableAdditionalAssetAttributes-Protocol.h"
#include "PLSceneprint.h"
#include "PLSpatialOverCaptureInformation.h"
#include "PLUnmanagedAdjustment.h"

@class CLLocation, CPLScopedIdentifier, NSData, NSDate, NSNumber, NSSet, NSString;

@interface PLAdditionalAssetAttributes : PLManagedObject<PLPTPTransferableAdditionalAssetAttributes>

@property (readonly, copy, nonatomic) NSString *masterFingerPrint;
@property (readonly, copy, nonatomic) NSString *originatingAssetIdentifier;
@property (readonly, retain, nonatomic) NSNumber *embeddedThumbnailHeight;
@property (readonly, retain, nonatomic) NSNumber *embeddedThumbnailLength;
@property (readonly, retain, nonatomic) NSNumber *embeddedThumbnailOffset;
@property (readonly, retain, nonatomic) NSNumber *embeddedThumbnailWidth;
@property (readonly, retain, nonatomic) NSString *exifTimestampString;
@property (readonly, nonatomic) long long ptpTrashedState;
@property (readonly, retain, nonatomic) PLSpatialOverCaptureInformation *spatialOverCaptureInformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *longDescription;
@property (retain, nonatomic) NSData *mediaMetadataData;
@property (retain, @dynamic, nonatomic) PLSceneprint *sceneprint;
@property (@dynamic, nonatomic) short destinationAssetCopyState;
@property (readonly) PLSpatialOverCaptureInformation *spatialOverCaptureInformation;
@property (retain, nonatomic) CLLocation *_cachedShiftedLocation;
@property (retain, @dynamic, nonatomic) NSString *sourceAssetForDuplicationIdentifier;
@property (retain, @dynamic, nonatomic) NSString *sourceAssetForDuplicationScopeIdentifier;
@property (retain, @dynamic, nonatomic) NSString *importedByBundleIdentifier;
@property (retain, @dynamic, nonatomic) NSString *importedByDisplayName;
@property (retain, @dynamic, nonatomic) NSString *editorBundleID;
@property (retain, @dynamic, nonatomic) NSString *exifTimestampString;
@property (retain, @dynamic, nonatomic) NSNumber *embeddedThumbnailHeight;
@property (retain, @dynamic, nonatomic) NSNumber *embeddedThumbnailLength;
@property (retain, @dynamic, nonatomic) NSNumber *embeddedThumbnailOffset;
@property (retain, @dynamic, nonatomic) NSNumber *embeddedThumbnailWidth;
@property (retain, @dynamic, nonatomic) NSString *montage;
@property (retain, @dynamic, nonatomic) id originalAssetsUUID;
@property (retain, @dynamic, nonatomic) NSString *originalFilename;
@property (retain, @dynamic, nonatomic) NSNumber *originalFilesize;
@property (retain, @dynamic, nonatomic) NSData *originalHash;
@property (retain, @dynamic, nonatomic) NSNumber *originalHeight;
@property (retain, @dynamic, nonatomic) NSNumber *originalOrientation;
@property (retain, @dynamic, nonatomic) NSNumber *originalResourceChoice;
@property (retain, @dynamic, nonatomic) NSNumber *originalWidth;
@property (retain, @dynamic, nonatomic) NSString *publicGlobalUUID;
@property (retain, @dynamic, nonatomic) NSData *reverseLocationData;
@property (retain, @dynamic, nonatomic) NSNumber *reverseLocationDataIsValid;
@property (@dynamic, nonatomic) short dateCreatedSource;
@property (retain, @dynamic, nonatomic) NSString *timeZoneName;
@property (retain, @dynamic, nonatomic) NSNumber *timeZoneOffset;
@property (retain, @dynamic, nonatomic) NSNumber *inferredTimeZoneOffset;
@property (retain, @dynamic, nonatomic) NSString *title;
@property (retain, @dynamic, nonatomic) NSString *accessibilityDescription;
@property (retain, @dynamic, nonatomic) NSDate *lastUploadAttemptDate;
@property (retain, @dynamic, nonatomic) NSNumber *uploadAttempts;
@property (retain, @dynamic, nonatomic) PLManagedAsset *asset;
@property (retain, @dynamic, nonatomic) NSSet *keywords;
@property (retain, @dynamic, nonatomic) PLUnmanagedAdjustment *unmanagedAdjustment;
@property (retain, @dynamic, nonatomic) NSNumber *locationHash;
@property (retain, @dynamic, nonatomic) PLAssetDescription *assetDescription;
@property (retain, @dynamic, nonatomic) NSData *faceRegions;
@property (retain, @dynamic, nonatomic) NSData *objectSaliencyRectsData;
@property (retain, @dynamic, nonatomic) NSSet *personReferences;
@property (@dynamic, nonatomic) short cameraCaptureDevice;
@property (copy, @dynamic, nonatomic) NSString *originatingAssetIdentifier;
@property (copy, @dynamic, nonatomic) NSString *spatialOverCaptureGroupIdentifier;
@property (@dynamic, nonatomic) long long playCount;
@property (@dynamic, nonatomic) long long shareCount;
@property (@dynamic, nonatomic) long long viewCount;
@property (@dynamic, nonatomic) long long pendingPlayCount;
@property (@dynamic, nonatomic) long long pendingShareCount;
@property (@dynamic, nonatomic) long long pendingViewCount;
@property (copy, @dynamic, nonatomic) NSDate *lastViewedDate;
@property (@dynamic, nonatomic) BOOL allowedForAnalysis;
@property (@dynamic, nonatomic) unsigned long long cloudRecoveryState;
@property (@dynamic, nonatomic) short cloudStateRecoveryAttemptsCount;
@property (@dynamic, nonatomic) short importedBy;
@property (@dynamic, nonatomic) long long ptpTrashedState;
@property (@dynamic, nonatomic) short shareType;
@property (copy, @dynamic, nonatomic) NSString *shareOriginator;
@property (copy, @dynamic, nonatomic) NSString *deferredPhotoIdentifier;
@property (@dynamic, nonatomic) unsigned short deferredProcessingCandidateOptions;
@property (retain, @dynamic, nonatomic) PLCloudMasterMediaMetadata *mediaMetadata;
@property (retain, @dynamic, nonatomic) NSString *mediaMetadataType;
@property (retain, @dynamic, nonatomic) NSString *photoStreamTagId;
@property (retain, @dynamic, nonatomic) NSSet *sceneClassifications;
@property (retain, @dynamic, nonatomic) NSSet *temporalSceneClassifications;
@property (@dynamic, nonatomic) short sceneAnalysisVersion;
@property (retain, @dynamic, nonatomic) NSDate *sceneAnalysisTimestamp;
@property (@dynamic, nonatomic) BOOL sceneAnalysisIsFromPreview;
@property (retain, @dynamic, nonatomic) NSData *distanceIdentity;
@property (@dynamic, nonatomic) int cloudAvalanchePickType;
@property (@dynamic, nonatomic) short cloudKindSubtype;
@property (@dynamic, nonatomic) BOOL shiftedLocationIsValid;
@property (retain, @dynamic, nonatomic) NSData *shiftedLocationData;
@property (@dynamic, nonatomic) int videoCpDurationTimescale;
@property (@dynamic, nonatomic) long long videoCpDisplayValue;
@property (@dynamic, nonatomic) int videoCpDisplayTimescale;
@property (copy, @dynamic, nonatomic) NSString *masterFingerPrint;
@property (copy, @dynamic, nonatomic) NSString *adjustedFingerPrint;
@property (retain, @dynamic, nonatomic) NSData *placeAnnotationData;
@property (retain, nonatomic) CLLocation *shiftedLocation;
@property (@dynamic, nonatomic) unsigned long long variationSuggestionStates;
@property (retain, @dynamic, nonatomic) NSDate *alternateImportImageDate;
@property (retain, @dynamic, nonatomic) PLEditedIPTCAttributes *editedIPTCAttributes;
@property (@dynamic, nonatomic) double gpsHorizontalAccuracy;
@property (retain, @dynamic, nonatomic) NSString *syndicationIdentifier;
@property (@dynamic, nonatomic) unsigned short syndicationHistory;
@property (retain, @dynamic, nonatomic) CPLScopedIdentifier *sourceAssetForDuplicationCPLScopedIdentifier;
@property (@dynamic, nonatomic) short faceAnalysisVersion;
@property (retain, @dynamic, nonatomic) NSSet *libraryScopeAssetContributorsToUpdate;
@property (@dynamic, nonatomic) unsigned short duplicateDetectorPerceptualProcessingState;

/* class methods */
+ (id)descriptionForDestinationAssetCopyState:(short)state;
+ (id)newExtraDurationDataFromStillDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
+ (void)fromExtraDurationData:(id)data getStillDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)time videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)duration;
+ (id)listOfSyncedProperties;
+ (id)entityName;
+ (BOOL)shouldPersistImportedByDisplayName:(id)name;
+ (id)predicateToIncludeOnlyAllowedForAnalysisWithNoindex:(BOOL)noindex;
+ (id)predicateToIncludeOnlyAllowedForAnalysisAndProcessedToLatestSceneVersionWithNoindex:(BOOL)noindex;
+ (id)predicateToIncludeOnlyAllowedForAnalysisAndProcessedToSceneVersion:(id)version noindex:(BOOL)noindex;
+ (id)predicateToIncludeOnlyAllowedForAnalysisAndProcessedToLatestFaceVersionWithNoindex:(BOOL)noindex;
+ (id)predicateToIncludeOnlyAllowedForAnalysisAndProcessedToFaceVersion:(id)version noindex:(BOOL)noindex;

/* instance methods */
- (void)setSceneprintWithData:(id)data;
- (void)setDuplicateMatchingData:(id)data duplicateMatchingAlternateData:(id)data processingSucceeded:(BOOL)succeeded;
- (BOOL)hasDuplicateMatchingData;
- (BOOL)hasConsistentCloudState;
- (void)setCloudRecoveryStateFlag:(unsigned long long)flag;
- (void)removeCloudRecoveryStateFlag:(unsigned long long)flag;
- (BOOL)hasCloudRecoveryStateFlagSet:(unsigned long long)set;
- (void)resetCloudRecoveryState;
- (id)payloadID;
- (id)payloadForChangedKeys:(id)keys;
- (id)duplicateSortPropertyNames;
- (id)duplicateSortPropertyNamesSkip;
- (BOOL)supportsCloudUpload;
- (BOOL)isSyncableChange;
- (BOOL)isUserInterfaceChange;
- (void)truncatedOriginalCheckChangedValues:(id)values;
- (void)_updateInferredTimeZoneOffsetWithChangedValues:(id)values;
- (void)correctOriginalOrientationIfRequired;
- (void)willSave;
- (void)appendLibraryScopeAssetContributorsToUpdate:(id)update;
- (void)addDuplicateDetectorPerceptualProcessingStates:(unsigned short)states removeProcessingStates:(unsigned short)states;
- (BOOL)containsDuplicateDetectorPerceptualProcessingState:(unsigned short)state;
- (id)allSceneClassifications;
- (void)_setCachedShiftedLocation:(id)location;
@end

#endif /* PLAdditionalAssetAttributes_h */
