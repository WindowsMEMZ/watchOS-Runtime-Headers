//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetsdResourceAvailabilityClient_h
#define PLAssetsdResourceAvailabilityClient_h
@import Foundation;

#include "PLAssetsdBaseClient.h"

@interface PLAssetsdResourceAvailabilityClient : PLAssetsdBaseClient
/* instance methods */
- (id)sendMakeResourceAvailableRequest:(id)request reply:(id /* block */)reply;
- (void)sendMakeResourceUnavailableRequest:(id)request;
- (id)sendVideoRequest:(id)request reply:(id /* block */)reply;
- (id)sendResourceRepairRequest:(id)request errorCodes:(id)codes reply:(id /* block */)reply;
- (id)sendResourceRepairRequestForAsset:(id)asset errorCodes:(id)codes reply:(id /* block */)reply;
- (void)setSharedMemoryForCacheMetricsCollector:(id)collector;
@end

#endif /* PLAssetsdResourceAvailabilityClient_h */
