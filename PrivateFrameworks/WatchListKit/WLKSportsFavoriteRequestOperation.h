//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.20.10.0.0
//
#ifndef WLKSportsFavoriteRequestOperation_h
#define WLKSportsFavoriteRequestOperation_h
@import Foundation;

#include "WLKUTSNetworkRequestOperation.h"
#include "WLKSportsFavoriteResponse.h"

@class NSArray, NSString;

@interface WLKSportsFavoriteRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) unsigned long long action;
@property (readonly, copy, nonatomic) NSArray *ids;
@property (readonly, copy, nonatomic) NSString *caller;
@property (retain, nonatomic) WLKSportsFavoriteResponse *response;

/* instance methods */
- (id)initWithAction:(unsigned long long)action ids:(id)ids;
- (id)initWithAction:(unsigned long long)action ids:(id)ids caller:(id)caller;
- (void)processResponse;
- (void)prepareURLRequest:(id /* block */)urlrequest;
- (id)_preparePOSTQueryOnlyWithRequest:(id)request;
@end

#endif /* WLKSportsFavoriteRequestOperation_h */
