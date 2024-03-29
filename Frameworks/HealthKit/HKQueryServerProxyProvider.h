//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKQueryServerProxyProvider_h
#define HKQueryServerProxyProvider_h
@import Foundation;

#include "HKTaskServerProxyProvider.h"

@interface HKQueryServerProxyProvider : HKTaskServerProxyProvider

@property BOOL shouldForceReactivation;

/* instance methods */
- (id)initWithHealthStore:(id)store query:(id)query configuration:(id)configuration queryUUID:(id)uuid;
- (void)fetchProxyServiceEndpointFromSource:(id)source serviceIdentifier:(id)identifier endpointHandler:(id /* block */)handler errorHandler:(id /* block */)handler;
- (id)proxyServiceEndpointFromSource:(id)source serviceIdentifier:(id)identifier error:(id *)error;
@end

#endif /* HKQueryServerProxyProvider_h */
