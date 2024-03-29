//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSPersistentPropertyListStore_h
#define WBSPersistentPropertyListStore_h
@import Foundation;

#include "WBSCoalescedAsynchronousWriter.h"

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface WBSPersistentPropertyListStore : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSURL *_backingStoreURL;
  NSMutableDictionary *_store;
  WBSCoalescedAsynchronousWriter *_writer;
}

@property (copy, nonatomic) id /* block */ createEmptyStoreHandler;
@property (copy, nonatomic) id /* block */ validateLoadedStoreHandler;

/* instance methods */
- (id)initWithBackingStoreURL:(id)url;
- (id)initWithBackingStoreURL:(id)url fileResourceValues:(id)values;
- (void)_loadDataIfNecessary;
- (void)_prepareEmptyStore;
- (id)_existingSavedData;
- (id)_dataRepresentation;
- (id)objectForKey:(id)key;
- (id)_objectForKey:(id)key ofClass:(Class)class;
- (id)stringForKey:(id)key;
- (id)numberForKey:(id)key;
- (id)dataForKey:(id)key;
- (id)dateForKey:(id)key;
- (id)arrayForKey:(id)key;
- (id)dictionaryForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key;
- (id)allKeys;
- (void)saveStoreSynchronously;
- (void)clearStoreSynchronously;
- (void)saveAndCloseStoreSynchronously;
@end

#endif /* WBSPersistentPropertyListStore_h */
