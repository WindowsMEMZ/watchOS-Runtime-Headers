//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPSectionedIdentifierList_h
#define MPSectionedIdentifierList_h
@import Foundation;

#include "MPSectionedIdentifierListAnnotationDelegate-Protocol.h"
#include "MPSectionedIdentifierListDelegate-Protocol.h"
#include "MPSectionedIdentifierListEntry.h"
#include "NSObject-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_MPSectionedIdentifierListEncodableNextEntriesProviding-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface MPSectionedIdentifierList : NSObject<_MPSectionedIdentifierListEncodableNextEntriesProviding, NSSecureCoding, NSObject> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_accessQueue;
  NSMutableArray *_startEntries;
  MPSectionedIdentifierListEntry *_endEntry;
  NSMutableDictionary *_sectionHeadEntryMap;
  NSMutableDictionary *_sectionTransactionCallouts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *sectionDataSources;
@property (weak, nonatomic) NSObject<MPSectionedIdentifierListAnnotationDelegate> *annotationDelegate;
@property (readonly, nonatomic) NSString *identifier;
@property (weak, nonatomic) NSObject<MPSectionedIdentifierListDelegate> *delegate;
@property (readonly, nonatomic) long long itemCount;
@property (nonatomic) BOOL automaticallyReversesNonDestructiveDataSourceEdits;
@property (readonly, nonatomic) NSSet *allSectionIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (void)_performWithoutRequiringExclusivity:(id /* block */)exclusivity;

/* instance methods */
- (id)encodableNextEntriesWithExclusiveAccessToken:(id)token;
- (id)_debugDescriptionWithEnumerator:(id)enumerator lengths:(struct { int x0; int x1; int x2; int x3; } *)lengths;
- (id)init;
- (id)initWithIdentifier:(id)identifier;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)_beforeInitWithCoder:(id)coder;
- (void)_stitchWithPreviousEntry:(id)entry list:(id)list cloneIndex:(id)index;
- (void)_stitchLastItemEntryToHeadEntry:(id)entry branchList:(id)list;
- (void)_stitchPreviousEntry:(id)entry toEntry:(id)entry cloneIndex:(id)index;
- (void)encodeWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder withExclusiveAccessToken:(id)token;
- (id)_encodeEntry:(id)entry withExclusiveAccessToken:(id)token;
- (void)replaceDataSource:(id)source forSection:(id)section completion:(id /* block */)completion;
- (void)performWithExclusiveAccess:(id /* block */)access;
- (id)performWithExclusiveAccessAndReturnObject:(id /* block */)object;
- (BOOL)performWithExclusiveAccessAndReturnBOOL:(id /* block */)bool;
- (long long)performWithExclusiveAccessAndReturnInteger:(id /* block */)integer;
- (id)enumeratorWithOptions:(unsigned long long)options;
- (id)enumeratorWithOptions:(unsigned long long)options startPosition:(id)position endPosition:(id)position;
- (id)enumeratorWithOptions:(unsigned long long)options startPosition:(id)position endPosition:(id)position withExclusiveAccessToken:(id)token;
- (void)addDataSourceAtStart:(id)start section:(id)section completion:(id /* block */)completion;
- (void)addDataSource:(id)source section:(id)section afterHeadOfSection:(id)section completion:(id /* block */)completion;
- (void)addDataSource:(id)source section:(id)section afterItem:(id)item inSection:(id)section completion:(id /* block */)completion;
- (void)addDataSource:(id)source section:(id)section afterTailOfSection:(id)section completion:(id /* block */)completion;
- (void)addDataSource:(id)source section:(id)section beforeTailOfSection:(id)section completion:(id /* block */)completion;
- (void)addDataSourceAtEnd:(id)end section:(id)section completion:(id /* block */)completion;
- (id)firstSectionMatching:(id /* block */)matching containingItem:(id)item inSection:(id)section;
- (BOOL)hasItem:(id)item inSection:(id)section;
- (BOOL)hasSection:(id)section;
- (BOOL)isDeletedItem:(id)item inSection:(id)section;
- (void)moveItemToStart:(id)start fromSection:(id)section;
- (void)moveItemToEnd:(id)end fromSection:(id)section;
- (void)moveItem:(id)item fromSection:(id)section afterHeadOfSection:(id)section;
- (void)moveItem:(id)item fromSection:(id)section afterItem:(id)item inSection:(id)section;
- (void)moveItem:(id)item fromSection:(id)section afterTailOfSection:(id)section;
- (void)removeItem:(id)item fromSection:(id)section;
- (void)dataSourceInsertItemsAtHead:(id)head inSection:(id)section;
- (void)dataSourceInsertItems:(id)items afterItem:(id)item inSection:(id)section;
- (void)dataSourceInsertItemsAtTail:(id)tail inSection:(id)section;
- (void)dataSourceMoveItemToHead:(id)head inSection:(id)section;
- (void)dataSourceMoveItem:(id)item afterItem:(id)item inSection:(id)section;
- (void)dataSourceMoveItemToTail:(id)tail inSection:(id)section;
- (void)dataSourceRemoveItems:(id)items fromSection:(id)section;
- (void)dataSourceReloadItems:(id)items inSection:(id)section;
- (void)dataSourceUpdateSection:(id)section;
- (void)dataSourceBeginTransactionForSection:(id)section;
- (void)dataSourceEndTransactionForSection:(id)section;
- (void)_addBranchToEntry:(id)entry entries:(id)entries withExclusiveAccessToken:(id)token;
- (id)_dataSourceInsertItems:(id)items fromSection:(id)section afterEntry:(id)entry withExclusiveAccessToken:(id)token;
- (id)_dataSourceMoveItem:(id)item inSection:(id)section afterEntry:(id)entry withExclusiveAccessToken:(id)token;
- (id)_entryForPosition:(id)position withExclusiveAccessToken:(id)token;
- (void)_insertDataSourceHead:(id)head afterEntry:(id)entry withExclusiveAccessToken:(id)token;
- (void)_insertDataSource:(id)source forSection:(id)section afterEntry:(id)entry withExclusiveAccessToken:(id)token;
- (id)_itemEntry:(id)entry sectionIdentifier:(id)identifier withExclusiveAccessToken:(id)token;
- (long long)_itemCountWithExclusiveAccessToken:(id)token;
- (void)_loadDataSource:(id)source forSection:(id)section completion:(id /* block */)completion;
- (id)_sectionDataSources;
- (id)_startEntriesWithExclusiveAccessToken:(id)token;
- (id)_tailEntryForSectionIdentifier:(id)identifier withExclusiveAccessToken:(id)token;
- (id)_sectionHeadEntryMapWithExclusiveAccessToken:(id)token;
- (id)_endEntryWithExclusiveAccessToken:(id)token;
- (void)_enumerator:(id)_enumerator didEncounterEntry:(id)entry withExclusiveAccessToken:(id)token;
- (void)_reverseEnumeratorWillStartAtEnd:(id)end withExclusiveAccessToken:(id)token;
- (void)_performDelegateCalloutForSection:(id)section block:(id /* block */)block;
@end

#endif /* MPSectionedIdentifierList_h */
