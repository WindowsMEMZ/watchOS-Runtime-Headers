//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLModelMigration_h
#define PLModelMigration_h
@import Foundation;

#include "NSProgressReporting-Protocol.h"
#include "PLModelMigrationContext-Protocol.h"
#include "PLModelMigratorLog.h"

@class NSMutableArray, NSProgress, NSString;

@interface PLModelMigration : NSObject<NSProgressReporting> {
  /* instance variables */
  BOOL _hadStagedMigration;
  NSMutableArray *_actions;
  NSMutableArray *_actionsStaged;
  NSMutableArray *_actionsPreRepair;
  NSMutableArray *_actionsPostRepair;
  unsigned long long _actionProgressPortion;
  unsigned long long _actionProgressPortionPreRepair;
  unsigned long long _actionProgressPortionPostRepair;
  NSObject<PLModelMigrationContext> *_internalMigrationContext;
}

@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) PLModelMigratorLog *logger;
@property (retain, nonatomic) NSString *migrationUUID;
@property (readonly) BOOL allowRebuild;
@property (readonly) BOOL didCreateSqliteErrorIndicator;
@property (retain) id legacyMigrationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (int)currentModelVersion;

/* instance methods */
- (id)initWithMigrationContext:(id)context logger:(id)logger;
- (id)analyticsEventManager;
- (id)pathManager;
- (id)migrationContext;
- (void)actionRegistration;
- (void)registerActionClass:(Class)class onCondition:(BOOL)condition;
- (void)registerStagedActionClass:(Class)class onCondition:(BOOL)condition;
- (void)registerPreRepairActionClass:(Class)class onCondition:(BOOL)condition;
- (void)registerPostRepairActionClass:(Class)class onCondition:(BOOL)condition;
- (void)_registerActionClass:(Class)class actionsContainer:(id)container progressPortion:(unsigned long long *)portion;
- (void)resetBackgroundActionClass:(Class)class onCondition:(BOOL)condition;
- (long long)migrateWithError:(id *)error;
- (long long)setupWithError:(id *)error;
- (long long)migrateStagedMigrationWithAutoMigrationOptions:(id)options currentStoreVersion:(id)version error:(id *)error;
- (long long)migrateSchemaMigrationWithAutoMigrationOptions:(id)options currentStoreVersion:(id)version error:(id *)error;
- (long long)migratePostProcessingWithProgressUnitCount:(unsigned long long)count error:(id *)error;
- (long long)migratePostProcessingWithActions:(id)actions migrationActionType:(long long)type progress:(id)progress progressUnitCount:(unsigned long long)count error:(id *)error;
- (id)addStoreWithCoordinator:(id)coordinator migrationUUID:(id)uuid storeURL:(id)url options:(id)options description:(id)description fromVersion:(int)version toVersion:(int)version progress:(id)progress progressUnitCount:(unsigned long long)count error:(id *)error;
- (id)_nextRequiredStagedMigrationVersionAfterVersion:(id)version;
- (id)_managedObjectModelForLightweightMigrationStageWithURL:(id)url;
- (id)_stagedManagedObjectModelURLWithStageVersion:(id)version;
- (long long)runMigrationAction:(id)action withCoordinator:(id)coordinator error:(id *)error;
- (BOOL)isMigrationCancelledWithError:(id *)error;
@end

#endif /* PLModelMigration_h */
