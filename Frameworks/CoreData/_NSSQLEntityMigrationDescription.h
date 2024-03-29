//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef _NSSQLEntityMigrationDescription_h
#define _NSSQLEntityMigrationDescription_h
@import Foundation;

#include "NSEntityMapping.h"
#include "NSSQLEntity.h"

@class NSMutableArray, NSMutableDictionary;

@interface _NSSQLEntityMigrationDescription : NSObject {
  /* instance variables */
  NSEntityMapping *_entityMapping;
  NSMutableDictionary *_sqlValuesByColumnName;
  NSMutableDictionary *_sourceEntitiesByToOneWithNewEntityKey;
  NSSQLEntity *_dstEntity;
  NSSQLEntity *_srcEntity;
  int _migrationType;
  NSMutableArray *_addedManyToManys;
  NSMutableArray *_removedManyToManys;
  NSMutableArray *_transformedManyToManys;
  NSMutableArray *_processedTransforms;
  NSMutableArray *_pendingTransforms;
  BOOL _updateUsingCopy;
}

@property (readonly, nonatomic) NSSQLEntity *sourceEntity;

/* instance methods */
- (void)dealloc;
- (id)description;
- (void)validateCloudKitEntityMigration;
@end

#endif /* _NSSQLEntityMigrationDescription_h */
