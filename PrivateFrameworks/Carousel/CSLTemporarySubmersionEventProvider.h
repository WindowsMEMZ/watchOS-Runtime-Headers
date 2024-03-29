//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLTemporarySubmersionEventProvider_h
#define CSLTemporarySubmersionEventProvider_h
@import Foundation;

#include "CSLSubmersionEventProviding-Protocol.h"

@class CSLPRFConcurrentObserverStore, NSMeasurement, NSString, NSUserDefaults;

@interface CSLTemporarySubmersionEventProvider : NSObject<CSLSubmersionEventProviding> {
  /* instance variables */
  NSUserDefaults *_userDefaults;
  CSLPRFConcurrentObserverStore *_observers;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) long long submersionState;
@property (readonly, nonatomic) NSMeasurement *depth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)_setSubmersionState:(long long)state;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* CSLTemporarySubmersionEventProvider_h */
