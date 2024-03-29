//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.0.0.0.0
//
#ifndef CATSharingServiceTransport_h
#define CATSharingServiceTransport_h
@import Foundation;

#include "CATTransport.h"
#include "CATOperationQueue.h"
#include "CATSharingConnection-Protocol.h"
#include "CATSharingConnectionDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface CATSharingServiceTransport : CATTransport<CATSharingConnectionDelegate> {
  /* instance variables */
  NSObject<CATSharingConnection> *mConnection;
  CATOperationQueue *mCatalystQueue;
  NSMutableArray *mReceivedMessages;
  BOOL mIsActive;
  BOOL mIsInvalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConnection:(id)connection;
- (void)resumeConnection;
- (void)suspendConnection;
- (void)invalidateConnection;
- (id)operationToSendMessage:(id)message;
- (id)name;
- (void)connection:(id)connection receivedData:(id)data;
- (void)connectionClosed:(id)closed;
- (void)processReceivedMessages;
- (void)invalidateIfNeeded;
@end

#endif /* CATSharingServiceTransport_h */
