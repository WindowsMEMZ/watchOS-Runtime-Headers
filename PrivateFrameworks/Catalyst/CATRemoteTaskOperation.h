//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.0.0.0.0
//
#ifndef CATRemoteTaskOperation_h
#define CATRemoteTaskOperation_h
@import Foundation;

#include "CATTaskOperation.h"
#include "CATTaskClient.h"

@class NSError, NSNumber;

@interface CATRemoteTaskOperation : CATTaskOperation {
  /* instance variables */
  NSError *mClientError;
}

@property (copy, nonatomic) NSNumber *remotePhase;
@property (readonly, nonatomic) CATTaskClient *client;

/* class methods */
+ (id)invalidRemoteTaskWithRequest:(id)request error:(id)error;
+ (BOOL)isCancelable;

/* instance methods */
- (id)initWithRequest:(id)request client:(id)client;
- (id)initWithRequest:(id)request clientError:(id)error;
- (BOOL)isAsynchronous;
- (void)cancel;
- (void)cancelOperationIfNeeded;
- (void)operationWillFinish;
- (void)main;
- (void)processNotificationWithName:(id)name userInfo:(id)info;
- (void)fetchProgress;
- (void)postNotificationWithName:(id)name userInfo:(id)info;
- (void)processMessage:(id)message;
- (void)clientFailedWithError:(id)error;
- (void)updateCompletedUnitCount:(long long)count andTotalUnitCount:(long long)count;
- (void)updateProgressWithRemoteProgress:(id)progress;
@end

#endif /* CATRemoteTaskOperation_h */
