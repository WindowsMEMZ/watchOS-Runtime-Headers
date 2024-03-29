//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDRacePreviousRoutePlugin_h
#define HDRacePreviousRoutePlugin_h
@import Foundation;

#include "HDDatabaseSchemaProvider-Protocol.h"
#include "HDPlugin-Protocol.h"
#include "HDSyncEntityProvider-Protocol.h"
#include "HDTaskServerClassProvider-Protocol.h"

@class NSString;

@interface HDRacePreviousRoutePlugin : NSObject<HDPlugin, HDDatabaseSchemaProvider, HDSyncEntityProvider, HDTaskServerClassProvider>

@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *schemaName;
@property (readonly, copy, nonatomic) NSString *syncSchemaIdentifier;

/* instance methods */
- (id)extensionForHealthDaemon:(id)daemon;
- (id)extensionForProfile:(id)profile;
- (long long)currentSchemaVersionForProtectionClass:(long long)class;
- (id)databaseEntitiesForProtectionClass:(long long)class;
- (void)registerMigrationStepsForProtectionClass:(long long)class migrator:(id)migrator;
- (id)orderedSyncEntities;
- (id)taskServerClasses;
@end

#endif /* HDRacePreviousRoutePlugin_h */
