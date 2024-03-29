//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICStorePlatformResponse_Protocol_h
#define ICStorePlatformResponse_Protocol_h
@import Foundation;

#include "ICStorePlatformResponse-Protocol.h"
#include "ICURLAggregatedPerformanceMetrics.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@protocol ICStorePlatformResponse <NSCopying, NSObject>

@property (readonly, copy, nonatomic) NSArray *allItems;
@property (readonly, copy, nonatomic) NSNumber *accountIdentifier;
@property (readonly, copy, nonatomic) NSNumber *enqueuerAccountIdentifier;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *storefrontIdentifier;
@property (readonly, copy, nonatomic) id rawResponse;
@property (readonly, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics;

/* instance methods */
- (void)enumerateItemsUsingBlock:(id /* block */)block;
- (id)itemForIdentifier:(id)identifier;
@end

#endif /* ICStorePlatformResponse_Protocol_h */
