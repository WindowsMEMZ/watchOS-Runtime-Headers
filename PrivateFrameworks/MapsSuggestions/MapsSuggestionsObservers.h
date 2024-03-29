//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsObservers_h
#define MapsSuggestionsObservers_h
@import Foundation;

#include "MapsSuggestionsObject-Protocol.h"

@class NSHashTable, NSString;
@protocol {Queue="_innerQueue"@"NSObject<OS_dispatch_queue>""_name"@"NSString"};

@interface MapsSuggestionsObservers : NSObject<MapsSuggestionsObject> {
  /* instance variables */
  NSString *_name;
  struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _callbackQueue;
  NSHashTable *_innerObservers;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCallbackQueue:(id)queue name:(id)name strong:(BOOL)strong;
- (id)initWithCallbackQueue:(id)queue name:(id)name;
- (id)initWithName:(id)name;
- (id)init;
- (void)registerObserver:(id)observer handler:(id /* block */)handler;
- (void)unregisterObserver:(id)observer handler:(id /* block */)handler;
- (unsigned long long)count;
- (BOOL)callBlock:(id /* block */)block;
- (BOOL)synchronouslyCallBlock:(id /* block */)block;
@end

#endif /* MapsSuggestionsObservers_h */
