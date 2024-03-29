//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIExperimentDatabase_h
#define TRIExperimentDatabase_h
@import Foundation;

#include "TRIDatabase.h"

@interface TRIExperimentDatabase : NSObject {
  /* instance variables */
  TRIDatabase *_db;
}

/* instance methods */
- (id)init;
- (id)initWithDatabase:(id)database;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)block;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)block;
- (struct { unsigned long long x0; })addExperimentWithExperimentDeployment:(id)deployment environment:(int)environment type:(int)type status:(long long)status startDate:(id)date endDate:(id)date namespaces:(id)namespaces artifact:(id)artifact;
- (BOOL)setStatus:(long long)status forExperimentDeployment:(id)deployment usingTransaction:(id)transaction;
- (BOOL)setTreatmentId:(id)id forExperimentDeployment:(id)deployment usingTransaction:(id)transaction;
- (BOOL)setTreatmentURL:(id)url forExperimentDeployment:(id)deployment namespaceName:(id)name;
- (BOOL)setManuallyTargeted:(BOOL)targeted forExperimentDeployment:(id)deployment usingTransaction:(id)transaction;
- (BOOL)_enumerateExperimentRecordsMatchingWhereClause:(id)clause bind:(id /* block */)bind block:(id /* block */)block;
- (id)experimentRecordWithExperimentDeployment:(id)deployment;
- (id)activeExperimentRecordWithTreatmentId:(id)id;
- (BOOL)enumerateExperimentRecordsWithBlock:(id /* block */)block;
- (BOOL)enumerateExperimentRecordsMatchingExperimentId:(id)id block:(id /* block */)block;
- (BOOL)enumerateExperimentRecordsMatchingStatuses:(id)statuses block:(id /* block */)block;
- (BOOL)enumerateNamespaceRecordsForExperimentDeployment:(id)deployment usingTransaction:(id)transaction block:(id /* block */)block;
- (id)treatmentURLsForExperimentDeployment:(id)deployment usingTransaction:(id)transaction;
- (BOOL)namespacesAreAvailableForExperiment:(id)experiment startDate:(id)date endDate:(id)date namespaces:(id)namespaces;
- (struct { unsigned long long x0; })removeExperimentRecordWithExperimentDeployment:(id)deployment;
- (BOOL)hasRecordReferencingTreatmentId:(id)id withReferenceType:(unsigned int)type;
- (BOOL)enumerateActiveExperimentRecordsWithVisibility:(unsigned int)visibility block:(id /* block */)block;
@end

#endif /* TRIExperimentDatabase_h */
