//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSEngramKeyFetchMetric_h
#define IDSEngramKeyFetchMetric_h
@import Foundation;

#include "CUTCoreAnalyticsMetric-Protocol.h"

@class NSDictionary, NSError, NSString;

@interface IDSEngramKeyFetchMetric : NSObject<CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *name;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSError *keyFetchError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithKeyFetchError:(id)error;
@end

#endif /* IDSEngramKeyFetchMetric_h */
