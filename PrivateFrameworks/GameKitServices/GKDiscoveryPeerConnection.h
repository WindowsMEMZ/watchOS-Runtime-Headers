//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef GKDiscoveryPeerConnection_h
#define GKDiscoveryPeerConnection_h
@import Foundation;

#include "GKAsyncSocket.h"
#include "GKSimpleTimer.h"
#include "GKSimpleTimerDelegate-Protocol.h"

@class NSMutableArray, NSMutableData, NSString;
@protocol OS_dispatch_queue;

@interface GKDiscoveryPeerConnection : NSObject<GKSimpleTimerDelegate> {
  /* instance variables */
  BOOL _connected;
  GKAsyncSocket *_connectionSocket;
  NSMutableData *_dataReceived;
  unsigned int _currentSequenceNumber;
  NSMutableData *_dataToSendHoldingQueue;
  NSMutableArray *_receivedDataHoldingQueue;
  NSMutableArray *_messageReceiptHandlerList;
  NSMutableArray *_messageReceiptHandlerHoldingQueue;
  GKSimpleTimer *_heartbeatTimer;
  GKSimpleTimer *_heartbeatTimeoutTimer;
  GKSimpleTimer *_timeoutTimer;
  double _connectionTimeoutInSeconds;
  double _heartbeatIntervalInSeconds;
}

@property (copy, nonatomic) NSString *remoteServiceName;
@property (copy, nonatomic) NSString *localServiceName;
@property (copy, nonatomic) id /* block */ receiveDataHandler;
@property (copy, nonatomic) id /* block */ connectedHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;

/* class methods */
+ (void)checkConstants;
+ (unsigned long long)sendDataLimit;
+ (unsigned long long)receiveDataLimit;

/* instance methods */
- (id)initWithLocalServiceName:(id)name;
- (void)syncConnected:(id)connected;
- (BOOL)syncSetupNewSocket;
- (void)connectToSockAddr:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14] } *)addr port:(unsigned short)port;
- (void)attachSocketDescriptor:(int)descriptor;
- (BOOL)shouldDecideAboutConnection;
- (void)syncSendMessage:(int)message data:(id)data withCompletionHandler:(id /* block */)handler;
- (void)syncSendHello;
- (void)syncSendAccept;
- (void)syncAcceptedConnection;
- (void)syncSendMessageReceipt:(int)receipt sequenceNumber:(unsigned int)number;
- (void)syncProcessMessage:(int)message data:(id)data sequenceNumber:(unsigned int)number;
- (void)timeout:(id)timeout;
- (void)syncReceivedData:(id)data error:(id)error;
- (void)syncCloseConnectionNow;
- (void)invalidate;
- (void)dealloc;
- (void)sendData:(id)data withCompletionHandler:(id /* block */)handler;
@end

#endif /* GKDiscoveryPeerConnection_h */
