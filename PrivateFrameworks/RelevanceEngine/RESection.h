//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef RESection_h
#define RESection_h
@import Foundation;

#include "REElementQueue.h"
#include "REMLElementComparator.h"
#include "RESectionDelegate-Protocol.h"
#include "RESectionProperties-Protocol.h"
#include "_RESectionDescriptor.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface RESection : NSObject<RESectionDelegate, RESectionProperties> {
  /* instance variables */
  _RESectionDescriptor *_descriptor;
  REElementQueue *_queue;
  NSMutableSet *_hiddenElements;
  BOOL _allowsSubsections;
  NSMutableDictionary *_subsections;
  BOOL _performingBatch;
  NSMutableArray *_batchBlocks;
}

@property (copy, nonatomic) REMLElementComparator *comparator;
@property (readonly, nonatomic) NSString *name;
@property (weak, nonatomic) NSObject<RESectionDelegate> *delegate;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) long long visibleCount;
@property (nonatomic) long long maximumElements;
@property (readonly, nonatomic) NSArray *allElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *elements;

/* instance methods */
- (id)initWithSectionDescriptor:(id)descriptor comparator:(id)comparator;
- (long long)_compareElement:(id)element toElement:(id)element level:(unsigned long long)level;
- (id)_groupForIdentifier:(id)identifier;
- (id)_groupIdentifierForElement:(id)element;
- (id)_createSectionForGroup:(id)group;
- (void)_removeSection:(id)section;
- (void)addElement:(id)element forceHidden:(BOOL)hidden;
- (void)_addElement:(id)element forceHidden:(BOOL)hidden;
- (void)removeElementWithId:(id)id;
- (void)_removeElementWithId:(id)id;
- (void)updateElementWithId:(id)id withNewFeatureSet:(id)set forceHidden:(BOOL)hidden;
- (void)_updateElementWithId:(id)id withNewFeatureSet:(id)set forceHidden:(BOOL)hidden;
- (void)_performOrEnqueueBlock:(id /* block */)block;
- (void)performBatchUpdates:(id /* block */)updates;
- (BOOL)containsElementWithId:(id)id;
- (long long)indexOfElementWithId:(id)id;
- (id)elementIdAtIndex:(unsigned long long)index;
- (long long)_mappedIndexFromIndex:(long long)index;
- (void)sectionDidUpdateContentOrder:(id)order;
- (id)section:(id)section groupForIdentifier:(id)identifier;
@end

#endif /* RESection_h */
