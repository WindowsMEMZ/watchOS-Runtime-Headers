//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLBackgroundMigrationContext_h
#define PLBackgroundMigrationContext_h
@import Foundation;

#include "PLDatabaseContext.h"
#include "PLModelMigrationContext-Protocol.h"
#include "PLModelMigrationHistory.h"

@class NSString, PLCoreAnalyticsEventManager, PLLazyObject, PLPhotoLibraryPathManager;

@interface PLBackgroundMigrationContext : NSObject<PLModelMigrationContext> {
  /* instance variables */
  PLLazyObject *_lazyModelMigrationHistory;
}

@property (retain, nonatomic) PLCoreAnalyticsEventManager *analyticsEventManager;
@property (retain, nonatomic) PLDatabaseContext *databaseContext;
@property (retain, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property unsigned int policy;
@property long long libraryIdentifier;
@property (readonly) PLModelMigrationHistory *modelMigrationHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPathManager:(id)manager databaseContext:(id)context analyticsEventManager:(id)manager;
- (void)dealloc;
- (id)newModelMigrationHistory;
@end

#endif /* PLBackgroundMigrationContext_h */
