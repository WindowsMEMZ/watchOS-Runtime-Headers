//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef ANAnnounceReachabilityServiceInterface_Protocol_h
#define ANAnnounceReachabilityServiceInterface_Protocol_h
@import Foundation;

@protocol ANAnnounceReachabilityServiceInterface <NSObject>
/* instance methods */
- (void)resumeWithCompletionHandler:(id /* block */)handler;
- (void)announceReachabilityForHomeName:(id)name reply:(id /* block */)reply;
- (void)announceReachabilityForRoomName:(id)name inHomeName:(id)name reply:(id /* block */)reply;
- (void)announceReachabilityForHomeUUID:(id)uuid reply:(id /* block */)reply;
- (void)announceReachabilityForRoomUUID:(id)uuid inHomeUUID:(id)uuid reply:(id /* block */)reply;
@end

#endif /* ANAnnounceReachabilityServiceInterface_Protocol_h */
