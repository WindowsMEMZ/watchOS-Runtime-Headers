//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _PSSuggesterCache_h
#define _PSSuggesterCache_h
@import Foundation;

#include "_PSSuggester.h"

@class NSArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _PSSuggesterCache : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_source> *_timer;
  _PSSuggester *_suggester;
  NSString *_cachedSessionID;
  NSArray *_cachedPeopleSuggestions;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  unsigned long long _leeway;
}

/* class methods */
+ (id)defaultService;
+ (id)defaultServiceWithMaxSuggestionCount:(id)count;

/* instance methods */
- (id)initWithMaxSuggestionCount:(id)count;
- (void)backgroundRefetch;
- (void)refetch;
- (id)getCachedSuggestions;
- (id)description;
@end

#endif /* _PSSuggesterCache_h */
