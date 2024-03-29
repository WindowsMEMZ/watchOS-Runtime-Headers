//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef ECNWConnectionWrapper_h
#define ECNWConnectionWrapper_h
@import Foundation;

#include "ECNWConnectionWrapper-Protocol.h"

@class NSArray, NSConditionLock, NSData, NSError, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore, OS_nw_connection, OS_nw_endpoint, OS_nw_error;

@interface ECNWConnectionWrapper : NSObject<ECNWConnectionWrapper> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_nw_connection> *_connection;
  int _connectionState;
  NSObject<OS_dispatch_semaphore> *_eventSemaphore;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSObject<OS_nw_endpoint> *_endpoint;
  NSConditionLock *_readBufferLock;
  NSObject<OS_dispatch_group> *_writeGroup;
  BOOL _readScheduled;
  NSObject<OS_nw_error> *_readError;
  NSData *_buffer;
  unsigned long long _bufferOffset;
  NSString *_securityProtocol;
  BOOL _readable;
  BOOL _writable;
  double _connectTime;
}

@property (copy) id /* block */ bytesAvailableHandler;
@property (retain) NSError *error;
@property (nonatomic) unsigned int timeout;
@property (nonatomic) BOOL allowsTrustPrompt;
@property (nonatomic) BOOL usesOpportunisticSockets;
@property (nonatomic) BOOL disableEphemeralDiffieHellmanCiphers;
@property (retain, nonatomic) NSArray *clientCertificates;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *networkAccountIdentifier;
@property (copy, nonatomic) NSString *connectionServiceType;
@property (nonatomic) BOOL isNonAppInitiated;
@property (readonly, copy, nonatomic) NSArray *serverCertificates;
@property (readonly, copy, nonatomic) NSString *service;
@property (readonly, nonatomic) NSString *remoteHostname;
@property (readonly, nonatomic) unsigned int remotePortNumber;
@property (readonly, nonatomic) BOOL isReadable;
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, nonatomic) BOOL isCellularConnection;
@property (readonly, nonatomic) BOOL isConstrained;
@property (readonly, nonatomic) BOOL isValid;
@property (copy, nonatomic) id /* block */ networkActivityChangeBlock;
@property (copy, nonatomic) id /* block */ serverTrustHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)cancel;
- (BOOL)connectToHost:(id)host withPort:(unsigned int)port service:(id)service;
- (BOOL)test_connectToUNIXSocket:(id)unixsocket service:(id)service;
- (BOOL)_connectToEndpoint:(id)endpoint service:(id)service;
- (id)_createConnectionWithEndpoint:(id)endpoint error:(int *)error;
- (void)_handleConnectionReady;
- (void)_handleConnectionFailure:(int)failure;
- (void)_configureTLS:(id)tls;
- (id)_negotiatedSecurityProtocol;
- (void)_networkActivityStarted;
- (void)_networkActivityEnded;
- (long long)writeBytes:(const char *)bytes length:(unsigned long long)length;
- (long long)readBytesIntoBuffer:(char *)buffer maxLength:(unsigned long long)length;
- (void)_scheduleNextRead;
- (void)_closeWithError:(id)error;
- (void)_closeWithErrorDomain:(id)domain code:(long long)code;
- (void)startActivity;
- (void)stopActivity;
- (void)close;
- (id)securityProtocol;
- (BOOL)setSecurityProtocol:(id)protocol;
- (void)enableThroughputMonitoring:(BOOL)monitoring;
- (void)registerForBytesAvailableWithHandler:(id /* block */)handler;
- (void)unregisterForBytesAvailable;
@end

#endif /* ECNWConnectionWrapper_h */
