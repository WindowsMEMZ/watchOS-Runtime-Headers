//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef _ClientRenderer_h
#define _ClientRenderer_h
@import Foundation;

#include "CDComplicationHostingView.h"

@protocol OS_dispatch_semaphore;

@interface _ClientRenderer : NSObject {
  /* instance variables */
  CDComplicationHostingView *_host;
  double _renderTime;
  double _renderCost;
  NSObject<OS_dispatch_semaphore> *_sema;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

/* instance methods */
- (id)init;
- (void)renderWithViewData:(id)data scale:(double)scale handler:(id /* block */)handler;
- (void)_handleRenderStatsTime:(double)time cost:(double)cost;
@end

#endif /* _ClientRenderer_h */
