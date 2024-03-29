//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKSyncEngineBatch_h
#define CKSyncEngineBatch_h
@import Foundation;

@class NSArray;

@interface CKSyncEngineBatch : NSObject

@property (copy) NSArray *savedRecords;
@property (copy) NSArray *deletedRecordIDs;
@property BOOL customBatch;
@property (readonly, copy) NSArray *recordsToSave;
@property (readonly, copy) NSArray *recordIDsToDelete;
@property BOOL atomic;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithRecordsToSave:(id)save recordIDsToDelete:(id)delete;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)public private:(BOOL)private shouldExpand:(BOOL)expand;
- (BOOL)isAtomic;
- (BOOL)isCustomBatch;
@end

#endif /* CKSyncEngineBatch_h */
