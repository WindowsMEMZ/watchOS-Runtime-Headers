//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPFetcherGroup_h
#define LPFetcherGroup_h
@import Foundation;

#include "LPFetcherConfiguration.h"

@class NSMutableArray;

@interface LPFetcherGroup : NSObject {
  /* instance variables */
  LPFetcherConfiguration *_configuration;
  long long _responsePolicy;
  id /* block */ _completionHandler;
  NSMutableArray *_tasks;
  BOOL _doneAddingFetchers;
  BOOL _done;
  BOOL _cancelled;
  unsigned int _loggingID;
}

/* instance methods */
- (id)initWithPolicy:(long long)policy configuration:(id)configuration description:(id)description completionHandler:(id /* block */)handler;
- (void)_addFetcher:(id)fetcher atIndex:(unsigned long long)index;
- (void)appendFetcher:(id)fetcher;
- (void)prependFetcher:(id)fetcher;
- (unsigned long long)numberOfActiveFetches;
- (void)startFetchesIfNeeded;
- (void)doneAddingFetchers;
- (void)evaluateCompleteness;
- (id)_responsesRespectingPolicy;
- (void)cancel;
- (void)_completed;
@end

#endif /* LPFetcherGroup_h */
