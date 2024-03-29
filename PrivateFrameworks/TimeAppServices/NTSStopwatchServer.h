//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 912.3.3.0.0
//
#ifndef NTSStopwatchServer_h
#define NTSStopwatchServer_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface NTSStopwatchServer : NSObject<NSXPCListenerDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSMutableArray *_clientConnections;
  long long _state;
  double _startTotalTime;
  double _elapsedTotalTime;
  double _startLapTime;
  double _elapsedLapTime;
  NSArray *_laps;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)run;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)saveState:(long long)state startTotalTime:(double)time elapsedTotalTime:(double)time startLapTime:(double)time elapsedLapTime:(double)time laps:(id)laps;
- (void)getModelWithHandler:(id /* block */)handler;
- (void)_queue_updateClientsExcept:(id)except;
@end

#endif /* NTSStopwatchServer_h */
