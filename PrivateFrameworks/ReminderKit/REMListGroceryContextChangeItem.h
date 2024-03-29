//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMListGroceryContextChangeItem_h
#define REMListGroceryContextChangeItem_h
@import Foundation;

#include "REMListChangeItem.h"

@class NSArray, NSString;

@interface REMListGroceryContextChangeItem : NSObject

@property (retain, nonatomic) REMListChangeItem *listChangeItem;
@property (nonatomic) BOOL shouldCategorizeGroceryItems;
@property (readonly, nonatomic) BOOL shouldSuggestConversionToGroceryList;
@property (copy, nonatomic) NSString *groceryLocaleID;
@property (readonly, nonatomic) NSArray *unsavedReminderIDsToCategorizeAsGroceryItems;

/* instance methods */
- (id)initWithListChangeItem:(id)item;
- (void)categorizeGroceryItemsWithReminderIDs:(id)ids;
@end

#endif /* REMListGroceryContextChangeItem_h */
