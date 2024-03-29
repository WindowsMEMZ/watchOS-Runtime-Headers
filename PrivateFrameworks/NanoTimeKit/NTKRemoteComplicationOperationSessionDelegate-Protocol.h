//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKRemoteComplicationOperationSessionDelegate_Protocol_h
#define NTKRemoteComplicationOperationSessionDelegate_Protocol_h
@import Foundation;

@protocol NTKRemoteComplicationOperationSessionDelegate <NSObject>
/* instance methods */
- (id)fetchOperationsForRemoteComplicationOperationSession:(id)session;
- (BOOL)shouldExtendSessionForRemoteComplicationOperationSession:(id)session;
- (void)willStartRemoteComplicationOperationSession:(id)session;
- (void)willEndRemoteComplicationOperationSession:(id)session;
- (void)didEndRemoteComplicationOperationSession:(id)session clearFailedWakeSessionCount:(BOOL)count;
- (void)deviceSwitchSessionEndInComplicationOperationSession:(id)session;
- (void)remoteComplicationOperationSession:(id)session didCreateSupplementaryOperation:(id)operation;
- (void)remoteComplicationOperationSession:(id)session didTimeoutWithOperation:(id)operation;
- (void)didFailToWakeClientInComplicationOperationSession:(id)session;
- (void)remoteComplicationOperationSession:(id)session didFinishOperation:(id)operation;
- (void)remoteComplicationOperationSession:(id)session didCancelOperation:(id)operation;
- (void)remoteComplicationOperationSession:(id)session didUpdateNextWakeUpDate:(id)date;
@end

#endif /* NTKRemoteComplicationOperationSessionDelegate_Protocol_h */
