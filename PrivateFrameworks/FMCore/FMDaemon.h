//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 210.0.0.0.0
//
#ifndef FMDaemon_h
#define FMDaemon_h
@import Foundation;

@interface FMDaemon : NSObject
/* instance methods */
- (void)run;
- (void)initialize;
- (void)startupWithCompletion:(id /* block */)completion;
- (void)startup;
- (id)xpcDarwinEventHandlers;
- (id)xpcDistributedEventHandlers;
- (void)registerXPCEventHandlers;
- (id)verifyLaunchEventsConfiguration:(id)configuration withExclusions:(id)exclusions;
@end

#endif /* FMDaemon_h */
