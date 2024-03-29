//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMCoreDuetMediaUsageSource_h
#define BMCoreDuetMediaUsageSource_h
@import Foundation;

#include "BMSource.h"
#include "BMCoreDuetMediaUsageStore-Protocol.h"

@interface BMCoreDuetMediaUsageSource : BMSource

@property (retain, nonatomic) NSObject<BMCoreDuetMediaUsageStore> *storage;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (void)sendEvent:(id)event;
@end

#endif /* BMCoreDuetMediaUsageSource_h */
