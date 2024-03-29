//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef _PFFetchPlanHeader_h
#define _PFFetchPlanHeader_h
@import Foundation;

#include "NSFetchRequest.h"
#include "NSManagedObjectContext.h"
#include "NSPersistentStore.h"
#include "NSSQLEntity.h"
#include "NSSQLModel.h"
#include "NSSQLRowCache.h"

@interface _PFFetchPlanHeader : NSObject {
  /* instance variables */
  NSFetchRequest *fetch_request;
  unsigned int requested_batch_size;
  NSPersistentStore *sql_core;
  NSSQLModel *sql_model;
  NSSQLEntity *statement_entity;
  NSManagedObjectContext *current_context;
  NSSQLRowCache *row_cache;
  undefined * entity_for_ek_funptr;
  struct { unsigned int x :1 principal_entity_has_subentities; unsigned int x :1 fetch_only_primary_keys; unsigned int x :3 fetch_results_style; unsigned int x :1 use_clean_memory; unsigned int x :26 _reserved; } flags;
}

@end

#endif /* _PFFetchPlanHeader_h */
