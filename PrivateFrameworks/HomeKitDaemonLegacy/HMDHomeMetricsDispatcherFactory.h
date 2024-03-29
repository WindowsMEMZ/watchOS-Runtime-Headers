//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHomeMetricsDispatcherFactory_h
#define HMDHomeMetricsDispatcherFactory_h
@import Foundation;

#include "HMFObject.h"
#include "HMDHomeMetricsDispatcherFactory-Protocol.h"

@class NSString;

@interface HMDHomeMetricsDispatcherFactory : HMFObject<HMDHomeMetricsDispatcherFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)createHomeMetricsDispatcherWithIdentifier:(id)identifier logEventSubmitter:(id)submitter;
@end

#endif /* HMDHomeMetricsDispatcherFactory_h */
