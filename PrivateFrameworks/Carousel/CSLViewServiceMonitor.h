//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLViewServiceMonitor_h
#define CSLViewServiceMonitor_h
@import Foundation;

#include "CSLViewServiceMonitorDelegate-Protocol.h"
#include "IOSSHLApplicationsProviding-Protocol.h"

@class NSMutableDictionary, NSMutableSet, RBSProcessMonitor;

@interface CSLViewServiceMonitor : NSObject {
  /* instance variables */
  RBSProcessMonitor *_processMonitor;
  NSMutableSet *_monitoredBundleIdentifiers;
  NSMutableDictionary *_viewServiceStates;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  unsigned long long _stateHandle;
}

@property (weak, nonatomic) NSObject<CSLViewServiceMonitorDelegate> *delegate;
@property (readonly, nonatomic) NSObject<IOSSHLApplicationsProviding> *applicationProvider;

/* instance methods */
- (id)initWithApplicationProvider:(id)provider;
- (void)dealloc;
- (id)debugDescription;
- (void)beginMonitoringViewServiceWithBundleIdentifier:(id)identifier;
- (void)endMonitoringViewServiceWithBundleIdentifier:(id)identifier;
- (BOOL)shouldUseViewServiceMonitorForBundleID:(id)id;
- (void)_lock_updateProcessMonitorForBundleIdentifiers:(id)identifiers;
- (void)_monitor:(id)_monitor didUpdateProcess:(id)process withStateUpdate:(id)update;
@end

#endif /* CSLViewServiceMonitor_h */
