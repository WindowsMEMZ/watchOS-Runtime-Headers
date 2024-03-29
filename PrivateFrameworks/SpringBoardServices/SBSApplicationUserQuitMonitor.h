//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4416.36.0.0.0
//
#ifndef SBSApplicationUserQuitMonitor_h
#define SBSApplicationUserQuitMonitor_h
@import Foundation;

#include "SBSApplicationUserQuitMonitorServerToClientInterface-Protocol.h"

@class BSServiceConnection, NSString;
@protocol OS_dispatch_queue, SBSApplicationUserQuitMonitorDelegate;

@interface SBSApplicationUserQuitMonitor : NSObject<SBSApplicationUserQuitMonitorServerToClientInterface> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_connectionQueue;
  BSServiceConnection *_connection;
  NSObject<SBSApplicationUserQuitMonitorDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)invalidate;
- (void)userClosedLastSceneOfApplicationWithBundleID:(id)id;
- (void)_connectionQueue_setupAndActivate;
- (void)_connectionQueue_invalidate;
@end

#endif /* SBSApplicationUserQuitMonitor_h */
