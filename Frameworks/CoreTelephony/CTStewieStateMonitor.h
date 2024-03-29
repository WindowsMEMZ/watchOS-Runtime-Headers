//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTStewieStateMonitor_h
#define CTStewieStateMonitor_h
@import Foundation;

#include "CTStewieState.h"
#include "CTStewieStateMonitorDelegate-Protocol.h"

@protocol OS_dispatch_queue, OS_nw_path_evaluator;

@interface CTStewieStateMonitor : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fLock;
  CTStewieState *fState;
  NSObject<CTStewieStateMonitorDelegate> *fDelegate;
  NSObject<OS_dispatch_queue> *fDelegateQueue;
  NSObject<OS_nw_path_evaluator> *fPathEvaluator;
  BOOL fStarted;
}

/* instance methods */
- (id)initWithDelegate:(id)delegate queue:(id)queue;
- (BOOL)startWithEndpoint:(id)endpoint parameters:(id)parameters;
- (BOOL)start;
- (id)stateFromPath:(id)path;
- (id)getState;
- (void)dealloc;
@end

#endif /* CTStewieStateMonitor_h */
