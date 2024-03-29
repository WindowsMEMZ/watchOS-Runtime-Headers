//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLButtonDownAggregator_h
#define CSLButtonDownAggregator_h
@import Foundation;

#include "CSLHIDEventStreamReader-Protocol.h"

@class NSString;

@interface CSLButtonDownAggregator : NSObject<CSLHIDEventStreamReader> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) unsigned long long downButtons;
@property (readonly, nonatomic) unsigned long long firstDownTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)_withLock:(id /* block */)lock;
- (void)hidEventStream:(id)stream publishedEvent:(long long)event atTime:(unsigned long long)time;
- (void)_setButton:(unsigned long long)button down:(BOOL)down atTime:(unsigned long long)time;
@end

#endif /* CSLButtonDownAggregator_h */
