//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFBaseSyncResponseQueue_h
#define MFBaseSyncResponseQueue_h
@import Foundation;

#include "MFBufferedQueue.h"
#include "MFIMAPConnection.h"
#include "MFLibraryIMAPStore.h"

@class NSArray, NSMutableArray, NSString;

@interface MFBaseSyncResponseQueue : MFBufferedQueue {
  /* instance variables */
  MFLibraryIMAPStore *_store;
  MFIMAPConnection *_connection;
  NSString *_url;
  unsigned long long _currentUID;
  NSMutableArray *_missingUIDs;
  NSArray *_serverMessages;
  BOOL _shouldCompact;
  BOOL _shouldFetch;
  BOOL _isSearching;
}

/* instance methods */
- (id)init;
- (BOOL)handleItems:(id)items;
- (unsigned long long)uidForItem:(id)item;
- (unsigned long long)flagsForItem:(id)item;
- (id)sequenceIdentifierForItem:(id)item;
- (BOOL)shouldSyncFlags;
@end

#endif /* MFBaseSyncResponseQueue_h */
