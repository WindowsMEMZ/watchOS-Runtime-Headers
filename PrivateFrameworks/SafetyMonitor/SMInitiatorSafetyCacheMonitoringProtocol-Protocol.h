//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef SMInitiatorSafetyCacheMonitoringProtocol_Protocol_h
#define SMInitiatorSafetyCacheMonitoringProtocol_Protocol_h
@import Foundation;

@protocol SMInitiatorSafetyCacheMonitoringProtocol 
/* instance methods */
- (void)startMonitoringInitiatorSafetyCacheWithHandler:(id /* block */)handler;
- (void)stopMonitoringInitiatorSafetyCacheWithCompletion:(id /* block */)completion;
@end

#endif /* SMInitiatorSafetyCacheMonitoringProtocol_Protocol_h */
