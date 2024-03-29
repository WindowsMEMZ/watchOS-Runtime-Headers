//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSMigrationApp_h
#define CSLSMigrationApp_h
@import Foundation;

#include "BKSAlternateSystemAppDelegate-Protocol.h"
#include "CSLSLaunchAlternateSystemAppOperation.h"

@class BKSAlternateSystemApp, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface CSLSMigrationApp : NSObject<BKSAlternateSystemAppDelegate> {
  /* instance variables */
  BKSAlternateSystemApp *_alternateSystemApp;
  NSOperationQueue *_queue;
  NSObject<OS_dispatch_queue> *_dispatch_queue;
  CSLSLaunchAlternateSystemAppOperation *_launchOperation;
}

@property BOOL isActive;
@property BOOL isTerminating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)activate;
- (void)terminateWithCompletion:(id /* block */)completion;
- (void)alternateSystemAppDidLaunch:(id)launch;
- (void)alternateSystemApp:(id)app didExitWithStatus:(int)status;
- (void)alternateSystemApp:(id)app didTerminateWithSignal:(int)signal;
- (void)alternateSystemApp:(id)app didFailToLaunchWithError:(id)error;
@end

#endif /* CSLSMigrationApp_h */
