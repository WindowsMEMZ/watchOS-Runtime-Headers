//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMStepCounter_h
#define CMStepCounter_h
@import Foundation;

#include "CMStepCounterProxy.h"

@interface CMStepCounter : NSObject

@property (readonly, nonatomic) CMStepCounterProxy *stepcounterProxy;
@property BOOL enabled;

/* class methods */
+ (BOOL)isStepCountingAvailable;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)queryStepCountStartingFrom:(id)from to:(id)to toQueue:(id)queue withHandler:(id /* block */)handler;
- (void)startStepCountingUpdatesToQueue:(id)queue updateOn:(long long)on withHandler:(id /* block */)handler;
- (void)stopStepCountingUpdates;
- (void)getTotalCountToQueue:(id)queue withHandler:(id /* block */)handler;
- (void)deleteHistory;
@end

#endif /* CMStepCounter_h */
