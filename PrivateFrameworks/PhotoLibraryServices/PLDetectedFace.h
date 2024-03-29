//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLDetectedFace_h
#define PLDetectedFace_h
@import Foundation;

#include "PLManagedObject.h"
#include "PLDetectedFaceGroup.h"
#include "PLDetectedFaceprint.h"
#include "PLFaceCrop.h"
#include "PLManagedAsset.h"
#include "PLPerson.h"
#include "PLSyncableDetectedFace-Protocol.h"
#include "PLSyncablePerson-Protocol.h"

@class NSDate, NSSet, NSString;

@interface PLDetectedFace : PLManagedObject<PLSyncableDetectedFace>

@property (retain, nonatomic) NSSet *rejectedPersons;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double bodyCenterX;
@property (nonatomic) double bodyCenterY;
@property (nonatomic) double size;
@property (nonatomic) double bodyWidth;
@property (nonatomic) double bodyHeight;
@property (nonatomic) int faceAlgorithmVersion;
@property (copy, nonatomic) NSDate *adjustmentVersion;
@property (retain, nonatomic) NSObject<PLSyncablePerson> *personForFace;
@property (retain, nonatomic) NSObject<PLSyncablePerson> *personBeingKeyFace;
@property (nonatomic) long long sourceWidth;
@property (nonatomic) long long sourceHeight;
@property (readonly, nonatomic) BOOL isTrainingFace;
@property (nonatomic) BOOL manual;
@property (nonatomic) BOOL hidden;
@property (nonatomic) int nameSource;
@property (nonatomic) int cloudNameSource;
@property (nonatomic) int trainingType;
@property (nonatomic) short detectionType;
@property (nonatomic) short cloudLocalState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain, nonatomic) id localID;
@property (@dynamic, nonatomic) int nameSource;
@property (@dynamic, nonatomic) int cloudNameSource;
@property (readonly, @dynamic, nonatomic) PLManagedAsset *assetForTorso;
@property (readonly, @dynamic, nonatomic) PLPerson *personForTorso;
@property (retain, @dynamic, nonatomic) PLManagedAsset *assetForFace;
@property (retain, @dynamic, nonatomic) PLManagedAsset *assetForTemporalDetectedFaces;
@property (retain, @dynamic, nonatomic) PLFaceCrop *faceCrop;
@property (retain, @dynamic, nonatomic) PLDetectedFaceGroup *faceGroup;
@property (retain, @dynamic, nonatomic) PLDetectedFaceprint *faceprint;
@property (retain, @dynamic, nonatomic) PLPerson *personForFace;
@property (retain, @dynamic, nonatomic) PLPerson *personForTemporalDetectedFaces;
@property (retain, @dynamic, nonatomic) PLPerson *personBeingKeyFace;
@property (retain, @dynamic, nonatomic) NSSet *rejectedPersons;
@property (retain, @dynamic, nonatomic) PLDetectedFaceGroup *faceGroupBeingKeyFace;
@property (retain, @dynamic, nonatomic) NSString *uuid;
@property (@dynamic, nonatomic) long long sourceWidth;
@property (@dynamic, nonatomic) long long sourceHeight;
@property (@dynamic, nonatomic) double centerX;
@property (@dynamic, nonatomic) double centerY;
@property (@dynamic, nonatomic) double size;
@property (@dynamic, nonatomic) double bodyCenterX;
@property (@dynamic, nonatomic) double bodyCenterY;
@property (@dynamic, nonatomic) double bodyWidth;
@property (@dynamic, nonatomic) double bodyHeight;
@property (@dynamic, nonatomic) short detectionType;
@property (@dynamic, nonatomic) double roll;
@property (@dynamic, nonatomic) BOOL hidden;
@property (@dynamic, nonatomic) BOOL isInTrash;
@property (@dynamic, nonatomic) BOOL manual;
@property (@dynamic, nonatomic) BOOL hasSmile;
@property (@dynamic, nonatomic) double blurScore;
@property (@dynamic, nonatomic) BOOL isLeftEyeClosed;
@property (@dynamic, nonatomic) BOOL isRightEyeClosed;
@property (retain, @dynamic, nonatomic) NSString *masterIdentifier;
@property (@dynamic, nonatomic) short confirmedFaceCropGenerationState;
@property (retain, @dynamic, nonatomic) NSSet *rejectedPersonsNeedingFaceCrops;
@property (retain, @dynamic, nonatomic) NSSet *clusterRejectedPersons;
@property (@dynamic, nonatomic) int trainingType;
@property (@dynamic, nonatomic) short vipModelType;
@property (retain, @dynamic, nonatomic) NSDate *adjustmentVersion;
@property (@dynamic, nonatomic) double poseYaw;
@property (@dynamic, nonatomic) int faceAlgorithmVersion;
@property (@dynamic, nonatomic) int clusterSequenceNumber;
@property (@dynamic, nonatomic) int qualityMeasure;
@property (@dynamic, nonatomic) double quality;
@property (@dynamic, nonatomic) long long vuObservationID;
@property (@dynamic, nonatomic) short cloudLocalState;
@property (readonly, @dynamic, nonatomic) BOOL assetVisible;
@property (nonatomic) int effectiveNameSource;
@property (@dynamic, nonatomic) unsigned short ageType;
@property (@dynamic, nonatomic) unsigned short genderType;
@property (@dynamic, nonatomic) unsigned short eyesState;
@property (@dynamic, nonatomic) unsigned short smileType;
@property (@dynamic, nonatomic) unsigned short facialHairType;
@property (@dynamic, nonatomic) unsigned short hairColorType;
@property (@dynamic, nonatomic) unsigned short glassesType;
@property (@dynamic, nonatomic) unsigned short eyeMakeupType;
@property (@dynamic, nonatomic) unsigned short lipMakeupType;
@property (retain, @dynamic, nonatomic) NSString *groupingIdentifier;
@property (retain, @dynamic, nonatomic) NSSet *detectionTraits;
@property (@dynamic, nonatomic) unsigned short faceExpressionType;
@property (@dynamic, nonatomic) unsigned short headgearType;
@property (@dynamic, nonatomic) unsigned short hairType;
@property (@dynamic, nonatomic) unsigned short poseType;
@property (@dynamic, nonatomic) unsigned short skintoneType;
@property (@dynamic, nonatomic) unsigned short ethnicityType;
@property (@dynamic, nonatomic) BOOL hasFaceMask;
@property (@dynamic, nonatomic) unsigned short gazeType;
@property (@dynamic, nonatomic) double gazeCenterX;
@property (@dynamic, nonatomic) double gazeCenterY;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } gazeRect;
@property (@dynamic, nonatomic) float gazeAngle;
@property (@dynamic, nonatomic) float gazeConfidence;
@property (@dynamic, nonatomic) double startTime;
@property (@dynamic, nonatomic) double duration;
@property (retain, @dynamic, nonatomic) NSString *gazeRectString;

