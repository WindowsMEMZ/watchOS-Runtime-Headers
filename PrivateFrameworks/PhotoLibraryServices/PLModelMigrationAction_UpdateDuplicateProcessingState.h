//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLModelMigrationAction_UpdateDuplicateProcessingState_h
#define PLModelMigrationAction_UpdateDuplicateProcessingState_h
@import Foundation;

#include "PLModelMigrationAction.h"
#include "PLModelMigrationAction-Protocol.h"

@class NSProgress, NSString;

@interface PLModelMigrationAction_UpdateDuplicateProcessingState : PLModelMigrationAction<PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)actionProgressWeight;

/* instance methods */
- (long long)performActionWithManagedObjectContext:(id)context error:(id *)error;
- (id)fetchRequestForAudioVideo;
- (id)fetchRequestForScreenshot;
- (id)fetchRequestForAnimated;
- (id)fetchRequestForExposureScore;
- (id)fetchRequestForDocument;
- (long long)processAssetStateMap:(id)map pendingParentUnitCount:(long long)count context:(id)context error:(id *)error;
- (long long)updateSceneClassificationDuplicateProcessingStateWithProcessingState:(unsigned short)state pendingParentUnitCount:(long long)count assetProcessingStateMap:(id)map context:(id)context request:(id)request error:(id *)error;
- (long long)updateDuplicateProcessingStateWithProcessingState:(unsigned short)state pendingParentUnitCount:(long long)count assetProcessingStateMap:(id)map context:(id)context request:(id)request error:(id *)error;
@end

#endif /* PLModelMigrationAction_UpdateDuplicateProcessingState_h */
