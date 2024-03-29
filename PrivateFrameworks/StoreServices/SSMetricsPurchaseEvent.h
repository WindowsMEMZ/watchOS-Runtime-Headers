//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSMetricsPurchaseEvent_h
#define SSMetricsPurchaseEvent_h
@import Foundation;

#include "SSMetricsBaseEvent.h"

@class NSString;

@interface SSMetricsPurchaseEvent : SSMetricsBaseEvent

@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (retain, nonatomic) NSString *transactionIdentifier;

/* instance methods */
- (id)init;
- (void)addFieldsFromPurchaseResponse:(id)response;
@end

#endif /* SSMetricsPurchaseEvent_h */
