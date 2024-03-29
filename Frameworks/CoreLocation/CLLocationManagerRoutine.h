//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CLLocationManagerRoutine_h
#define CLLocationManagerRoutine_h
@import Foundation;

#include "CLLocationManagerDelegate-Protocol.h"
#include "_CLLocationManagerRoutineProxy.h"

@protocol CLInertialDataManagerDelegate;

@interface CLLocationManagerRoutine : NSObject

@property (retain, nonatomic) _CLLocationManagerRoutineProxy *locationManagerRoutineProxy;
@property (nonatomic) NSObject<CLLocationManagerDelegate> *delegate;
@property (nonatomic) NSObject<CLInertialDataManagerDelegate> *inertialDelegate;

/* instance methods */
- (id)init;
- (id)initWithQueue:(id)queue;
- (void)dealloc;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
@end

#endif /* CLLocationManagerRoutine_h */
