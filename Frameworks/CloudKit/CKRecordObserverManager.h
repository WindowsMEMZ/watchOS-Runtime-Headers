//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKRecordObserverManager_h
#define CKRecordObserverManager_h
@import Foundation;

#include "CKRecordObservable-Protocol.h"

@class NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface CKRecordObserverManager : NSObject<CKRecordObservable> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSMapTable *_recordObservers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (void)addRecordObserver:(id)observer block:(id /* block */)block;
- (void)removeRecordObserver:(id)observer;
- (void)handleRecordChange:(id)change container:(id)container completionHandler:(id /* block */)handler;
@end

#endif /* CKRecordObserverManager_h */
