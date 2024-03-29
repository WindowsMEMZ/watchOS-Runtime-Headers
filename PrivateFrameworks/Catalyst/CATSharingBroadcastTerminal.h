//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.0.0.0.0
//
#ifndef CATSharingBroadcastTerminal_h
#define CATSharingBroadcastTerminal_h
@import Foundation;

#include "CATOperationQueue.h"

@protocol CATSharingBroadcastPrimitives, CATSharingBroadcastTerminalDelegate;

@interface CATSharingBroadcastTerminal : NSObject {
  /* instance variables */
  NSObject<CATSharingBroadcastPrimitives> *mBroadcastPrimitive;
  NSObject<CATSharingBroadcastTerminalDelegate> *mDelegate;
  CATOperationQueue *mDelegationQueue;
  BOOL mInvalidated;
  BOOL mIsDisplayingPIN;
}

@property (nonatomic) BOOL broadcasting;
@property (readonly, nonatomic) CATOperationQueue *delegationQueue;

/* instance methods */
- (id)initWithBroadcastPrimitives:(id)primitives delegate:(id)delegate delegationQueue:(id)queue;
- (void)activate;
- (void)invalidate;
- (void)_activate;
- (void)_invalidateWithError:(id)error removePrimitiveHandlers:(BOOL)handlers deactivatePrimitives:(BOOL)primitives;
- (void)addPrimitiveHandlers;
- (void)removePrimitiveHandlers;
- (void)sessionNeedsToDisplayPin:(id)pin;
- (void)sessionHasPaired;
- (BOOL)isBroadcasting;
@end

#endif /* CATSharingBroadcastTerminal_h */
