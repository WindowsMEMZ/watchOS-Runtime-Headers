//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DVTSecureSocketProxy_h
#define DVTSecureSocketProxy_h
@import Foundation;

#include "DVTSecureSocketProxyBufferPool.h"

@protocol OS_dispatch_group, OS_dispatch_io, OS_dispatch_queue, OS_dispatch_source;

@interface DVTSecureSocketProxy : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *receiveFromConnectionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendToConnectionQueue;
@property (retain, nonatomic) DVTSecureSocketProxyBufferPool *receiveFromConnectionBufferPool;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *sendToConnectionCompleted;
@property (nonatomic) BOOL cancelled;
@property (retain, nonatomic) NSObject<OS_dispatch_io> *socketIOChannel;
@property (nonatomic) unsigned long long pendingWrites;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *canReceiveFromConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *canSendToConnection;
@property (copy, nonatomic) id /* block */ receiveDataFromConnection;
@property (copy, nonatomic) id /* block */ sendDataToConnection;
@property (copy, nonatomic) id /* block */ cleanupConnection;

/* instance methods */
- (void)_onIOQueue_cancelProxy;
- (void)_onIOQueue_finishCleanup;
- (void)receiveDataFromConnectionAndWriteToSocket;
- (void)readDataFromSocketAndSendToConnection;
- (void)_onIOQueue_sendDataToConnection:(id)connection;
@end

#endif /* DVTSecureSocketProxy_h */
