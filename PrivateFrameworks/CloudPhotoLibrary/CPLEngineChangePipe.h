//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLEngineChangePipe_h
#define CPLEngineChangePipe_h
@import Foundation;

#include "CPLEngineStorage.h"
#include "CPLAbstractObject-Protocol.h"
#include "CPLPlatformObject.h"

@class NSString;

@interface CPLEngineChangePipe : CPLEngineStorage<CPLAbstractObject>

@property (readonly, nonatomic) unsigned long long countOfQueuedBatches;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (unsigned long long)scopeType;
- (BOOL)deleteRecordsForScopeIndex:(long long)index maxCount:(long long)count deletedCount:(long long *)count error:(id *)error;
- (BOOL)isEmpty;
- (BOOL)hasQueuedBatches;
- (BOOL)appendChangeBatch:(id)batch error:(id *)error;
- (BOOL)popChangeBatch:(id *)batch error:(id *)error;
- (id)nextBatch;
- (BOOL)popNextBatchWithError:(id *)error;
- (BOOL)hasSomeChangeWithScopedIdentifier:(id)identifier;
- (BOOL)hasSomeChangeInScopesWithIdentifiers:(id)identifiers;
- (BOOL)hasSomeChangeWithScopeFilter:(id)filter;
- (BOOL)deleteAllChangeBatchesWithError:(id *)error;
- (BOOL)deleteAllChangesWithScopeFilter:(id)filter error:(id *)error;
- (BOOL)compactChangeBatchesWithError:(id *)error;
- (id)allChangeBatches;
@end

#endif /* CPLEngineChangePipe_h */
