//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIRolloutDatabase_h
#define TRIRolloutDatabase_h
@import Foundation;

#include "TRIDatabase.h"

@interface TRIRolloutDatabase : NSObject {
  /* instance variables */
  TRIDatabase *_db;
}

/* instance methods */
- (id)init;
- (id)initWithDatabase:(id)database;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)block;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)block;
- (BOOL)addNewRolloutWithRecord:(id)record;
- (BOOL)setStatus:(long long)status forDeployment:(id)deployment usingTransaction:(id)transaction;
- (BOOL)setActiveFactorPackSetId:(id)id activeTargetingRuleIndex:(id)index forDeployment:(id)deployment usingTransaction:(id)transaction;
- (BOOL)setTargetedFactorPackSetId:(id)id targetedTargetingRuleIndex:(id)index forDeployment:(id)deployment usingTransaction:(id)transaction;
- (id)_dataNoCopyFromStmt:(id)stmt columnName:(const char *)name;
- (BOOL)_enumerateRecordsMatchingWhereClause:(id)clause bind:(id /* block */)bind prependingWithClause:(id)clause usingTransaction:(id)transaction block:(id /* block */)block;
- (id)recordWithDeployment:(id)deployment usingTransaction:(id)transaction;
- (BOOL)enumerateRecordsUsingTransaction:(id)transaction block:(id /* block */)block;
- (BOOL)enumerateRecordsWithRolloutId:(id)id usingTransaction:(id)transaction block:(id /* block */)block;
- (BOOL)enumerateRecordsOverlappingNamespaces:(id)namespaces usingTransaction:(id)transaction block:(id /* block */)block;
- (BOOL)enumerateActiveRecordsWithVisibility:(unsigned int)visibility usingTransaction:(id)transaction block:(id /* block */)block;
- (struct { unsigned long long x0; })removeRecordWithDeployment:(id)deployment usingRefCounting:(BOOL)counting;
- (struct { unsigned long long x0; })removeRecordWithDeployment:(id)deployment;
- (BOOL)targetDeployment:(id)deployment toFactorPackSetId:(id)id targetingRuleIndex:(id)index deallocatedDeployments:(id)deployments usingTransaction:(id)transaction;
- (BOOL)activateDeployment:(id)deployment withFactorPackSetId:(id)id targetingRuleIndex:(id)index deactivatedDeployments:(id)deployments deactivatedFactorPackSetIds:(id)ids deactivationStateTransitions:(id)transitions usingTransaction:(id)transaction;
- (BOOL)deactivateDeployment:(id)deployment usingTransaction:(id)transaction;
- (BOOL)deactivateDeploymentsWithRolloutId:(id)id deactivatedDeployment:(id *)deployment deactivatedFactorPackSetId:(id *)id deactivatedRampId:(id *)id deactivationStateTransitions:(id)transitions usingTransaction:(id)transaction;
- (BOOL)hasRecordReferencingFactorPackSetId:(id)id withReferenceType:(unsigned int)type;
@end

#endif /* TRIRolloutDatabase_h */
