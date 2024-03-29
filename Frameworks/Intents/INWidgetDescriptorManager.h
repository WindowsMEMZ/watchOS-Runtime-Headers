//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INWidgetDescriptorManager_h
#define INWidgetDescriptorManager_h
@import Foundation;

#include "INWatchdogTimer.h"

@class NSMutableArray, NSSet;
@protocol OS_dispatch_queue;

@interface INWidgetDescriptorManager : NSObject {
  /* instance variables */
  BOOL _observing;
  NSMutableArray *_completionHandlers;
  INWatchdogTimer *_watchdogTimer;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSSet *widgetDescriptors;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (void)getDescriptorsWithCompletionHandler:(id /* block */)handler;
- (void)getDescriptorForIntent:(id)intent completionHandler:(id /* block */)handler;
- (id)init;
- (void)dealloc;
- (void)_startObservingDescriptors;
- (void)_notifyCompletionHandlersWithWidgetDescriptors:(id)descriptors;
@end

#endif /* INWidgetDescriptorManager_h */
