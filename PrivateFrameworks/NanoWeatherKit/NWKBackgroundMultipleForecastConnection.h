//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 949.0.0.0.0
//
#ifndef NWKBackgroundMultipleForecastConnection_h
#define NWKBackgroundMultipleForecastConnection_h
@import Foundation;

#include "NWKConnection-Protocol.h"
#include "NWKForecastObservable-Protocol.h"
#include "NWKXPCConnectionWrapper.h"

@class NSArray, NSString;

@interface NWKBackgroundMultipleForecastConnection : NSObject<NWKForecastObservable, NWKConnection>

@property (retain, nonatomic) NWKXPCConnectionWrapper *connectionWrapper;
@property (retain, nonatomic) NSArray *locations;
@property (copy, nonatomic) id /* block */ acknowledgedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithLocations:(id)locations;
- (void)cleanup;
- (void)invalidateWithCompletion:(id /* block */)completion;
- (void)resumeWithCompletion:(id /* block */)completion;
- (void)connectionAcknowledgedForBulkUpdateOfLocations:(id)locations;
- (void)location:(id)location isUpdating:(BOOL)updating error:(id)error;
- (void)location:(id)location token:(unsigned long long)token updatedAt:(id)at current:(id)current hourly:(id)hourly daily:(id)daily airQuality:(id)quality precipitation:(id)precipitation severeWeather:(id)weather;
@end

#endif /* NWKBackgroundMultipleForecastConnection_h */
