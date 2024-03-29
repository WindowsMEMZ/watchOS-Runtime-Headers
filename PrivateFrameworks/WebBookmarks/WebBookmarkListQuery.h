//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebBookmarkListQuery_h
#define WebBookmarkListQuery_h
@import Foundation;

#include "WebBookmarkInMemoryChangeFilter-Protocol.h"

@class NSArray, NSString;

@interface WebBookmarkListQuery : NSObject {
  /* instance variables */
  NSString *_query;
  NSString *_queryWithOrderBy;
  NSString *_orderBy;
  NSArray *_titleWordPrefixes;
  NSArray *_titleWordPrefixesForInMemoryFiltering;
  NSString *_urlFilter;
  BOOL _includeHidden;
  BOOL _countShouldUseNumChildrenIfPossible;
  BOOL _includeDescendantsAsChildren;
}

@property (readonly, nonatomic) BOOL customQuery;
@property (readonly, nonatomic) int folderID;
@property (retain, nonatomic) NSObject<WebBookmarkInMemoryChangeFilter> *inMemoryFilter;

/* instance methods */
- (id)init;
- (id)initWithFolderID:(int)id inCollection:(id)collection usingFilter:(id)filter options:(unsigned long long)options;
- (id)initWithBookmarksWhere:(id)where orderBy:(id)by usingFilter:(id)filter;
- (id)initWithBookmarksWhere:(id)where folderID:(int)id orderBy:(id)by usingFilter:(id)filter;
- (id)debugDescription;
- (long long)_listQueryType;
- (int)_childCountInDatabaseForFolderFetchInCollection:(id)collection skipCountingInDatabaseBookmarksThatAreDeletedInMemory:(BOOL)memory;
- (int)_childCountInDatabaseForFolderFetchInCollection:(id)collection skipCountingInDatabaseBookmarksThatAreDeletedInMemory:(BOOL)memory countShouldUseNumChildrenIfPossible:(BOOL)possible;
- (int)_inMemoryAddedChildrenCountForBookmarkFolder:(int)folder collection:(id)collection skipCountingBookmarksThatAreDeletedInMemory:(BOOL)memory;
- (id)_filterBookmarks:(id)bookmarks;
- (int)countInCollection:(id)collection;
- (id)_sqliteNotInConditionForInMemoryModifiedAndDeleted:(BOOL)deleted bookmarksInFolder:(int)folder collection:(id)collection;
- (id)_sqliteInConditionForInMemoryModifiedBookmarksInFolder:(int)folder collection:(id)collection;
- (id)bookmarksInCollection:(id)collection fromIndex:(unsigned int)index toIndex:(unsigned int)index;
- (id)_normalizeUserTypedString:(id)string;
- (void)_preparePrefixesFromNormalizedString:(id)string;
- (BOOL)isCustomQuery;
@end

#endif /* WebBookmarkListQuery_h */
