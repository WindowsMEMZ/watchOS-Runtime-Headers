//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSSpecifierUpdates_h
#define PSSpecifierUpdates_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "PSSpecifierGroupIndex.h"
#include "PSSpecifierUpdateContext.h"

@class NSArray, NSMutableArray;

@interface PSSpecifierUpdates : NSObject<NSCopying> {
  /* instance variables */
  BOOL _wantsDebugCallbacks;
}

@property (readonly, copy, nonatomic) NSArray *originalSpecifiers;
@property (readonly, copy, nonatomic) NSArray *currentSpecifiers;
@property (readonly, copy, nonatomic) NSArray *updates;
@property (copy, nonatomic) PSSpecifierUpdateContext *context;
@property (readonly, copy, nonatomic) PSSpecifierGroupIndex *groupIndex;

/* class methods */
+ (id)updatesWithSpecifiers:(id)specifiers;
+ (Class)_groupIndexClass;
+ (BOOL)_wantsDebugCallbacks;
+ (void)_assertSpecifierIDsAreUnique:(id)unique;
+ (id)updatesByDiffingSpecifiers:(id)specifiers withSpecifiers:(id)specifiers changedBlock:(id /* block */)block;

/* instance methods */
- (id)_init;
- (id)init;
- (id)initWithSpecifiers:(id)specifiers;
- (id)initWithSpecifiers:(id)specifiers applyUpdates:(id)updates;
- (id)_initForCopyWithOriginalSpecifiers:(id)specifiers currentSpecifiers:(id)specifiers updates:(id)updates;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_groupIndexCreatingIfNecessary;
- (void)enumerateUpdatesUsingBlock:(id /* block */)block;
- (unsigned long long)indexOfSpecifier:(id)specifier;
- (unsigned long long)indexOfSpecifierWithID:(id)id;
- (id)specifierForID:(id)id;
- (BOOL)_enumerateArrayWithConjuctionalResult:(id)result usingBlock:(id /* block */)block;
- (void)_operationFailed:(id)failed reason:(id)reason;
- (void)_didApplyOperation:(id)operation;
- (BOOL)_addAndApplyOperation:(id)operation;
- (BOOL)insertSpecifier:(id)specifier atIndex:(unsigned long long)index;
- (BOOL)insertSpecifier:(id)specifier atIndexPath:(id)path;
- (BOOL)insertSpecifier:(id)specifier afterSpecifier:(id)specifier;
- (BOOL)insertSpecifier:(id)specifier afterSpecifierWithID:(id)id;
- (BOOL)insertContiguousSpecifiers:(id)specifiers atIndex:(unsigned long long)index;
- (BOOL)insertContiguousSpecifiers:(id)specifiers afterSpecifier:(id)specifier;
- (BOOL)insertContiguousSpecifiers:(id)specifiers afterSpecifierWithID:(id)id;
- (BOOL)appendSpecifier:(id)specifier;
- (BOOL)appendSpecifiers:(id)specifiers;
- (BOOL)appendSpecifier:(id)specifier toGroupAtGroupIndex:(unsigned long long)index;
- (BOOL)appendSpecifiers:(id)specifiers toGroupAtGroupIndex:(unsigned long long)index;
- (BOOL)appendSpecifier:(id)specifier toGroup:(id)group;
- (BOOL)appendSpecifiers:(id)specifiers toGroup:(id)group;
- (BOOL)appendSpecifier:(id)specifier toGroupWithID:(id)id;
- (BOOL)appendSpecifiers:(id)specifiers toGroupWithID:(id)id;
- (BOOL)removeSpecifier:(id)specifier;
- (BOOL)removeSpecifiers:(id)specifiers;
- (BOOL)removeSpecifierWithID:(id)id;
- (BOOL)removeSpecifiersWithIDs:(id)ids;
- (BOOL)removeSpecifierAtIndex:(unsigned long long)index;
- (BOOL)_removeOneSpecifierOnlyAtIndex:(unsigned long long)index;
- (BOOL)removeSpecifiersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (BOOL)removeSpecifierAtIndexPath:(id)path;
- (BOOL)removeSpecifiersInGroupAtGroupIndex:(unsigned long long)index;
- (BOOL)removeSpecifiersInGroup:(id)group;
- (BOOL)removeSpecifiersInGroupWithID:(id)id;
- (BOOL)reloadSpecifier:(id)specifier;
- (BOOL)reloadSpecifiers:(id)specifiers;
- (BOOL)reloadSpecifiersInGroupAtGroupIndex:(unsigned long long)index;
- (BOOL)reloadSpecifiersInGroup:(id)group;
- (BOOL)reloadSpecifiersInGroupWithID:(id)id;
- (BOOL)reloadSpecifierWithID:(id)id;
- (BOOL)reloadSpecifiersWithIDs:(id)ids;
- (BOOL)reloadSpecifierAtIndex:(unsigned long long)index;
- (BOOL)reloadSpecifierAtIndexPath:(id)path;
- (BOOL)reloadSpecifiersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (BOOL)moveSpecifierAtIndex:(unsigned long long)index toIndex:(unsigned long long)index;
- (BOOL)moveSpecifierAtIndexPath:(id)path toIndexPath:(id)path;
- (BOOL)moveSpecifier:(id)specifier toIndex:(unsigned long long)index;
- (BOOL)swapSpecifierAtIndex:(unsigned long long)index withSpecifierAtIndex:(unsigned long long)index;
- (BOOL)swapSpecifier:(id)specifier withSpecifier:(id)specifier;
- (id)description;
- (id)stepByStepDescription;
- (id)specifiersAfterApplyingUpdatesToIndex:(unsigned long long)index;
@end

#endif /* PSSpecifierUpdates_h */
