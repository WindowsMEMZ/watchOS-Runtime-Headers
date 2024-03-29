//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.20.10.0.0
//
#ifndef WLKBasicContentRequestOperation_h
#define WLKBasicContentRequestOperation_h
@import Foundation;

#include "WLKUTSNetworkRequestOperation.h"
#include "WLKBasicContentMetadata.h"
#include "WLKBasicContentRequestResponse.h"

@class NSArray;

@interface WLKBasicContentRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSArray *contentIDs;
@property (readonly, nonatomic) WLKBasicContentRequestResponse *response;
@property (readonly, nonatomic) WLKBasicContentMetadata *basicContentMetadata;

/* instance methods */
- (id)initWithContentID:(id)id caller:(id)caller;
- (id)initWithContentIDs:(id)ids caller:(id)caller;
- (void)processResponse;
@end

#endif /* WLKBasicContentRequestOperation_h */
