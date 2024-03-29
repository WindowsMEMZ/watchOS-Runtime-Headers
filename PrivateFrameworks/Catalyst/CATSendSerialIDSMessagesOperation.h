//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.0.0.0.0
//
#ifndef CATSendSerialIDSMessagesOperation_h
#define CATSendSerialIDSMessagesOperation_h
@import Foundation;

#include "CATOperation.h"
#include "CATIDSMessageOptions.h"

@class NSArray, NSString;
@protocol CATIDSPrimitives, OS_dispatch_queue;

@interface CATSendSerialIDSMessagesOperation : CATOperation {
  /* instance variables */
  NSObject<CATIDSPrimitives> *mPrimitives;
  NSObject<OS_dispatch_queue> *mWorkQueue;
  NSArray *mMessages;
  NSString *mDestinationAddress;
  NSString *mSourceAppleID;
  CATIDSMessageOptions *mOptions;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } mLock;
}

/* instance methods */
- (id)initWithIDSPrimitives:(id)idsprimitives workQueue:(id)queue messages:(id)messages destinationAddress:(id)address sourceAppleID:(id)id options:(id)options;
- (BOOL)isAsynchronous;
- (void)main;
- (void)sendMessages;
- (void)didSendMessagesWithError:(id)error;
@end

#endif /* CATSendSerialIDSMessagesOperation_h */
