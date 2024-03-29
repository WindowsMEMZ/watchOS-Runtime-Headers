//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSSearchResults_h
#define PSSearchResults_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface PSSearchResults : NSObject<NSCopying> {
  /* instance variables */
  NSMutableArray *_sectionEntries;
  NSMutableSet *_explicitlyAddedSectionEntries;
  NSMutableDictionary *_entriesBySection;
  BOOL _needsSorting;
}

@property (copy, nonatomic) id /* block */ sectionComparator;
@property (copy, nonatomic) id /* block */ entryComparator;
@property (nonatomic) BOOL treatSectionEntriesAsRegularEntries;

/* instance methods */
- (id)init;
- (id)_initForCopyWithSectionEntries:(id)entries entriesBySection:(id)section explicitlyAddedSectionEntries:(id)entries;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)addEntry:(id)entry;
- (void)addEntries:(id)entries;
- (BOOL)removeEntry:(id)entry;
- (unsigned long long)removeEntries:(id)entries;
- (unsigned long long)numberOfSectionEntries;
- (unsigned long long)numberOfEntriesInSectionAtIndex:(unsigned long long)index;
- (unsigned long long)totalNumberOfEntries;
- (id)sectionEntryAtIndex:(unsigned long long)index;
- (id)entriesInSectionAtIndex:(unsigned long long)index;
- (id)entryAtIndexPath:(id)path;
- (id)allSectionEntries;
- (void)sortResults;
- (void)mergeWithResults:(id)results;
- (id)resultsByMergingWithResults:(id)results;
- (id)description;
@end

#endif /* PSSearchResults_h */
