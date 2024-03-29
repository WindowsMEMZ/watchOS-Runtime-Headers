//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHTTPMessageTransport_h
#define HMDHTTPMessageTransport_h
@import Foundation;

#include "HMDRemoteMessageTransport.h"
#include "HMDHTTPClientMessageTransportDelegate-Protocol.h"
#include "HMDHTTPDevice.h"
#include "HMDHTTPServerMessageTransport.h"
#include "HMDHTTPServerMessageTransportDelegate-Protocol.h"
#include "HMFNetServiceBrowserDelegate-Protocol.h"

@class HMFNetServiceBrowser, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface HMDHTTPMessageTransport : HMDRemoteMessageTransport<HMDHTTPServerMessageTransportDelegate, HMFNetServiceBrowserDelegate, HMDHTTPClientMessageTransportDelegate> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSObject<OS_dispatch_queue> *_queue;
  NSMutableSet *_residentDevices;
  NSMutableSet *_transientDevices;
  NSMutableDictionary *_txtRecord;
}

@property (readonly, nonatomic) HMDHTTPServerMessageTransport *serverTransport;
@property (readonly, nonatomic) HMFNetServiceBrowser *clientBrowser;
@property (readonly, nonatomic) NSArray *clientTransports;
@property (readonly, nonatomic) HMDHTTPDevice *currentDevice;
@property BOOL serverEnabled;
@property (readonly, copy, nonatomic) NSDictionary *TXTRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (unsigned long long)restriction;
+ (id)protocolVersion;
+ (BOOL)shouldHostMessageServer;
+ (BOOL)protocolVersionSupportsExtendedMessages:(id)messages;
+ (id)shortDescription;
+ (id)logCategory;

/* instance methods */
- (id)initWithAccountRegistry:(id)registry;
- (id)initWithAccountRegistry:(id)registry clientBrowser:(id)browser;
- (id)shortDescription;
- (id)descriptionWithPointer:(BOOL)pointer;
- (int)transportType;
- (id)logIdentifier;
- (long long)qualityOfService;
- (BOOL)isDeviceConnected:(id)connected;
- (BOOL)canSendMessage:(id)message;
- (void)sendMessage:(id)message completionHandler:(id /* block */)handler;
- (void)_sendMessage:(id)message destination:(id)destination timeout:(double)timeout responseHandler:(id /* block */)handler;
- (void)_handleReceivedRequestMessage:(id)message fromDevice:(id)device completionHandler:(id /* block */)handler;
- (BOOL)isServerEnabled;
- (void)handleServerEnabled:(BOOL)enabled;
- (void)setTXTRecordValue:(id)value forKey:(id)key;
- (void)removeTXTRecordValueForKey:(id)key;
- (id)deviceForHTTPDevice:(id)httpdevice;
- (id)clientTransportForDevice:(id)device;
- (id)clientTransportForService:(id)service;
- (void)addClientTransport:(id)transport;
- (void)removeClientTransport:(id)transport;
- (void)removeAllClientTransports;
- (id)_serviceForDevice:(id)device;
- (void)configureWithDevice:(id)device;
- (void)_startServerWithDevice:(id)device;
- (void)_stopServer;
- (void)_connectToDevice:(id)device completionHandler:(id /* block */)handler;
- (void)startObservingIsPublishingForService:(id)service;
- (void)client:(id)client didStopWithError:(id)error;
- (void)client:(id)client didReceiveMessage:(id)message completionHandler:(id /* block */)handler;
- (void)server:(id)server didStopWithError:(id)error;
- (void)server:(id)server didAddDevice:(id)device;
- (void)server:(id)server didRemoveDevice:(id)device;
- (void)server:(id)server didReceiveMessage:(id)message fromDevice:(id)device completionHandler:(id /* block */)handler;
- (void)netServiceBrowser:(id)browser didStopBrowsingWithError:(id)error;
- (void)netServiceBrowser:(id)browser didAddService:(id)service;
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service;
- (id)dumpState;
@end

#endif /* HMDHTTPMessageTransport_h */
