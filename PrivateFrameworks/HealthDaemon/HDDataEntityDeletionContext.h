//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDDataEntityDeletionContext_h
#define HDDataEntityDeletionContext_h
@import Foundation;

#include "HDDatabaseTransaction.h"
#include "HDProfile.h"

@class NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString;

@interface HDDataEntityDeletionContext : NSObject {
  /* instance variables */
  HDProfile *_profile;
  NSMutableDictionary *_deleteStatementsByClassName;
  NSMutableDictionary *_deletedObjectProvenanceIDsByOriginalProvenanceID;
  NSMutableDictionary *_localSourceIDsByOriginalSourceID;
  NSString *_startAndEndDatesSQL;
  NSString *_deleteInfoSQL;
}

@property (readonly, nonatomic) HDDatabaseTransaction *transaction;
@property (copy, nonatomic) id /* block */ recursiveDeleteAuthorizationBlock;
@property (nonatomic) BOOL insertDeletedObjects;
@property (nonatomic) BOOL preserveExactStartAndEndDates;
@property (nonatomic) BOOL callWillDeleteWithTransaction;
@property (readonly, nonatomic) NSNumber *lastInsertedDeletedObjectPersistentID;
@property (readonly, copy, nonatomic) NSSet *deletedObjectTypeSet;
@property (readonly, nonatomic) unsigned long long deletedObjectCount;

/* instance methods */
- (id)initWithProfile:(id)profile transaction:(id)transaction;
- (struct _HDObjectDeletionInfo { BOOL x0; long long x1; long long x2; long long x3; })deleteInfoForObjectWithUUID:(id)uuid error:(id *)error;
- (BOOL)deleteObjectWithPersistentID:(long long)id entityClass:(Class)class error:(id *)error;
- (BOOL)deleteObjectWithPersistentID:(long long)id objectUUID:(id)uuid entityClass:(Class)class objectType:(id)type provenanceIdentifier:(id)identifier deletionDate:(id)date deletedSampleIntervals:(id)intervals error:(id *)error;
- (void)finish;
@end

#endif /* HDDataEntityDeletionContext_h */
