//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _EFIdealTimerObservable_h
#define _EFIdealTimerObservable_h
@import Foundation;

#include "EFObservable.h"
#include "EFObservable-Protocol.h"
#include "EFScheduler-Protocol.h"

@interface _EFIdealTimerObservable : EFObservable {
  /* instance variables */
  NSObject<EFObservable> *_input;
  NSObject<EFScheduler> *_scheduler;
  double _interval;
}

/* instance methods */
- (id)initWithObservable:(id)observable timeInterval:(double)interval scheduler:(id)scheduler;
- (id)subscribe:(id)subscribe;
@end

#endif /* _EFIdealTimerObservable_h */
