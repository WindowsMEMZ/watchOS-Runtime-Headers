//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSPersistentStoreCoordinatorMigrationContext_h
#define NSPersistentStoreCoordinatorMigrationContext_h
@import Foundation;

#include "NSPersistentStore.h"
#include "NSStagedMigrationManager.h"

@class NSDictionary, NSString, NSURL;

@interface NSPersistentStoreCoordinatorMigrationContext : NSObject

@property (readonly, nonatomic) NSURL *storeURL;
@property (readonly, nonatomic) NSString *storeType;
@property (retain, nonatomic) NSString *configurationName;
@property (readonly, nonatomic) NSDictionary *options;
@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic) BOOL forceMigration;
@property (retain, nonatomic) NSPersistentStore *migratedStore;
@property (retain, nonatomic) NSStagedMigrationManager *stagedMigrationManager;

/* instance methods */
- (id)initWithStoreURL:(id)url type:(id)type options:(id)options;
- (void)dealloc;
@end

#endif /* NSPersistentStoreCoordinatorMigrationContext_h */
