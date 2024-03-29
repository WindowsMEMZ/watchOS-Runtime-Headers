//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSceneActionConditionsMonitor_h
#define CSLSceneActionConditionsMonitor_h
@import Foundation;

#include "BLSBacklightStateObserving-Protocol.h"
#include "CSLForegroundMonitoring-Protocol.h"
#include "CSLSceneActionConditionsMonitoring-Protocol.h"

@class NSString;

@interface CSLSceneActionConditionsMonitor : NSObject<BLSBacklightStateObserving, CSLForegroundMonitoring> {
  /* instance variables */
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _lock;
}

@property (readonly, weak, nonatomic) NSObject<CSLSceneActionConditionsMonitoring> *delegate;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL shouldMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithDelegate:(id)delegate bundleID:(id)id;
- (void)dealloc;
- (void)_withLock:(id /* block */)lock;
- (void)_updateStatus;
- (void)_queue_updateStatus;
- (void)backlight:(id)backlight didCompleteUpdateToState:(long long)state forEvent:(id)event;
- (void)foregroundMonitorService:(id)service application:(id)application changedForegroundStatus:(BOOL)status;
@end

#endif /* CSLSceneActionConditionsMonitor_h */
