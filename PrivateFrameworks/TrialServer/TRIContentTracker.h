//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIContentTracker_h
#define TRIContentTracker_h
@import Foundation;

#include "TRIDatabase.h"

@interface TRIContentTracker : NSObject {
  /* instance variables */
  TRIDatabase *_db;
}

/* class methods */
+ (id)contentIdentifierForExperimentArtifactWithDeployment:(id)deployment;
+ (id)contentIdentifierForTreatmentArtifactWithTreatmentId:(id)id container:(id)container;
+ (id)contentIdentifierForRolloutArtifactWithDeployment:(id)deployment;
+ (id)contentIdentifierForBMLTArtifactWithDeployment:(id)deployment;
+ (id)contentIdentifierForFactorPackSetWithId:(id)id;
+ (id)decodeContentIdentifier:(id)identifier;

/* instance methods */
- (id)init;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)block;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)block;
- (id)initWithDatabase:(id)database;
- (BOOL)_addOrDropRefWithContentIdentifier:(id)identifier changeType:(unsigned long long)type;
- (BOOL)addRefWithContentIdentifier:(id)identifier;
- (BOOL)dropRefWithContentIdentifier:(id)identifier;
- (BOOL)refCountForContentIdentifier:(id)identifier refCount:(long long *)count;
- (BOOL)clearRefsWithContentIdentifier:(id)identifier;
- (BOOL)enumerateTrackedItemsWithBlock:(id /* block */)block;
@end

#endif /* TRIContentTracker_h */
