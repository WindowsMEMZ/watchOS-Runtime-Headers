//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 473.0.1.0.0
//
#ifndef PKManager_h
#define PKManager_h
@import Foundation;

#include "PKDaemonClient.h"
#include "PKProxyFactory-Protocol.h"

@interface PKManager : NSObject

@property (retain) PKDaemonClient *client;
@property (readonly) NSObject<PKProxyFactory> *proxyFactory;

/* class methods */
+ (id)defaultManager;
+ (id)managerForUser:(unsigned int)user;

/* instance methods */
- (id)initForService:(const char *)service;
- (id)initForUser:(unsigned int)user;
- (id)initWithDaemon:(id)daemon;
- (id)initWithDaemon:(id)daemon proxyFactory:(id)factory;
- (id)initWithProxyFactory:(id)factory;
- (void)registerPlugInAtURL:(id)url result:(id /* block */)result;
- (void)unregisterPlugInAtURL:(id)url result:(id /* block */)result;
- (void)registerPlugInsInBundle:(id)bundle result:(id /* block */)result;
- (void)unregisterPlugInsInBundle:(id)bundle result:(id /* block */)result;
- (id)informationForPlugInWithPid:(int)pid;
- (id)containingAppForPlugInConnectedTo:(id)to;
- (id)containingAppForPlugInWithPid:(int)pid;
- (id)containingAppForExtensionProperties:(id)properties;
- (void)holdPlugInsInApplication:(id)application result:(id /* block */)result;
- (void)holdPlugInsWithExtensionPointName:(id)name platforms:(id)platforms terminate:(BOOL)terminate result:(id /* block */)result;
- (void)holdPlugInsWithExtensionPointName:(id)name result:(id /* block */)result;
- (void)forceHoldPlugIn:(id)in result:(id /* block */)result;
- (void)terminatePlugInsInApplication:(id)application options:(long long)options result:(id /* block */)result;
- (id)holdPlugInsInApplication:(id)application withError:(id *)error;
- (id)holdPlugInsWithExtensionPointName:(id)name platforms:(id)platforms terminate:(BOOL)terminate error:(id *)error;
- (id)holdPlugInsWithExtensionPointName:(id)name error:(id *)error;
- (id)forceHoldPlugIn:(id)in withError:(id *)error;
- (BOOL)terminatePlugInAtURL:(id)url withError:(id *)error;
- (id)terminatePlugInsInApplication:(id)application options:(long long)options withError:(id *)error;
- (void)holdRequest:(id)request flags:(unsigned long long)flags result:(id /* block */)result;
- (void)holdRequest:(id)request extensionPointName:(id)name platforms:(id)platforms flags:(unsigned long long)flags result:(id /* block */)result;
- (void)releaseHold:(id)hold;
- (void)releaseHold:(id)hold reply:(id /* block */)reply;
- (BOOL)releaseHold:(id)hold flags:(unsigned long long)flags withError:(id *)error;
- (BOOL)releaseHold:(id)hold withError:(id *)error;
- (void)updateExtensionStatesForPlugIns:(id)ins result:(id /* block */)result;
@end

#endif /* PKManager_h */
