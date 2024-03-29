//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPMediaQueryCriteria_h
#define MPMediaQueryCriteria_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSMutableSet, NSSet;

@interface MPMediaQueryCriteria : NSObject<NSCopying> {
  /* instance variables */
  BOOL _useSections;
}

@property (readonly, nonatomic) BOOL specifiesPlaylistItems;
@property (readonly, nonatomic) BOOL excludesEntitiesWithBlankNames;
@property (copy, nonatomic) NSSet *filterPredicates;
@property (copy, nonatomic) NSSet *itemPropertiesToFetch;
@property (copy, nonatomic) NSSet *collectionPropertiesToFetch;
@property (nonatomic) long long groupingType;
@property (nonatomic) unsigned long long entityLimit;
@property (nonatomic) unsigned long long entityOrder;
@property (copy, nonatomic) NSArray *orderingProperties;
@property (nonatomic) BOOL ignoreSystemFilterPredicates;
@property (nonatomic) BOOL ignoreRestrictionsPredicates;
@property (nonatomic) BOOL includeNonLibraryEntities;
@property (nonatomic) BOOL includeEntitiesWithBlankNames;
@property (copy, nonatomic) NSDictionary *orderingDirectionMappings;

/* instance methods */
- (id)ML3OrderingTermsForMPOrderingProperties:(id)properties directionalityMapping:(id)mapping entityClass:(Class)class;
- (id)ML3OrderingTermsForGroupingType:(long long)type;
- (id)ML3ItemsQueryInLibrary:(id)library;
- (id)ML3ItemsQueryInLibrary:(id)library orderingTerms:(id)terms nameBlankProperty:(id)property;
- (id)ML3CollectionsQueryInLibrary:(id)library;
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)addFilterPredicate:(id)predicate;
- (void)addFilterPredicates:(id)predicates;
- (void)removeFilterPredicate:(id)predicate;
- (id)predicateForProperty:(id)property;
- (void)removePredicatesForProperty:(id)property;
@end

#endif /* MPMediaQueryCriteria_h */
