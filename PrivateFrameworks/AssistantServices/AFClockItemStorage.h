//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFClockItemStorage_h
#define AFClockItemStorage_h
@import Foundation;

#include "AFInvalidating-Protocol.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSString;
@protocol AFClockItemStorageDelegate;

@interface AFClockItemStorage : NSObject<AFInvalidating> {
  /* instance variables */
  NSObject<AFClockItemStorageDelegate> *_delegate;
  long long _groupingDepth;
  unsigned long long _workingGeneration;
  NSDate *_workingDate;
  NSMutableDictionary *_workingItemsByID;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long generation;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDictionary *itemsByID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIdentifier:(id)identifier delegate:(id)delegate;
- (void)beginGrouping;
- (void)endGroupingWithOptions:(unsigned long long)options;
- (id)itemWithID:(id)id;
- (void)insertOrUpdateItems:(id)items;
- (void)deleteItemsWithIDs:(id)ids;
- (void)deleteAllItems;
- (void)invalidate;
@end

#endif /* AFClockItemStorage_h */
