//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef _NSSQLTableMigrationDescription_h
#define _NSSQLTableMigrationDescription_h
@import Foundation;

#include "NSSQLEntity.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber;

@interface _NSSQLTableMigrationDescription : NSObject {
  /* instance variables */
  NSSQLEntity *_sourceRootEntity;
  int _migrationType;
  NSMutableArray *_addedEntityMigrations;
  NSMutableArray *_removedEntityMigrations;
  NSMutableArray *_copiedEntityMigrations;
  NSMutableArray *_transformedEntityMigrations;
  NSMutableDictionary *_migrationByEntity;
  NSMutableArray *_addedManyToManys;
  NSMutableArray *_removedManyToManys;
  NSMutableArray *_transformedManyToManys;
  NSMutableDictionary *_tempTableNames;
  NSNumber *_hasComplexSchemaTransformations;
  NSMutableSet *_addedColumnSet;
  NSMutableSet *_renamedTableSet;
  NSMutableSet *_renamedColumnSet;
  NSMutableSet *_renamedMTMSet;
  NSMutableSet *_raisedColumnSet;
  NSMutableSet *_droppedEntitySet;
  NSMutableSet *_collapsedEntitySet;
  NSMutableSet *_columnsUpgradedToMandatory;
  NSMutableSet *_delayedDropColumnSet;
}

@property (readonly, nonatomic) NSSQLEntity *rootEntity;

/* instance methods */
- (void)dealloc;
- (id)description;
@end

#endif /* _NSSQLTableMigrationDescription_h */
