//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.200.1.0.0
//
#ifndef MPUQueryDataSource_h
#define MPUQueryDataSource_h
@import Foundation;

#include "MPUDataSource.h"

@class MPMediaItemCollection, MPMediaQuery, MPMediaQuerySectionInfo, NSArray, NSMutableSet;

@interface MPUQueryDataSource : MPUDataSource {
  /* instance variables */
  NSArray *_entities;
  NSMutableSet *_additionalUniqueItemPropertiesToFetch;
  BOOL _hasValidEmpty;
  BOOL _hasValidRepresentativeCollection;
  BOOL _invalidateWhenEnteringForeground;
  BOOL _isEmpty;
  MPMediaItemCollection *_representativeCollection;
  MPMediaQuerySectionInfo *_sectionInfo;
}

@property (readonly, nonatomic) MPMediaQuery *query;
@property (nonatomic) BOOL ignoringInvalidationDueToBackgroundApplicationState;

/* instance methods */
- (id)initWithEntityType:(long long)type;
- (id)initWithQuery:(id)query entityType:(long long)type;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)canEditEntityAtIndex:(unsigned long long)index;
- (BOOL)canSelectEntityAtIndex:(unsigned long long)index;
- (unsigned long long)count;
- (void)deleteEntityAtIndex:(unsigned long long)index;
- (long long)editingTypeForEntityAtIndex:(unsigned long long)index;
- (id)entities;
- (id)queryForEntityAtIndex:(unsigned long long)index;
- (id)queryForEntityAtIndexPath:(id)path;
- (void)_invalidateCalculatedEntities;
- (BOOL)isEmpty;
- (BOOL)showsIndexBar;
- (unsigned long long)numberOfSections;
- (id)localizedSectionIndexTitles;
- (id)localizedSectionTitleAtIndex:(unsigned long long)index;
- (unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)index;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSectionAtIndex:(unsigned long long)index;
- (BOOL)showsEntityCountFooter;
- (void)addAdditionalMediaEntityPropertiesToFetch:(id)fetch;
- (void)removeAdditionalMediaEntityPropertiesToFetch:(id)fetch;
- (void)_invalidateIfNeeded;
- (id)_representativeCollection;
- (void)_applicationWillEnterForeground:(id)foreground;
- (void)_applicationDidEnterBackground:(id)background;
- (void)_defaultMediaLibraryDidChangeNotification:(id)notification;
- (void)_isCloudEnabledDidChangeNotification:(id)notification;
- (void)_mediaLibraryDidChangeNotification:(id)notification;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)notification;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)notification;
- (BOOL)_deleteHidesFromCloudForIndex:(unsigned long long)index hidesAll:(out BOOL *)all;
- (void)_invalidateForDisplayValuesChangeIfNeeded;
- (id)_sectionInfo;
@end

#endif /* MPUQueryDataSource_h */
