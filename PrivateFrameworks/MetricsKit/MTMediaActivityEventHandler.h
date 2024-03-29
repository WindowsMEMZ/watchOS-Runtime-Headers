//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTMediaActivityEventHandler_h
#define MTMediaActivityEventHandler_h
@import Foundation;

#include "MTEventHandler.h"

@protocol MTMediaActivityEventHandlerDelegate;

@interface MTMediaActivityEventHandler : MTEventHandler

@property (weak, @dynamic, nonatomic) NSObject<MTMediaActivityEventHandlerDelegate> *delegate;

/* instance methods */
- (void)didCreateMetricsData:(id)data;
- (id)metricsDataForStartActionWithPosition:(unsigned long long)position overallPosition:(unsigned long long)position type:(id)type reason:(id)reason eventData:(id)data;
- (id)metricsDataForStopActionWithPosition:(unsigned long long)position overallPosition:(unsigned long long)position type:(id)type reason:(id)reason startMetricsData:(id)data eventData:(id)data;
- (id)knownFields;
- (id)eventVersion:(id)version;
@end

#endif /* MTMediaActivityEventHandler_h */
