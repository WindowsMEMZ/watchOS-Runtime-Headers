//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPMediaLibraryView_h
#define MPMediaLibraryView_h
@import Foundation;

#include "MPMediaLibrary.h"
#include "NSCopying-Protocol.h"

@protocol struct shared_ptr<mlcore::DeviceLibraryView> { struct DeviceLibraryView * x0; struct __shared_weak_count * x1; }, {shared_ptr<mlcore::DeviceLibraryView>="__ptr_"^{DeviceLibraryView}"__cntrl_"^{__shared_weak_count}};

@interface MPMediaLibraryView : NSObject<NSCopying> {
  /* instance variables */
  struct shared_ptr<mlcore::DeviceLibraryView> { struct DeviceLibraryView *__ptr_; struct __shared_weak_count *__cntrl_; } _coreView;
}

@property (readonly, nonatomic) struct shared_ptr<mlcore::DeviceLibraryView> { struct DeviceLibraryView * x0; struct __shared_weak_count * x1; } mlCoreView;
@property (readonly, nonatomic) MPMediaLibrary *library;
@property (readonly, nonatomic) unsigned long long filteringOptions;

/* instance methods */
- (id)initWithLibrary:(id)library filteringOptions:(unsigned long long)options;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)hasEntitiesForModelKind:(id)kind;
- (void)performCoreQuery:(struct shared_ptr<mlcore::Query> { struct Query * x0; struct __shared_weak_count * x1; })query withCompletion:(id /* block */)completion;
- (void)performCoreSearchQuery:(struct shared_ptr<mlcore::LocalizedSearchQuery> { struct LocalizedSearchQuery * x0; struct __shared_weak_count * x1; })query withCompletion:(id /* block */)completion;
- (struct shared_ptr<mlcore::QueryResult> { struct QueryResult * x0; struct __shared_weak_count * x1; })resultsForCoreQuery:(struct shared_ptr<mlcore::Query> { struct Query * x0; struct __shared_weak_count * x1; })query error:(id *)error;
- (struct shared_ptr<mlcore::QueryResult> { struct QueryResult * x0; struct __shared_weak_count * x1; })_performCoreQuery:(struct shared_ptr<mlcore::Query> { struct Query * x0; struct __shared_weak_count * x1; })query error:(id *)error;
@end

#endif /* MPMediaLibraryView_h */
