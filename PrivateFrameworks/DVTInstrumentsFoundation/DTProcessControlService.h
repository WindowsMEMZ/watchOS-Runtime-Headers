//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTProcessControlService_h
#define DTProcessControlService_h
@import Foundation;

#include "DTXService.h"
#include "DTProcessControlServiceAuthorizedMethods-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface DTProcessControlService : DTXService<DTProcessControlServiceAuthorizedMethods> {
  /* instance variables */
  NSMutableArray *_pids;
  NSMutableArray *_sources;
  NSMutableDictionary *_activeIODispatchSources;
  NSObject<OS_dispatch_queue> *_deathNoteQueue;
  NSObject<OS_dispatch_queue> *_synchronousRedirectionQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)registerCapabilities:(id)capabilities;

/* instance methods */
- (id)initWithChannel:(id)channel;
- (void)startObservingPid:(id)pid;
- (void)stopObservingPid:(id)pid;
- (void)resumePid:(id)pid;
- (void)suspendPid:(id)pid;
- (id)launchSuspendedProcessWithDevicePath:(id)path bundleIdentifier:(id)identifier environment:(id)environment arguments:(id)arguments;
- (id)launchSuspendedProcessWithDevicePath:(id)path bundleIdentifier:(id)identifier environment:(id)environment arguments:(id)arguments options:(id)options;
- (void)killPid:(id)pid;
- (void)sendSignal:(id)signal toPid:(id)pid;
- (void)_performMemoryWarningForPid:(int)pid;
- (void)sendProcessControlEvent:(id)event toPid:(id)pid;
- (int)cleanupPid:(int)pid;
- (id)requestDisableMemoryLimitsForPid:(int)pid;
- (id)insertViewDebuggingLibrariesForPid:(int)pid;
- (int)maybeRedirectFromFileDescriptor:(int)descriptor fromPid:(int)pid withScratchBuffer:(char *)buffer ofByteLength:(unsigned long long)length;
- (void)handleRedirectionIterationForFileDescriptor:(int)descriptor forPid:(int)pid withDispatchSource:(id)source;
- (void)watchOutputFileDescriptor:(int)descriptor forPid:(int)pid;
- (void)watchOutputFileName:(id)name directory:(id)directory forPid:(int)pid;
@end

#endif /* DTProcessControlService_h */
