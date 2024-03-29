//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVBulkRequestsItem_h
#define CoreDAVBulkRequestsItem_h
@import Foundation;

#include "CoreDAVItem.h"
#include "CoreDAVLeafItem.h"

@class NSDictionary, NSMutableSet, NSSet;

@interface CoreDAVBulkRequestsItem : CoreDAVItem

@property (readonly, nonatomic) NSDictionary *dictRepresentation;
@property (retain, nonatomic) CoreDAVLeafItem *maxResourcesItem;
@property (retain, nonatomic) CoreDAVLeafItem *maxSizeItem;
@property (readonly, nonatomic) NSSet *supportedItems;
@property (readonly, nonatomic) long long maxResources;
@property (readonly, nonatomic) long long maxSize;
@property (readonly, nonatomic) BOOL supportsInsert;
@property (readonly, nonatomic) BOOL supportsUpdate;
@property (readonly, nonatomic) BOOL supportsDelete;

/* class methods */
+ (id)copyParseRules;

/* instance methods */
- (id)init;
- (id)description;
- (void)addSupportedItem:(id)item;
- (BOOL)supportsItemWithNameSpace:(id)space name:(id)name;
@end

#endif /* CoreDAVBulkRequestsItem_h */
