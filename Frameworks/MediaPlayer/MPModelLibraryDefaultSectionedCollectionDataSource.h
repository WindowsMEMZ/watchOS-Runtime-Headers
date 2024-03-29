//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPModelLibraryDefaultSectionedCollectionDataSource_h
#define MPModelLibraryDefaultSectionedCollectionDataSource_h
@import Foundation;

#include "MPLazySectionedCollectionDataSource-Protocol.h"
#include "MPMediaLibraryEntityTranslationContext.h"
#include "MPModelLibraryRequest.h"

@class NSDictionary, NSString;
@protocol struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult * x0; struct __shared_weak_count * x1; }, {map<long long, unsigned long, std::less<long long>, std::allocator<std::pair<const long long, unsigned long>>>="__tree_"{__tree<std::__value_type<long long, unsigned long>, std::__map_value_compare<long long, std::__value_type<long long, unsigned long>, std::less<long long>>, std::allocator<std::__value_type<long long, unsigned long>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long long, unsigned long>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::__map_value_compare<long long, std::__value_type<long long, unsigned long>, std::less<long long>>>="__value_"Q}}}, {shared_ptr<mlcore::EntityQueryResult>="__ptr_"^{EntityQueryResult}"__cntrl_"^{__shared_weak_count}}, {vector<long long, std::allocator<long long>>="__begin_"^q"__end_"^q"__end_cap_"{__compressed_pair<long long *, std::allocator<long long>>="__value_"^q}};

@interface MPModelLibraryDefaultSectionedCollectionDataSource : NSObject<MPLazySectionedCollectionDataSource> {
  /* instance variables */
  MPMediaLibraryEntityTranslationContext *_entityTranslationContext;
  struct vector<long long, std::allocator<long long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long long *, std::allocator<long long>> { long long *__value_; } __end_cap_; } _allowedItemPersistentIDs;
  struct map<long long, unsigned long, std::less<long long>, std::allocator<std::pair<const long long, unsigned long>>> { struct __tree<std::__value_type<long long, unsigned long>, std::__map_value_compare<long long, std::__value_type<long long, unsigned long>, std::less<long long>>, std::allocator<std::__value_type<long long, unsigned long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long long, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<long long, std::__value_type<long long, unsigned long>, std::less<long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } _allowedItemPersistentIDToItemQueryResultsIndexMap;
}

@property (retain, nonatomic) NSDictionary *indexPathToContainerUniqueIDMap;
@property (readonly, nonatomic) struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult * x0; struct __shared_weak_count * x1; } itemQueryResults;
@property (readonly, nonatomic) MPModelLibraryRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRequest:(id)request itemQueryResults:(struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult * x0; struct __shared_weak_count * x1; })results;
- (id)_stateDumpObject;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)index;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)section;
- (BOOL)hasSameContentAsDataSource:(id)source;
- (id)itemAtIndexPath:(id)path;
- (id)sectionIndexTitles;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })optionalSectionIndexTitlesRange;
- (long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)index;
- (id)identifiersForItemAtIndexPath:(id)path;
- (id)identifiersForSectionAtIndex:(long long)index;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)set;
- (BOOL)_usesSections;
- (void)_populateIndexMap;
- (unsigned long long)_adjustedGlobalIndexForIndexPath:(id)path;
- (BOOL)_allowedEntityIdentifiersContainsAllPersistentIDs;
- (id)_buildIndexPathToContainerUniqueIDMapFromItemQueryResults:(struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult * x0; struct __shared_weak_count * x1; })results;
@end

#endif /* MPModelLibraryDefaultSectionedCollectionDataSource_h */
