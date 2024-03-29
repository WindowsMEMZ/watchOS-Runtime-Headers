//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.20.10.0.0
//
#ifndef WLKSiriBestPlayableForStatsIDsOperation_h
#define WLKSiriBestPlayableForStatsIDsOperation_h
@import Foundation;

#include "WLKUTSNetworkRequestOperation.h"
#include "WLKSiriBestPlayablesResponse.h"

@class NSArray;

@interface WLKSiriBestPlayableForStatsIDsOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSArray *statsIDs;
@property (readonly, nonatomic) WLKSiriBestPlayablesResponse *response;

/* instance methods */
- (id)initWithStatsIDs:(id)ids caller:(id)caller;
- (void)processResponse;
@end

#endif /* WLKSiriBestPlayableForStatsIDsOperation_h */
