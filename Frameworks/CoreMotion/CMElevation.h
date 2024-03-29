//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMElevation_h
#define CMElevation_h
@import Foundation;

#include "CMAltimeterInternal.h"

@interface CMElevation : NSObject {
  /* instance variables */
  CMAltimeterInternal *_internal;
}

@property (readonly, nonatomic) CMAltimeterInternal *_internal;

/* class methods */
+ (BOOL)isElevationAvailable;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)startElevationUpdatesWithHandler:(id /* block */)handler;
- (void)stopElevationUpdates;
@end

#endif /* CMElevation_h */
