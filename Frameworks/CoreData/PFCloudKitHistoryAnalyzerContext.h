//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PFCloudKitHistoryAnalyzerContext_h
#define PFCloudKitHistoryAnalyzerContext_h
@import Foundation;

#include "PFHistoryAnalyzerContext.h"
#include "NSManagedObjectContext.h"
#include "NSSQLCore.h"

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface PFCloudKitHistoryAnalyzerContext : PFHistoryAnalyzerContext {
  /* instance variables */
  NSManagedObjectContext *_managedObjectContext;
  NSSet *_configuredEntityNames;
  NSMutableSet *_resetChangedObjectIDs;
  NSMutableDictionary *_entityIDToChangedPrimaryKeySet;
  NSSQLCore *_store;
}

/* instance methods */
- (id)initWithOptions:(id)options managedObjectContext:(id)context store:(id)store;
- (void)dealloc;
- (BOOL)processChange:(id)change error:(id *)error;
- (BOOL)resetStateForObjectID:(id)id error:(id *)error;
- (BOOL)reset:(id *)reset;
- (BOOL)finishProcessing:(id *)processing;
- (id)fetchSortedStates:(id *)states;
- (id)newAnalyzerStateForChange:(id)change error:(id *)error;
@end

#endif /* PFCloudKitHistoryAnalyzerContext_h */
