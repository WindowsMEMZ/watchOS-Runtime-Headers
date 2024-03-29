//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKDetailTilesExpandedSectionProvider_h
#define NPKDetailTilesExpandedSectionProvider_h
@import Foundation;

#include "NPKPassDetailSectionProvider.h"
#include "NPKTileItem.h"

@interface NPKDetailTilesExpandedSectionProvider : NPKPassDetailSectionProvider

@property (retain, nonatomic) NPKTileItem *item;

/* class methods */
+ (Class)configurationClass;
+ (id)expandedTileConfigurationForConfiguration:(id)configuration;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)sectionIdentifiers;
- (id)itemsForSectionWithIdentifier:(id)identifier;
- (id)footerTextForSectionWithIdentifier:(id)identifier;
- (id)_checkInItem;
- (id)_generalItem;
- (id)_itemWithIdentifier:(id)identifier;
- (id)primaryFont;
@end

#endif /* NPKDetailTilesExpandedSectionProvider_h */
