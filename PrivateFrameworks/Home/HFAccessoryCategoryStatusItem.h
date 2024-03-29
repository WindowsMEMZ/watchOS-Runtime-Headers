//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFAccessoryCategoryStatusItem_h
#define HFAccessoryCategoryStatusItem_h
@import Foundation;

#include "HFStatusItem.h"
#include "HFAccessoryTypeGroup.h"
#include "HFReorderableItemListItemProtocol-Protocol.h"

@class NSArray, NSString;

@interface HFAccessoryCategoryStatusItem : HFStatusItem<HFReorderableItemListItemProtocol>

@property (readonly, nonatomic) HFAccessoryTypeGroup *accessoryTypeGroup;
@property (readonly, nonatomic) NSArray *statusItems;
@property (readonly, copy, nonatomic) NSString *uuidString;

/* class methods */
+ (id)statusItemClasses;

/* instance methods */
- (id)initWithHome:(id)home room:(id)room valueSource:(id)source;
- (id /* block */)accessoryTypeGroupFilter;
- (id)sortedActionSetItemsWithProvider:(id)provider;
- (id)_statusItemOfClass:(Class)class;
- (BOOL)hidesWithNoAccessories;
- (id)_subclass_updateWithOptions:(id)options;
- (void)applyInflectionToDescriptions:(id)descriptions;
@end

#endif /* HFAccessoryCategoryStatusItem_h */
