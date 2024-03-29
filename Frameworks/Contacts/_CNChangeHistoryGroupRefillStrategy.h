//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef _CNChangeHistoryGroupRefillStrategy_h
#define _CNChangeHistoryGroupRefillStrategy_h
@import Foundation;

#include "CNContactStore.h"
#include "CNEnumeratorRefillStrategy-Protocol.h"

@interface _CNChangeHistoryGroupRefillStrategy : NSObject<CNEnumeratorRefillStrategy>

@property (readonly, nonatomic) CNContactStore *contactStore;

/* instance methods */
- (id)initWithContactStore:(id)store;
- (id)batchesToRepresentObjects:(id)objects suggestedBatchSize:(unsigned long long)size;
- (id)objectsRepresentedByBatch:(id)batch;
- (id)fetchGroupsWithIdentifiers:(id)identifiers;
- (id)updateChanges:(id)changes withFetchedGroups:(id)groups;
@end

#endif /* _CNChangeHistoryGroupRefillStrategy_h */