/* class methods */
+ (id)findExistingFaceMatchingDimension:(id)dimension inFaces:(id)faces ignoreSourceAssetDimensions:(BOOL)dimensions;
+ (id)_facesMatchingPredicate:(id)predicate limit:(unsigned long long)limit inPhotoLibrary:(id)library;
+ (id)syncableFacesPredicate;
+ (id)_syncableFacesToUploadInitiallyPredicate;
+ (id)syncableFacesToUploadInitiallyInLibrary:(id)library limit:(unsigned long long)limit;
+ (long long)resetAssetForAllSyncableFacesInManagedObjectContext:(id)context error:(id *)error;
+ (void)resetCloudStateInPhotoLibrary:(id)library;
+ (void)enumerateAssetUUIDsForSearchIndexingWithDetectedFaceUUIDs:(id)uuids managedObjectContext:(id)context assetUUIDHandler:(id /* block */)uuidhandler;
+ (id)entityName;
+ (id)detectedFaceWithUUID:(id)uuid inManagedObjectContext:(id)context;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cgRectFromGazeRectString:(id)string;
+ (id)stringFromGazeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
+ (void)batchFetchDetectedFacesByAssetUUIDWithAssetUUIDs:(id)uuids predicate:(id)predicate fetchType:(long long)type library:(id)library completion:(id /* block */)completion;
+ (void)batchFetchKeyFaceByPersonObjectIDWithPersonObjectIDs:(id)ids library:(id)library completion:(id /* block */)completion;
+ (id)predicatesToExcludeNonVisibleFaces;
+ (id)predicatesForFacesNeedingFaceCropGeneration;
+ (id)predicateForArchival;
+ (id)predicateForFaceCountTrigger;
+ (id)predicateForIncludedDetectionTypes:(id)types;
+ (id)predicateToExcludeBodyOnlyDetection;
+ (id)predicateToExcludeFaceDetection;
+ (id)predicateForFetchType:(long long)type;
+ (id)assetIDsWithAllPersonsFromPersonIDs:(id)ids inContext:(id)context;

