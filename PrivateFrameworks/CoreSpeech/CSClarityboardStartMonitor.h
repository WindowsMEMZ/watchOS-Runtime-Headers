//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSClarityboardStartMonitor_h
#define CSClarityboardStartMonitor_h
@import Foundation;

#include "CSEventMonitor.h"
#include "CSSystemShellStartProviding-Protocol.h"

@class NSString;

@interface CSClarityboardStartMonitor : CSEventMonitor<CSSystemShellStartProviding> {
  /* instance variables */
  int _notifyToken;
  BOOL _isClarityBoardStarted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)_startMonitoringWithQueue:(id)queue;
- (void)_stopMonitoring;
- (void)_didReceiveClarityboardStartedInQueue:(BOOL)queue;
- (void)_didReceiveClarityboardStarted:(BOOL)started;
- (void)_notifyObserver:(id)observer withStarted:(BOOL)started;
- (BOOL)isSystemShellStarted;
- (BOOL)isClarityBoardStarted;
- (BOOL)_checkClarityBoardStarted;
@end

#endif /* CSClarityboardStartMonitor_h */
