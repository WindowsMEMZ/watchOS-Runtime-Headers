//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPModelLibrarySearchRequestOperation_h
#define MPModelLibrarySearchRequestOperation_h
@import Foundation;

#include "MPAsyncOperation.h"
#include "MPModelLibrarySearchRequest.h"

@protocol OS_dispatch_queue, {shared_ptr<mlcore::LocalizedSearchQuery>="__ptr_"^{LocalizedSearchQuery}"__cntrl_"^{__shared_weak_count}};

@interface MPModelLibrarySearchRequestOperation : MPAsyncOperation {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_accessSerialQueue;
  struct shared_ptr<mlcore::LocalizedSearchQuery> { struct LocalizedSearchQuery *__ptr_; struct __shared_weak_count *__cntrl_; } _runningQuery;
}

@property (copy, nonatomic) MPModelLibrarySearchRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

/* instance methods */
- (id)init;
- (void)execute;
- (void)cancel;
@end

#endif /* MPModelLibrarySearchRequestOperation_h */
