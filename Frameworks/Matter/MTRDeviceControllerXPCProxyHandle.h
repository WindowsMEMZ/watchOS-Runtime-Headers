//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRDeviceControllerXPCProxyHandle_h
#define MTRDeviceControllerXPCProxyHandle_h
@import Foundation;

#include "MTRDeviceControllerServerProtocol-Protocol.h"

@class NSXPCConnection;

@interface MTRDeviceControllerXPCProxyHandle : NSObject

@property (readonly, weak, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSObject<MTRDeviceControllerServerProtocol> *proxy;

/* instance methods */
- (id)initWithXPCConnection:(id)xpcconnection;
- (void)dealloc;
@end

#endif /* MTRDeviceControllerXPCProxyHandle_h */
