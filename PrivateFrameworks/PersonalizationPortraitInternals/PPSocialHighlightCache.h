//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPSocialHighlightCache_h
#define PPSocialHighlightCache_h
@import Foundation;

#include "PPSQLDatabase.h"

@class _PASLock;
@protocol OS_dispatch_queue;

@interface PPSocialHighlightCache : NSObject {
  /* instance variables */
  _PASLock *_lock;
  PPSQLDatabase *_db;
  NSObject<OS_dispatch_queue> *_queue;
}

/* instance methods */
- (id)init;
@end

#endif /* PPSocialHighlightCache_h */
