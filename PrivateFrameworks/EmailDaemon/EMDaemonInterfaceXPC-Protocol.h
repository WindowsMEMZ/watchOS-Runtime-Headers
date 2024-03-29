//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EMDaemonInterfaceXPC_Protocol_h
#define EMDaemonInterfaceXPC_Protocol_h
@import Foundation;

@protocol EMDaemonInterfaceXPC <NSObject>
/* instance methods */
- (void)getMessageRepositoryInterface:(id /* block */)interface;
- (void)getOutgoingMessageRepositoryInterface:(id /* block */)interface;
- (void)getAccountRepositoryInterface:(id /* block */)interface;
- (void)getSenderRepositoryInterface:(id /* block */)interface;
- (void)getFetchControllerInterface:(id /* block */)interface;
- (void)getMailboxRepositoryInterface:(id /* block */)interface;
- (void)getClientStateInterface:(id /* block */)interface;
- (void)getSearchableIndexInterface:(id /* block */)interface;
- (void)getInteractionLoggerInterface:(id /* block */)interface;
- (void)getVIPManagerInterface:(id /* block */)interface;
- (void)getActivityRegistryInterface:(id /* block */)interface;
- (void)getDiagnosticInfoGathererInterface:(id /* block */)interface;
- (void)launchForAppLaunch:(id /* block */)launch;
- (void)launchForEarlyRecovery:(id /* block */)recovery;
- (void)setAllowsBackgroundResume:(BOOL)resume;
@end

#endif /* EMDaemonInterfaceXPC_Protocol_h */
