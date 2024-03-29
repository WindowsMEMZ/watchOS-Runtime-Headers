//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMReply_Internal_Protocol_h
#define MCMReply_Internal_Protocol_h
@import Foundation;

@protocol MCMReply_Internal <MCMReply>

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcReply;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *slowWorkloop;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *fastWorkloop;
@property (readonly, nonatomic) NSObject<MCMResultPromise> *resultPromise;

@end

#endif /* MCMReply_Internal_Protocol_h */
