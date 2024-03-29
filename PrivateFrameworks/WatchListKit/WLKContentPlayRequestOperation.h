//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.20.10.0.0
//
#ifndef WLKContentPlayRequestOperation_h
#define WLKContentPlayRequestOperation_h
@import Foundation;

#include "WLKUTSNetworkRequestOperation.h"
#include "WLKContentPlayResponse.h"

@class NSString;

@interface WLKContentPlayRequestOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKContentPlayResponse *response;
@property (readonly, copy, nonatomic) NSString *canonicalID;

/* instance methods */
- (id)initWithCanonicalID:(id)id caller:(id)caller;
- (void)processResponse;
@end

#endif /* WLKContentPlayRequestOperation_h */
