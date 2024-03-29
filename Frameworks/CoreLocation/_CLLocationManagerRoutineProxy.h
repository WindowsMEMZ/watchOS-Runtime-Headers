//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef _CLLocationManagerRoutineProxy_h
#define _CLLocationManagerRoutineProxy_h
@import Foundation;

#include "CLLocationManagerRoutine.h"
#include "CLLocationManagerRoutineClientInterface-Protocol.h"

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _CLLocationManagerRoutineProxy : NSObject<CLLocationManagerRoutineClientInterface> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) id delegate;
@property (nonatomic) id inertialDelegate;
@property (nonatomic) CLLocationManagerRoutine *locationManagerRoutine;
@property (nonatomic) BOOL updating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQueue:(id)queue locationManagerRoutine:(id)routine;
- (void)dealloc;
- (void)didUpdateLocations:(id)locations;
- (void)didUpdateLocations:(id)locations withReply:(id /* block */)reply;
- (void)didUpdateInertialData:(id)data;
- (void)createConnection;
@end

#endif /* _CLLocationManagerRoutineProxy_h */
