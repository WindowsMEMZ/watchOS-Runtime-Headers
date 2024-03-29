//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 12563.0.0.0.0
//
#ifndef ABSAddressBookContextStorage_h
#define ABSAddressBookContextStorage_h
@import Foundation;

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface ABSAddressBookContextStorage : NSObject

@property (readonly, nonatomic) NSMutableDictionary *deletedMemberships;
@property (readonly, nonatomic) NSMutableDictionary *addedMemberships;
@property (readonly, nonatomic) NSMutableDictionary *revertedRecords;
@property (nonatomic) BOOL hasUnsavedChanges;
@property (readonly, nonatomic) NSMutableDictionary *records;
@property (readonly, nonatomic) NSMutableDictionary *deletedRecords;
@property (readonly, nonatomic) NSMutableArray *insertedRecords;
@property (readonly, nonatomic) NSMutableDictionary *updatedRecords;
@property (readonly, nonatomic) NSArray *recordsWithPendingMembershipAdditions;
@property (readonly, nonatomic) NSArray *recordsWithPendingMembershipDeletions;

/* instance methods */
- (id)init;
- (BOOL)addRecord:(id)record;
- (BOOL)recordUpdated:(id)updated;
- (id)cnImplFetched:(id)fetched creationBlock:(id /* block */)block;
- (id)recordFetched:(id)fetched;
- (BOOL)deleteRecord:(id)record;
- (BOOL)addMemberRecord:(id)record toRecord:(id)record;
- (BOOL)removeMemberRecord:(id)record fromRecord:(id)record;
- (id)addedMembersForRecord:(id)record;
- (id)removedMembersForRecord:(id)record;
- (void)_resetIncludingLivingRecords:(BOOL)records;
- (void)commitPendingChanges;
- (void)revert;
@end

#endif /* ABSAddressBookContextStorage_h */
