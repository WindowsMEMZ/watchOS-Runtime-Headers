//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCXPCConnection_h
#define VCXPCConnection_h
@import Foundation;

@class NSData, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction, OS_xpc_object;

@interface VCXPCConnection : NSObject {
  /* instance variables */
  NSObject<OS_os_transaction> *_transaction;
  BOOL _isPersistent;
  NSObject<OS_dispatch_source> *_timeoutTimer;
  NSObject<OS_dispatch_queue> *_timeoutTimerQueue;
  struct OpaqueFigCFWeakReferenceHolder * _timeoutTimerContext;
  BOOL _timeoutTimerStarted;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property int pid;
@property (retain, nonatomic) id context;
@property (retain, nonatomic) NSData *tokenData;
@property (retain, nonatomic) NSString *lastCalledApiName;
@property BOOL persistent;

/* class methods */
+ (void)selfTerminateDueToTimeout:(id)timeout;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)startTimeoutTimer;
- (void)stopTimeoutTimer;
- (void)createTimeoutTimer;
- (void)destroyTimeoutTimer;
- (id)description;
- (BOOL)isPersistent;
@end

#endif /* VCXPCConnection_h */
