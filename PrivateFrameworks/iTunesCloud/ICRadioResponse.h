//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICRadioResponse_h
#define ICRadioResponse_h
@import Foundation;

#include "ICStoreDialogResponse.h"
#include "ICURLAggregatedPerformanceMetrics.h"

@class NSDate, NSDictionary, NSError;

@interface ICRadioResponse : NSObject

@property (readonly, copy, nonatomic) NSDictionary *contentDictionary;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic) long long version;
@property (retain, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (readonly, copy, nonatomic) ICStoreDialogResponse *dialog;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSError *serverError;

/* instance methods */
- (id)initWithURLResponse:(id)urlresponse;
- (id)initWithResponseDictionary:(id)dictionary expirationDate:(id)date;
@end

#endif /* ICRadioResponse_h */
