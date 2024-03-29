//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTProcessControlServiceAuthorizedMethods_Protocol_h
#define DTProcessControlServiceAuthorizedMethods_Protocol_h
@import Foundation;

@protocol DTProcessControlServiceAuthorizedMethods <DTXAllowedRPC>
/* instance methods */
- (void)startObservingPid:(id)pid;
- (void)stopObservingPid:(id)pid;
- (void)suspendPid:(id)pid;
- (void)resumePid:(id)pid;
- (id)launchSuspendedProcessWithDevicePath:(id)path bundleIdentifier:(id)identifier environment:(id)environment arguments:(id)arguments options:(id)options;
- (void)killPid:(id)pid;
- (void)sendSignal:(id)signal toPid:(id)pid;
- (void)sendProcessControlEvent:(id)event toPid:(id)pid;
- (id)requestDisableMemoryLimitsForPid:(int)pid;
- (id)insertViewDebuggingLibrariesForPid:(int)pid;
@end

#endif /* DTProcessControlServiceAuthorizedMethods_Protocol_h */
