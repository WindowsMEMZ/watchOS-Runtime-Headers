//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKDirectorySearchOperation_h
#define EKDirectorySearchOperation_h
@import Foundation;

#include "NSOperation.h"
#include "EKDirectorySearchQuery.h"

@class NSError, NSString;

@interface EKDirectorySearchOperation : NSOperation {
  /* instance variables */
  BOOL _isFinished;
  BOOL _isExecuting;
  NSString *_accountID;
  EKDirectorySearchQuery *_query;
  id /* block */ _resultsBlock;
  id _searchID;
}

@property (nonatomic) BOOL numberOfMatchesExceededLimit;
@property (retain, nonatomic) NSError *error;

/* class methods */
+ (BOOL)isSupported;

/* instance methods */
- (id)init;
- (id)initWithSource:(id)source query:(id)query resultsBlock:(id /* block */)block;
- (void)start;
- (void)main;
- (BOOL)isConcurrent;
- (void)cancel;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)_recordTypes;
- (void)_processResults:(id)results;
- (id)_processResults:(id)results class:(Class)class;
- (void)_finishWithError:(id)error;
@end

#endif /* EKDirectorySearchOperation_h */