/* instance methods */
- (BOOL)supportsCloudUpload;
- (BOOL)isSyncableChange;
- (id)cplFullRecord;
- (id)syncDescription;
- (long long)photosFaceRepresentationSourceWidth;
- (long long)photosFaceRepresentationSourceHeight;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationCenterY;
- (double)photosFaceRepresentationSize;
- (double)photosFaceRepresentationBodyCenterX;
- (double)photosFaceRepresentationBodyCenterY;
- (double)photosFaceRepresentationBodyHeight;
- (double)photosFaceRepresentationBodyWidth;
- (double)photosFaceRepresentationBlurScore;
- (BOOL)photosFaceRepresentationHasSmile;
- (BOOL)photosFaceRepresentationIsLeftEyeClosed;
- (BOOL)photosFaceRepresentationIsRightEyeClosed;
- (long long)photosFaceRepresentationQualityMeasure;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (id)photosFaceRepresentationLocalIdentifier;
- (double)photosFaceRepresentationRoll;
- (double)photosFaceRepresentationQuality;
- (BOOL)isValidForJournalPersistence;
- (id)payloadID;
- (id)payloadForChangedKeys:(id)keys;
- (id)payloadIDForTombstone:(id)tombstone;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)keys;
- (void)awakeFromInsert;
- (void)delete;
- (BOOL)validateForInsert:(id *)insert;
- (BOOL)validateForUpdate:(id *)update;
- (BOOL)_validateForOperation:(id)operation error:(id *)error;
- (void)willSave;
- (void)_touchPersonForPersistenceIfNeeded;
- (void)_updateFaceGroupIfNeeded;
- (void)removeAllPersonRelationships;
- (void)fixPersonRelationshipsForFaceTorsoOrTemporal;
- (void)fixAssetRelationshipsForFaceTorsoOrTemporal;
- (void)_verifyAssetRelationship;
- (void)_fixUpTemporalRelationships;
- (void)_verifyTorsoRelationships;
- (BOOL)isTorsoOnly;
- (BOOL)_isFaceOnly;
- (BOOL)_isFaceAndTorso;
- (BOOL)_isNeitherFaceNorTorso;
- (BOOL)_isTemporalFace;
- (BOOL)_startTimeAndDurationAreValid;
- (void)removeFaceprint;
- (id)debugLogDescription;
- (id)namingDescription;
- (void)addRejectedPerson:(id)person;
- (void)addRejectedPersonNeedingFaceCrops:(id)crops;
- (void)addClusterRejectedPerson:(id)person;
- (id)associatedPersonForFaceOrTorso:(BOOL)torso orTemporal:(BOOL)temporal;
- (void)setAssociatedPerson:(id)person;
- (id)associatedAssetForFaceOrTorso:(BOOL)torso orTemporal:(BOOL)temporal;
- (void)setAssociatedAsset:(id)asset;
- (void)migration_setAssetForTorso:(id)torso;
- (void)migration_setPersonForTorso:(id)torso;
@end

#endif /* PLDetectedFace_h */
