//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsQueue_h
#define MapsSuggestionsQueue_h
@import Foundation;

#include "MapsSuggestionsObject-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue, {unique_ptr<MSg::Queue, std::default_delete<MSg::Queue>>="__ptr_"{__compressed_pair<MSg::Queue *, std::default_delete<MSg::Queue>>="__value_"^{Queue}}};

@interface MapsSuggestionsQueue : NSObject<MapsSuggestionsObject> {
  /* instance variables */
  struct unique_ptr<MSg::Queue, std::default_delete<MSg::Queue>> { struct __compressed_pair<MSg::Queue *, std::default_delete<MSg::Queue>> { struct Queue *__value_; } __ptr_; } _cppQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *innerQueue;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)serialQueueWithName:(id)name;

/* instance methods */
- (id)initSerialQueueWithName:(id)name;
- (void)syncBlock:(id /* block */)block;
- (id)syncReturningBlock:(id /* block */)block;
- (BOOL)syncBOOLReturningBlock:(id /* block */)block;
- (void)asyncBlock:(id /* block */)block;
@end

#endif /* MapsSuggestionsQueue_h */
